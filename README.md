```bash
#    ██╗    ██╗███████╗██████╗ ███████╗███████╗██████╗ ██╗   ██╗███████╗██████╗
#    ██║    ██║██╔════╝██╔══██╗██╔════╝██╔════╝██╔══██╗██║   ██║██╔════╝██╔══██╗
#    ██║ █╗ ██║█████╗  ██████╔╝███████╗█████╗  ██████╔╝██║   ██║█████╗  ██████╔╝
#    ██║███╗██║██╔══╝  ██╔══██╗╚════██║██╔══╝  ██╔══██╗╚██╗ ██╔╝██╔══╝  ██╔══██╗
#    ╚███╔███╔╝███████╗██████╔╝███████║███████╗██║  ██║ ╚████╔╝ ███████╗██║  ██║
#     ╚══╝╚══╝ ╚══════╝╚═════╝ ╚══════╝╚══════╝╚═╝  ╚═╝  ╚═══╝  ╚══════╝╚═╝  ╚═╝
#
```

A simple web server written in C++. Following Eric's Tutorials on [web server](https://www.youtube.com/@eom-dev).

### Dependencies

- C++17 or later
- POSIX-compliant operating system (e.g., Linux, macOS)
- A C++ compiler (e.g., g++)
- Netcat (for testing)

### Build and Run

```bash
# Build
make
```

```bash
# Run
./bin/webserver

```

or

```bash
# Build (if needed) and Run
make run
```

### Test

```bash
# Test with netcat
nc localhost 8080
```
