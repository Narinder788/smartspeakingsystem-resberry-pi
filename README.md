Smart Speaking System for Mute People
Overview

Communication is a challenge for mute and dumb people when interacting with regular individuals. Existing sign language devices are often expensive and not user-friendly.

This project is a Smart Speaking System that converts hand gestures and movements into voice messages and displays them on an LCD. The system consists of:
	•	Flex sensors
	•	Arduino Nano (client) with built-in accelerometer
	•	Raspberry Pi (server)
	•	Speaker
	•	LCD display
	•	Emergency button

How it works:
	1.	Hand gestures are detected by flex sensors and Arduino Nano’s accelerometer.
	2.	Arduino Nano sends gesture readings to Raspberry Pi.
	3.	Raspberry Pi converts the readings into audio messages via a speaker and displays the message on the LCD.
	4.	An emergency button allows users to send a pre-defined email to family members.

⸻
Prototype Architecture
Flex Sensor Connections:
	•	Flex Sensor 1: P1 → A0, +V5, series resistor; P2 → GND
	•	Flex Sensor 2: P1 → A1, +V5; P2 → GND


Components
	•	Arduino Nano (with accelerometer)
	•	Raspberry Pi
	•	Flex Sensors ×2
	•	Emergency Button
	•	16x2 LCD Display
	•	Speaker (USB + Audio Pin)
	•	Resistors, jumper wires, and battery

Emergency Button:
	•	Connected to D0/RX pins and GND of Arduino Nano

LCD Connections with Raspberry Pi:
	•	Vss, Rw, LEDK → GND
	•	VDD, LEDA → 5V GPIO
	•	Enable (E) → GPIO 23
	•	RS → GPIO 18
	•	D4, D5, D6, D7 → GPIO 24, 25, 7, 8

Speaker:
	•	Connected via USB and 3.5mm audio jack to Raspberry Pi

⸻

Software Setup
	1.	Download Arduino and Raspberry Pi codes from GitHub Repository￼
	2.	Upload Arduino code to Nano via USB
	3.	Connect Arduino Nano to Raspberry Pi via USB
	4.	Run Raspberry Pi Python code for processing and output

Programming Languages:
	•	C++ (Arduino Nano for sensor calibration)
	•	Python (Raspberry Pi for voice output and LCD display)

⸻

Testing
	•	Flex sensor angles were tested with a volunteer.
	•	The speaker confirmed proper audio output for each gesture.
	•	Emergency button tested by sending a sample email.
	•	System successfully converted hand gestures into voice and display messages.

⸻

User Manual
	1.	Hardware Setup:
	•	Connect flex sensors to Arduino Nano pins (A0, A1).
	•	Connect emergency button to D0/RX.
	•	Connect LCD and speaker to Raspberry Pi GPIO and USB/audio.
	2.	Software Setup:
	•	Upload Arduino Nano code.
	•	Run Raspberry Pi Python script.
	3.	Operation:
	•	Bend hand with flex sensors to generate messages.
	•	Press emergency button for immediate alerts via email.

Conclusion

This system bridges the communication gap between mute/dumb people and regular people. It is portable, easy to use, and supports emergency alerts. The project demonstrates serial communication between Arduino Nano and Raspberry Pi, and the integration of sensors with audio-visual outputs.
