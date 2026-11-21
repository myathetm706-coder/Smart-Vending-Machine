# Smart-Vending-Machine
# Smart-Vending-Machine
# VENDORA — Smart Vending Machine
### Embedded Systems · IoT · Web-Based Interface · Automated Dispensing

A functional smart vending machine prototype developed by Group III at Naypyitaw State Polytechnic University (NSPU), integrating embedded control, wireless communication, motor-driven dispensing, product detection, and an interactive web interface.

---

## 1. Project Overview

**VENDORA** is a small-scale automated vending machine designed to simplify product selection and dispensing through an integrated hardware and software system.

The prototype combines an ESP32 microcontroller, Arduino-based control, DC motors, infrared sensors, an LCD display, and a web-based product selection interface.

Users interact with the vending machine through a mobile-friendly interface to select products and access the payment interface. The embedded system processes dispensing requests, activates the corresponding motor, and monitors product dispensing through sensors.

The project demonstrates the integration of embedded programming, electronic circuit design, wireless communication, and frontend development into a practical engineering application.

## 2. Project Objectives

- Develop an automated product selection and dispensing system.
- Integrate microcontrollers with electronic components for system control.
- Implement wireless communication between the user interface and embedded hardware.
- Design a user-friendly web interface for product selection and payment interaction.
- Apply sensor-based product detection and status monitoring.
- Explore hardware–software integration through practical engineering development.

## 3. System Architecture

The system consists of three primary functional layers:

### 3.1 User Interface Layer
A web-based interface developed using HTML, CSS, and JavaScript provides:
- Product browsing and selection.
- Product information and pricing.
- QR-based payment interface.
- ESP32 connection status.
- Payment confirmation interaction.

### 3.2 Embedded Control Layer
The ESP32 handles:
- Wi-Fi connectivity.
- HTTP web server operations.
- Product dispensing requests.
- Communication with the Arduino controller.
- LittleFS-based file serving.

The Arduino controller handles sensor inputs and display-related operations.

### 3.3 Hardware Layer
The physical prototype integrates:
- DC motors for product dispensing.
- Motor driver modules for motor control.
- IR sensors for product detection.
- LCD display for system status.
- LEDs and other electronic components.

## 4. Technologies & Tools

**Programming Languages**
- C / C++ (Arduino)
- HTML5
- CSS3
- JavaScript (ES6+)

**Microcontrollers & Hardware**
- ESP32
- Arduino UNO
- DC Motors
- IR Sensors
- Motor Driver Module (L293D / L298N)
- 16×2 LCD Display
- LEDs and Resistors

**Software & Development Tools**
- Arduino IDE
- LittleFS
- ESP32 Wi-Fi Libraries
- WebServer Library
- LiquidCrystal Library

## 5. Core Functionalities

| Feature | Description |
|---|---|
| Product Selection | Interactive selection of three available products |
| Payment Interface | QR-based payment display |
| Wireless Communication | ESP32 Wi-Fi connectivity |
| Motor Control | Automated product dispensing |
| Product Detection | IR sensor-based detection |
| Status Display | LCD-based system feedback |
| Web Server | ESP32-hosted web interface and HTTP requests |

## 6. System Operation

The vending process follows these stages:

1. **Product Selection:** The user selects a product through the web interface.
2. **Payment Interaction:** The interface displays the corresponding payment QR code.
3. **Request Processing:** The ESP32 receives the dispensing request.
4. **Controller Communication:** The ESP32 transmits the selected product code to the Arduino controller.
5. **Product Dispensing:** The corresponding motor mechanism is activated.
6. **Product Detection:** Sensors monitor the dispensing process.
7. **Status Feedback:** The LCD displays relevant system information.

## 7. Repository Structure

```text
smart-vending-machine/
│
├── README.md
│
├── documentation/
│   ├── project-report.pdf
│   └── participation-certificate.pdf
│
├── firmware/
│   ├── esp32/
│   │   └── esp32_controller.ino
│   │
│   └── arduino/
│       └── arduino_controller.ino
│
├── web-interface/
│   ├── index.html
│   ├── style.css
│   ├── script.js
│   └── assets/
│
└── hardware/
    ├── circuit-diagram/
    └── project-photos/
```

## 8. Development & Implementation

The project involved the integration of embedded software, electronic hardware, and a web-based interface.

The ESP32 firmware implements Wi-Fi connectivity, HTTP request handling, and communication with the Arduino controller. The frontend provides the product selection and payment interaction.

The hardware implementation combines motor drivers, DC motors, sensors, and an LCD display to support automated dispensing and system feedback.

## 9. Challenges & Technical Considerations

During development, the team encountered several technical challenges:

- IR sensor detection logic and signal handling.
- Repeated sensor counting and state-transition management.
- LCD address configuration.
- Ultrasonic distance measurement fluctuations.
- Motor driver failures.
- Hardware and software integration.
- Communication and payment-related implementation issues.

These challenges required hardware testing, software debugging, and iterative troubleshooting.

## 10. Learning Outcomes

Through this project, the team gained practical experience in:

- Embedded C/C++ programming.
- Microcontroller applications.
- ESP32 wireless communication.
- Electronic circuit assembly.
- Motor control and sensor integration.
- Frontend interface development.
- Hardware–software integration.
- Technical documentation and teamwork.

## 11. Project Documentation

The following materials provide additional information about the project:

- **Technical Project Report:** Detailed documentation of system design, hardware components, software implementation, testing, and conclusions.
- **Source Code:** Embedded firmware and web interface implementation.
- **Certificate of Participation:** Supporting evidence of project participation.
- **Project Photographs:** Visual documentation of the physical prototype and implementation.

## 12. Project Information

| Category | Details |
|---|---|
| Project Name | VENDORA — Smart Vending Machine |
| Institution | Naypyitaw State Polytechnic University |
| Department | Computer Science and Technology |
| Course | CST-511 — Microcontroller Applications |
| Project Group | Group III |
| Academic Year | 2026 |
| Supervisor | Daw Pann Myint Myat Phyoe |
| Project Period | September 2026 |

## 13. Development Team

Developed collaboratively by Group III:

- Mya Thet Maw
- Thu Thu Kywat Shin
- Phyo Thiri Kyaw
- Hsu Yadanar Htun
- Shwe Pyae Eain

## 14. Academic Context

**ICT Engineering Project Show 2026**

Naypyitaw State Polytechnic University (NSPU)

September 2026

---

*This repository documents the academic engineering project, including its technical implementation, supporting documentation, and development materials.*

## 15. Additional Project Materials

Additional supporting materials related to the VENDORA Smart Vending Machine project are available below.

- [View Additional Project Materials on Google Drive](https://drive.google.com/file/d/17NHgZ-FNxQw49HbZGYwgVYtI2E6-MUz9/view?usp=sharing)
