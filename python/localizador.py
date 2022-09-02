from geolite2 import geolite2
import socket, subprocess 

cmd = r"C:\Program Files\Wireshark\tshark -i 4"

# if ethernet try
# cmd = r"C:\Program Files\Wireshark\tshark.exe "

# you can list all your interfaces by running "tshark.exe --list-interfaces"
# then if for instance you want to use the 4th try:
# cmd = r"C:\Program Files\Wireshark\tshark.exe -i 4"

process = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
my_ip = socket.gethostbyname(socket.gethostname())
reader = geolite2.reader()

def get_ip_location(ip):
    location = reader.get(ip)
    
    try:
        pais = location["country"]["names"]["en"]
    except:
        pais = "Desconhecido"

    try:
        estado = location["subdivisions"][0]["names"]["en"]
    except:
        estado = "Desconhecido"    

    try:
        cidade = location["cidade"]["names"]["en"]
    except:
        cidade = "Desconhecido"
    
    return pais, estado, cidade


for line in iter(process.stdout.readline, b""):
    columns = str(line).split(" ")

    if "SKYPE" in columns or "TCP" in columns:
        
        # for different tshark versions
        if "->" in columns:
            src_ip = columns[columns.index("->") - 1]
        elif "\\xe2\\x86\\x92" in columns:
            src_ip = columns[columns.index("\\xe2\\x86\\x92") - 1]
        else:
            continue
            
        if src_ip == my_ip:
            continue

        try:
            pais, sub, cidade = get_ip_location(src_ip)
            print(">>> " + pais + ", " + sub + ", " + cidade)
        except:
            try:
                real_ip = socket.gethostbyname(src_ip)
                pais, sub, cidade = get_ip_location(real_ip)
                print(">>> " + pais + ", " + sub + ", " + cidade + real_ip)
            except:
                print("Not found")