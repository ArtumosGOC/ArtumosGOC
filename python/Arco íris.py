import time

for cor in range (30, 48):
    print(f"\033[1;{cor}m ARCO IRIS {cor} \033[00m")
    time.sleep(0.25)
