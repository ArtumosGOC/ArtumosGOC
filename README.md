<div align="center">

```
██████╗  ██████╗  ██████╗
██╔════╝ ██╔═══██╗██╔════╝
██║  ███╗██║   ██║██║
██║   ██║██║   ██║██║
╚██████╔╝╚██████╔╝╚██████╗
 ╚═════╝  ╚═════╝  ╚═════╝
                                  [ ArtumosGOC ]
```

</div>

---

```asm
; /proc/self — dump de registradores
section .data
  NAME      db "GOC", 0
  ARCH      db "x86_64 / ARM / AVR", 0
  OS        db "Linux — always", 0
  SHELL     db "zsh + oh-my-zsh", 0
  LOC       db "Maringá, PR — Brasil", 0
  FOCUS     db "civic tech · hardware · security", 0
  WIP       db "TPM 2.0 + encrypted apps", 0   ; <-- atualmente
```

---

## `[ HARDWARE STACK ]`

```
┌─────────────────────────────────────────────────────┐
│  CPU         x86_64  ·  ARM Cortex  ·  AVR  ·  ESP32 │
│  STORAGE     NVMe  ·  eMMC  ·  EEPROM                 │
│  SECURITY    TPM 2.0  ·  HSM  ·  Secure Boot          │
│  NET         Ethernet  ·  Wi-Fi  ·  LoRa              │
│  DEBUG       JTAG  ·  UART  ·  GDB  ·  Oscilloscope  │
└─────────────────────────────────────────────────────┘
```

---

## `[ PROJETOS — /dev/ ]`

| device | descrição | tech |
|--------|-----------|------|
| `sda0` **Maringá Participativa** | Plataforma de participação cívica open source | `HTML` `Bootstrap 5` `JS` `YAML` |
| `sda1` **web-terminal** | Terminal web containerizado por sessão | `Docker` `Podman` `Bash` |
| `sda2` **boletim-segurança** | Pipeline diário de cybersegurança via GitHub Actions | `Python` `BeautifulSoup` `GH Actions` |
| `sda3` **EditorYml** | Editor desktop PySide6/QML — gera YAML + HTML | `Python` `PySide6` `QML` |
| `sda4` **bitmap-font-8x8** | `static const uint8_t ascii[96][8]` — bare-metal | `C` `AVR` `STM32` `ESP32` |
| `sda5` **cloudflare-scripts** | Expose local → public + OAuth 2.0/PKCE DNS automation | `Python` `Cloudflare API` |

---

## `[ LINGUAGENS — objdump ]`

<div align="center">

![Python](https://img.shields.io/badge/Python-111827?style=for-the-badge&logo=python&logoColor=4ADE80)
![C](https://img.shields.io/badge/C-111827?style=for-the-badge&logo=c&logoColor=4ADE80)
![Bash](https://img.shields.io/badge/Bash-111827?style=for-the-badge&logo=gnubash&logoColor=4ADE80)
![JavaScript](https://img.shields.io/badge/JavaScript-111827?style=for-the-badge&logo=javascript&logoColor=4ADE80)
![YAML](https://img.shields.io/badge/YAML-111827?style=for-the-badge&logo=yaml&logoColor=4ADE80)
![HTML5](https://img.shields.io/badge/HTML5-111827?style=for-the-badge&logo=html5&logoColor=4ADE80)

</div>

---

## `[ INFRA — lsblk ]`

<div align="center">

![Linux](https://img.shields.io/badge/Linux-111827?style=for-the-badge&logo=linux&logoColor=4ADE80)
![Docker](https://img.shields.io/badge/Docker-111827?style=for-the-badge&logo=docker&logoColor=4ADE80)
![Podman](https://img.shields.io/badge/Podman-111827?style=for-the-badge&logo=podman&logoColor=4ADE80)
![Nginx](https://img.shields.io/badge/Nginx-111827?style=for-the-badge&logo=nginx&logoColor=4ADE80)
![GitHub Actions](https://img.shields.io/badge/GH_Actions-111827?style=for-the-badge&logo=githubactions&logoColor=4ADE80)
![Cloudflare](https://img.shields.io/badge/Cloudflare-111827?style=for-the-badge&logo=cloudflare&logoColor=4ADE80)
![Arduino](https://img.shields.io/badge/Arduino-111827?style=for-the-badge&logo=arduino&logoColor=4ADE80)
![ESP32](https://img.shields.io/badge/ESP32-111827?style=for-the-badge&logo=espressif&logoColor=4ADE80)

</div>

---

## `[ INTERESSES — /sys/kernel ]`

```c
typedef struct {
  char topic[64];
  uint8_t intensity;     /* 0x00 – 0xFF */
  bool  active;
} interest_t;

interest_t interests[] = {
  { "hardware_hacking",        0xF5, true  },
  { "tpm2_cryptography",       0xE8, true  },  // <-- WIP
  { "embedded_systems",        0xE0, true  },
  { "civic_tech",              0xD5, true  },
  { "container_internals",     0xC8, true  },
  { "reverse_engineering",     0xC0, true  },
  { "low_level_C",             0xB8, true  },
  { "watch_dogs_2_aesthetic",  0xFF, true  },  // vibe > skill
};
```

---

## `[ FILOSOFIA — .rodata ]`

```
0x0001  Dependências mínimas. CDN quando possível.
0x0002  Software público precisa ser auditável.
0x0003  Hardware é o único root of trust real — por isso TPM.
0x0004  Entender o sistema melhor do que quem o construiu é o melhor ataque.
0x0005  Civic tech não é nicho. É obrigação.
```

---

## `[ STATS — perf stat ]`

<div align="center">

![GitHub Stats](https://github-readme-stats.vercel.app/api?username=ArtumosGOC&show_icons=true&theme=dark&bg_color=111827&border_color=4ADE80&icon_color=4ADE80&title_color=4ADE80&text_color=D1FAE5&ring_color=4ADE80)

![Top Langs](https://github-readme-stats.vercel.app/api/top-langs/?username=ArtumosGOC&layout=compact&theme=dark&bg_color=111827&border_color=4ADE80&title_color=4ADE80&text_color=D1FAE5)

![Streak](https://streak-stats.demolab.com?user=ArtumosGOC&theme=dark&background=111827&border=4ADE80&ring=4ADE80&fire=4ADE80&currStreakLabel=4ADE80&sideLabels=4ADE80&dates=D1FAE5)

</div>

---

## `[ ORGS — /etc/group ]`

<div align="center">

[![Codaqui](https://img.shields.io/badge/org-Codaqui-111827?style=for-the-badge&logo=github&logoColor=4ADE80)](https://github.com/Codaqui)
[![Diretoria Inovação](https://img.shields.io/badge/org-Diretoria_Inovação_AMTECH-111827?style=for-the-badge&logo=github&logoColor=4ADE80)](https://github.com/Diretoria-de-Inovacao-AMTECH)

</div>

---

<div align="center">

```
[ HALT — 0x00 — KERNEL PANIC NOT EXPECTED ]

"Not_a_Bug. It's_an_Undocumented_Feature."
```

![Visitors](https://komarev.com/ghpvc/?username=ArtumosGOC&color=4ADE80&style=flat-square&label=0x_accesses)

</div>
