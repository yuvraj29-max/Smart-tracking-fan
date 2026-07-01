# Smart-tracking-fan
An ESP32-based smart tracking fan that automatically follows a person using computer vision, providing intelligent and efficient airflow.

> 🏆 **Award:** Secured **3rd Position** at **CGC Ideathon 2K25**

## 📖 Overview

The **Smart Tracking Fan** is an Arduino-based intelligent cooling system that automatically rotates toward the person in the room using **three ultrasonic sensors**. Instead of manually adjusting the fan, the system detects the user's position and turns the fan in that direction, providing a smarter and more comfortable cooling experience.

This project was developed as an innovative automation solution and was recognized with **3rd Position at CGC Ideathon 2K25**.

---

## ✨ Features

* 👤 Automatic human presence detection
* 📡 Three ultrasonic sensors for left, center, and right tracking
* 🔄 Servo motor rotates the fan toward the detected user
* 🌬️ DC motor drives the fan continuously
* ⚡ Fast response with real-time tracking
* 💰 Low-cost and energy-efficient design
* 🔧 Easy to build using commonly available components

---

## 🛠 Hardware Used

* Arduino Uno
* 3 × HC-SR04 Ultrasonic Sensors
* Servo Motor (SG90/MG996R)
* DC Motor (Fan)
* L298N Motor Driver
* External Power Supply
* Jumper Wires
* Breadboard / PCB

---

## 💻 Software Used

* Arduino IDE
* Embedded C / Arduino Programming

---

## ⚙️ Working Principle

1. Three ultrasonic sensors continuously monitor the **left**, **center**, and **right** sides.
2. When a person enters the detection range of a sensor, the Arduino identifies which sensor has detected the person.
3. The servo motor rotates the fan toward the active sensor:

   * **Left sensor → Fan turns left**
   * **Center sensor → Fan faces forward**
   * **Right sensor → Fan turns right**
4. The DC motor keeps the fan running while the servo changes its direction.
5. If no person is detected, the fan returns to its default center position.

---

## 📂 Project Structure

```text
Smart-tracking-fan/
│── smart_tracking_fan.ino
│── README.md
│── Images/
│── Circuit_Diagram/
│── Videos/
│── LICENSE
```

---

## 🚀 Applications

* Smart Homes
* Offices
* Classrooms
* Study Rooms
* Hospitals
* Libraries
* Energy-Efficient Cooling Systems

---

## 🔮 Future Improvements

* Face recognition-based tracking
* Camera and AI-based object tracking
* Automatic fan speed control based on distance or temperature
* Mobile app and Wi-Fi control using ESP32
* Voice assistant integration
* Occupancy analytics and power-saving modes

---

## 🏆 Achievement

This project was presented at **CGC Ideathon 2K25**, where it was awarded **3rd Position** for its practical design, innovation, and real-world application in smart automation.

---

## ▶️ Getting Started

1. Clone this repository.
2. Open `smart_tracking_fan.ino` in Arduino IDE.
3. Connect the hardware as per the circuit diagram.
4. Upload the code to the Arduino Uno.
5. Power the system.
6. The fan will automatically rotate toward the person detected by the ultrasonic sensors.

---

## 🤝 Contributing

Contributions, suggestions, and improvements are welcome. Feel free to fork the repository and submit a pull request.

---

## 📄 License

This project is licensed under the MIT License.

---

## 👨‍💻 Author

**Yuvraj Narang**

If you found this project helpful, please consider giving it a ⭐ on GitHub.
