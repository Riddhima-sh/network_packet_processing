# 🛰️ Network Packet Processing Project (C++)

This project simulates basic network packet processing using object-oriented principles in C++. It allows you to model different types of packets, protocols, and statuses, and perform validation and status checks.

---

## 🧠 Features

- ✅ Uses enums for `PacketType`, `Protocol`, and `Status`
- 🧱 Object-Oriented Design via a `Packet` class
- ✅ Packet validation logic based on protocol and type
- 📊 Displays packet information clearly in console output
- 🚫 Detects invalid packets via `isError()` method

---

## 📁 Project Structure

```

network-packet-project/
├── Packet.hpp          # Class declaration
├── Packet.cpp          # Class implementation
├── PacketType.hpp      # Enum for packet types
├── Protocol.hpp        # Enum for protocols
├── Status.hpp          # Enum for packet status
├── main.cpp            # Entry point (testing and usage)
├── README.md           # Project description

```

---

## 🚀 How to Run

### 🛠️ Compile the Project

Open terminal inside the project folder and run:

```bash
g++ main.cpp Packet.cpp -o packet_app
```

### ▶️ Run the Application

```bash
./packet_app        # On Linux/macOS
packet_app.exe      # On Windows
```

---

## 🧪 Sample Output

```
Packet Type is: DATA
Protocol Name is: UDP
Status is: VALID

Packet Type is: CONTROL
Protocol Name is: TCP
Status is: VALID
```

---

## 🛠️ Technologies Used

- Language: **C++**
- Compiler: `g++` / MinGW / GCC
- IDE: [Visual Studio Code](https://code.visualstudio.com/) (recommended)

---

## 🤖 Future Improvements

- Add support for packet timestamps
- Add more protocol types (e.g., HTTPS, SMTP)
- Serialize packets to JSON
- Build a GUI interface using Qt or SDL

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE)

---

## 🙋‍♀️ Author

**Riddhima Sharma**
B.Tech IT | Aspiring Cybersecurity & Software Engineer
GitHub: [@Riddhima-Sh](https://github.com/Riddhima-Sh)
LinkedIn: [Riddhima Sharma](https://www.linkedin.com/in/riddhimasharma2004)
