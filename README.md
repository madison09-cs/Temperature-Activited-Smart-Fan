# 🌡️ Temperature Activated Smart Fan

An Arduino-based smart cooling system that monitors temperature and automatically activates a fan and buzzer when a threshold is reached. Designed to convert analog temperature data into a real-world response, this project mimics how intelligent temperature regulation works in modern devices.

---

## 📝 Description

The **Temperature Activated Smart Fan** is a smart automation project that uses a **TMP36 temperature sensor** to monitor ambient temperature and control a **DC motor fan** and **piezo buzzer** accordingly.

When the temperature exceeds **80°F (≈26.7°C)**:
- The **DC motor (fan)** is turned **on**
- A **piezo buzzer** emits an alert
- This system simulates how smart electronics regulate heat

A **push-button** is also used to simulate manual control or reset functionalities.

---

## 🔧 Components Used

| Component               | Quantity |
|-------------------------|----------|
| Arduino Uno R3          | 1        |
| 9V Battery              | 1        |
| DC Motor                | 1        |
| Temperature Sensor (TMP36) | 1     |
| Push-Button             | 1        |
| 10kΩ Resistor           | 1        |
| TIP120 NPN Transistor   | 1        |
| Flyback Diode (e.g., 1N4007) | 1    |
| Piezo Buzzer            | 1        |
| Breadboard              | 1        |
| Jumper Wires / Cables   | Several  |
| USB Cable (for Arduino IDE) | 1     |

---

## 🚀 Installation & Setup

1. **Connect the TMP36 Temperature Sensor**:
   - VCC → 5V
   - GND → GND
   - OUT → Analog Pin A0

2. **Connect the DC Motor via TIP120 Transistor**:
   - Motor + → 9V battery +
   - Motor - → Collector of TIP120
   - Emitter of TIP120 → GND
   - Base of TIP120 → Digital Pin 9 (through a 1kΩ resistor recommended)
   - Flyback diode across motor terminals (cathode to +, anode to -)

3. **Connect the Piezo Buzzer**:
   - Positive lead → Digital Pin 8
   - Negative lead → GND

4. **Connect the Push-Button**:
   - One leg → Digital Pin 2
   - Other leg → GND (with a 10kΩ pull-down resistor)

5. **Upload Code via Arduino IDE**:
   - Open the Arduino IDE
   - Connect the Arduino Uno via USB
   - Upload your sketch
   - Open the Serial Monitor (optional) to see temperature readings in real-time

---

## ⚙️ How It Works

1. The **TMP36** reads the ambient temperature and converts the analog voltage into a Fahrenheit value.
2. If the temperature exceeds **80°F**:
   - The **DC motor (fan)** is activated using the TIP120 transistor as a switch.
   - The **buzzer** sounds an alert.
3. If the temperature is below the threshold, the fan and buzzer remain off.
4. The **push-button** can be programmed to reset the system or act as a manual override.

---

## 💼 Portfolio

Explore more projects and documentation here:  
🔗 [My Portfolio](https://sites.google.com/d/1kRYFgoPpI5KiRHlfU4u9C--i8z4OA6I5/p/1_ZLDAirpPNf5aijgyz-LQdDFrC5D1Gd2/edit)

---

## 🔬 Simulation

Try out the full circuit virtually using **Tinkercad**:  
▶️ [Tinkercad - Temperature Activated Smart Fan](https://www.tinkercad.com/things/lYeFC0zZli4-temperature-activated-smart-fan?sharecode=vWj4wilDKC2ACj5FddkXOg482MZ6C8VCMFNOsZqnjgg)

---

## 🙌 Credits

- Created by **[Madison Diggs]**
- Developed using **Arduino Uno R3**
- Inspired by real-world cooling systems and smart automation

---

## 📄 License

This project is open-source and available under the Code in the schools.

---
