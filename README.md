<div align="center">

```
┌─────────────────────────────────────────────────────────────────────┐
│                                                                     │
│   ██████╗  ██████╗  ██████╗     // ArtumosGOC                      │
│  ██╔════╝ ██╔═══██╗██╔════╝     // SYSTEM ARCHITECT                │
│  ██║  ███╗██║   ██║██║          // HARDWARE + SECURITY             │
│  ██║   ██║██║   ██║██║          // CIVIC TECH DEVELOPER            │
│  ╚██████╔╝╚██████╔╝╚██████╗     //                                 │
│   ╚═════╝  ╚═════╝  ╚═════╝     // Maringá, PR — BR               │
│                                                                     │
│   [CPU: zsh]  [KERNEL: linux]  [SEC: tpm2.0]  [STATUS: online]     │
└─────────────────────────────────────────────────────────────────────┘
```

[![Typing SVG](https://readme-typing-svg.demolab.com?font=Share+Tech+Mono&size=16&pause=1000&color=00FF41&background=00000000&center=true&vCenter=true&width=650&lines=Studying+TPM+2.0+%2F+Hardware-Bound+Cryptography+%F0%9F%94%90;Civic+Tech+%7C+Embedded+Systems+%7C+Infra;Container+Internals+%7C+Rootless+Podman+%7C+Docker;Bare-Metal+C+%7C+ESP32+%7C+STM32+%7C+AVR;watch-dogs+2+was+a+documentary+%F0%9F%8E%AD)](https://github.com/ArtumosGOC)

</div>

---

## `[ HARDWARE PROFILE ]`

```asm
; /proc/self — ArtumosGOC
; ─────────────────────────────────────────────────────────────────────
ROLE:         Civic Tech Developer / Hardware Hacker / Infra Engineer
OS:           Linux (Debian-based)  │  SHELL: zsh + oh-my-zsh
CURRENT_OBJ:  TPM 2.0 + hardware-bound encrypted app research
FOCUS:        Bare-metal C, embedded MCUs, container runtimes, YAML-driven civic web
TRUST_ANCHOR: Hardware ← "the only real root of trust"
PHILOSOPHY:   Zero bloat. CDN-only. Lean stack. Auditable everything.
; ─────────────────────────────────────────────────────────────────────
```

---

## `[ ACTIVE PROJECTS — SCHEMATIC VIEW ]`

```
┌───────────────────────────────────┐   ┌───────────────────────────────────┐
│  🏙️  Maringá Participativa        │   │  🔐  TPM 2.0 Research              │
│  ─────────────────────────────    │   │  ─────────────────────────────    │
│  Civic participation platform     │   │  Hardware-bound crypto app dev    │
│  HTML · CSS · Bootstrap 5         │   │  tpm2-tools · tss2 · C libs       │
│  JS · YAML · js-yaml              │   │  Studying: sealing, PCR, NVRAM    │
│  Deployed via GitHub Pages        │   │  Target: tamper-evident storage   │
└───────────────────────────────────┘   └───────────────────────────────────┘

┌───────────────────────────────────┐   ┌───────────────────────────────────┐
│  🖥️  web-terminal                 │   │  📰  boletim-diario-segurança      │
│  ─────────────────────────────    │   │  ─────────────────────────────    │
│  Per-session container runtime   │   │  Daily infosec bulletin bot        │
│  Docker · Podman (rootless)       │   │  GitHub Actions · Python 3        │
│  VFS storage driver               │   │  BeautifulSoup · lxml             │
│  Bypass overlayfs + iptables      │   │  Auto-scrape → Markdown report    │
└───────────────────────────────────┘   └───────────────────────────────────┘

┌───────────────────────────────────┐   ┌───────────────────────────────────┐
│  🔡  bitmap-font / bare-metal     │   │  🛠️  EditorYml (Desktop App)       │
│  ─────────────────────────────    │   │  ─────────────────────────────    │
│  8×8 ASCII font — C header        │   │  PySide6 / QML YAML editor        │
│  96-char table, uint8_t[96][8]    │   │  Generates site HTML + YAML       │
│  AVR · ESP32 · STM32              │   │  Google Drive attachment sync     │
│  No OS. No libs. Pure registers.  │   │  Image carousel support           │
└───────────────────────────────────┘   └───────────────────────────────────┘
```

---

## `[ SIGNAL STACK — SKILL MATRIX ]`

```
LAYER 0 — HARDWARE & EMBEDDED
──────────────────────────────────────────────────────────────
  C (bare-metal)     ████████████░░  AVR / ESP32 / STM32
  Assembly (AVR)     ████████░░░░░░  Register-level
  TPM 2.0 (tss2)     ██████░░░░░░░░  Learning / Research
  Web Serial API     ███████░░░░░░░  Browser ↔ Arduino
  Bitmap fonts       █████████░░░░░  uint8_t pixel arrays
──────────────────────────────────────────────────────────────

LAYER 1 — INFRA & CONTAINERS
──────────────────────────────────────────────────────────────
  Docker / Podman    ████████████░░  Rootless, VFS, nested
  Nginx              ████████████░░  Reverse proxy, auth
  GitHub Actions     █████████████░  CI/CD, automation
  Cloudflare         ███████████░░░  Tunnel, DNS, OAuth PKCE
  Linux (Debian)     █████████████░  Daily driver
──────────────────────────────────────────────────────────────

LAYER 2 — SOFTWARE
──────────────────────────────────────────────────────────────
  Python 3           █████████████░  Scripts, GH Actions, PySide6
  Bash / Zsh         ████████████░░  Automation, DevOps
  HTML/CSS/JS        ████████████░░  Vanilla, Bootstrap 5
  YAML / js-yaml     █████████████░  Site content engine
  PySide6 / QML      ████████░░░░░░  Desktop app dev
──────────────────────────────────────────────────────────────
```

---

## `[ SECURITY INTERESTS — /proc/threat_model ]`

```yaml
hardware_security:
  - TPM 2.0: sealing blobs, PCR attestation, NVRAM storage
  - Secure boot chain analysis
  - Hardware root-of-trust concepts

infra_security:
  - Container runtime isolation (seccomp, AppArmor, namespaces)
  - Rootless container privilege model
  - OAuth 2.0 + PKCE flows, token lifecycle

low_level:
  - Kernel restrictions in nested container environments
  - clone() CLONE_NEWUSER syscall restrictions
  - VFS vs overlayfs storage driver security model

recon_interest:
  - Network exposure via Cloudflare Tunnel (zero-trust model)
  - Daily infosec bulletin monitoring (Codaqui org)
  - Browser-based runtimes (Pyodide, Web Serial API)
```

---

## `[ ORGANIZATIONS ]`

<div align="center">

[![Codaqui](https://img.shields.io/badge/Org-Codaqui-0D1117?style=for-the-badge&logo=github&logoColor=00FF41)](https://github.com/Codaqui)
&nbsp;
[![Maringá Participativa](https://img.shields.io/badge/Project-Maringá_Participativa-0D1117?style=for-the-badge&logo=github&logoColor=00FF41)](https://github.com/ArtumosGOC)

</div>

---

## `[ RUNTIME STATS ]`

<div align="center">

![GitHub Stats](https://github-readme-stats.vercel.app/api?username=ArtumosGOC&show_icons=true&theme=chartreuse-dark&bg_color=0D1117&border_color=00FF41&icon_color=00FF41&title_color=00FF41&text_color=c9d1d9&rank_icon=github)

![Top Langs](https://github-readme-stats.vercel.app/api/top-langs/?username=ArtumosGOC&layout=compact&bg_color=0D1117&border_color=00FF41&title_color=00FF41&text_color=c9d1d9)

![Streak](https://streak-stats.demolab.com?user=ArtumosGOC&theme=dark&background=0D1117&border=00FF41&ring=00FF41&fire=00FF41&currStreakLabel=00FF41&sideLabels=00FF41&dates=c9d1d9)

</div>

---

## `[ FIRMWARE v2.0 — DESIGN RULES ]`

```c
/* principles.h */

#define DEPENDENCY_POLICY       ZERO_UNLESS_JUSTIFIED
#define TRUST_BOUNDARY          HARDWARE_ONLY
#define DEPLOYMENT_TARGET       CDN_OR_STATIC
#define CODE_STYLE              AUDITABLE_AND_LEAN
#define OPEN_SOURCE_STANCE      IF_IT_TOUCHES_PUBLIC_DATA_IT_SHIPS_OPEN

typedef enum {
    PRIORITY_CIVIC_IMPACT,
    PRIORITY_SECURITY,
    PRIORITY_REPRODUCIBILITY,
    PRIORITY_PERFORMANCE,
} BuildPriority;
```

---

<div align="center">

```
╔═══════════════════════════════════════════════════════════╗
║  [ SESSION CLOSED ]   [ MEMORY WIPED ]   [ TPM SEALED ]  ║
╚═══════════════════════════════════════════════════════════╝
```

![Visitor Count](https://komarev.com/ghpvc/?username=ArtumosGOC&color=00ff41&style=flat-square&label=PACKETS_RECEIVED)

*"The hardware doesn't lie. The software might."*

</div>
