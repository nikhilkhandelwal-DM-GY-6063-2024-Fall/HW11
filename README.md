# HW11: Another Clock

## Description
This project is a physical, light-based time-keeping device built using an **Arduino UNO** and **6 LEDs**. The LEDs display the elapsed seconds (0–59) in a visually intuitive way by progressively turning off LEDs as time passes.

- **6 LEDs** are used to represent time in increments of **10 seconds**.
- At the start, all 6 LEDs are ON. For every **10 seconds** elapsed, one LED turns OFF.
- When the seconds reset (0–59), all LEDs turn back ON.

This project also outputs the elapsed seconds to the **Serial Monitor** for verification.

---

## How It Works

1. **millis()** calculates the elapsed time in milliseconds since the program started.
2. Elapsed seconds are derived by: seconds = (millis() / 1000) % 60;
3. The number of active LEDs is calculated as: activeLEDs = 6 - (seconds / 10);
- Every 10 seconds, one LED turns off.
4. The LEDs are controlled with **digitalWrite()** to turn them ON or OFF.

---

## Components Used

- **1 Arduino UNO**
- **6 LEDs**
- **6 Resistors** (100Ω–200Ω)
- Jumper wires
- Breadboard

---

## Circuit Diagram

### Connections:
| LED   | Pin   |
|-------|-------|
| LED 1 | Pin 2 |
| LED 2 | Pin 3 |
| LED 3 | Pin 4 |
| LED 4 | Pin 5 |
| LED 5 | Pin 6 |
| LED 6 | Pin 7 |

- The **anode** (long leg) of each LED connects to a digital pin.
- The **cathode** (short leg) connects through a **resistor** to **GND**.

---
## Video Demonstration

[![Watch the video](https://github.com/username/repository-name/blob/main/thumbnail.png)
