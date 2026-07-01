# Smart-tracking-fan
An ESP32-based smart tracking fan that automatically follows a person using computer vision, providing intelligent and efficient airflow.
# Smart Tracking Fan

## Overview

The Smart Tracking Fan is an AI-powered fan automation project that automatically detects and tracks a person, rotating the fan to keep them centered for continuous airflow. The system combines computer vision with an ESP32-based motor control unit, making it a practical example of IoT, embedded systems, and artificial intelligence working together.

## Features

* 👤 Real-time human detection and tracking
* 🔄 Automatic fan rotation to follow the user
* ⚡ ESP32-based wireless controller
* 🎯 Smooth and accurate tracking
* 📷 Camera-based object detection
* 🔧 Easy to modify and expand
* 💡 Low-cost and energy-efficient design

## Hardware Used

* ESP32 Development Board
* Camera Module / USB Webcam
* Servo Motor or Stepper Motor
* Motor Driver (if required)
* Fan
* Power Supply
* Connecting Wires

## Software & Technologies

* Arduino IDE
* ESP32 Framework
* Python
* OpenCV
* Computer Vision
* Serial Communication

## Working Principle

1. The camera continuously captures video frames.
2. A computer vision algorithm detects the person.
3. The person's position is calculated relative to the center of the frame.
4. Direction commands are sent to the ESP32.
5. The ESP32 rotates the fan until the person is centered.
6. The process repeats in real time for continuous tracking.

## Project Structure

```
Smart-Tracking-Fan/
│── Arduino/
│── Python/
│── Images/
│── Videos/
│── README.md
│── LICENSE
```

## Applications

* Smart homes
* Offices
* Study rooms
* Laboratories
* Personal cooling systems
* IoT and AI learning projects

## Future Improvements

* Face recognition for personalized tracking
* Voice control
* Mobile application
* Automatic speed adjustment
* Multi-person tracking
* Gesture control

## Getting Started

1. Clone this repository.
2. Upload the ESP32 firmware using Arduino IDE.
3. Install the required Python libraries.
4. Connect the camera.
5. Run the Python tracking script.
6. Enjoy automatic fan tracking.

## Contributing

Contributions, suggestions, and improvements are welcome. Feel free to fork the repository and submit a pull request.

## License

This project is licensed under the MIT License.

---

Developed with ❤️ by **Yuvraj**
