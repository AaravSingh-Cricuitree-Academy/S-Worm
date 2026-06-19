# HARDWARE SPECS-

<img width="1153" height="643" alt="image" src="https://github.com/user-attachments/assets/ad33db9e-c29c-45bb-9f20-d04eb1571db9" />

**Processing & Control**

    1 STM32F405RGT6 (Main Flight Controller MCU)- Brain of the system
    
    2 ADS112U04IPWR (Precision ADC)
  
**Navigation & Positioning**

    1) MAX-M10S-00B (GNSS/GPS Module) + U.FL connector
    
    2) BMP580 (Barometric Pressure Sensor)
    
    3) ICM-45686 (6-axis IMU)
    
    4) MMC5983MA (3-axis Magnetometer)
  
**Communications**

		1) E22-900M22S (900 MHz Telemetry/Radio Module) + U.Fl connector
		
**Power System**

	1) TPS2121RUXR (Power Multiplexer / Power Path Controller)
	2) TPS62130RGTR (Buck Converter)
	3) 2.2 µH Power Inductor
	
**Clock Sources**

	1) X322525MOB4SI- 25 MHz Crystal Oscillator
	2) Q13FC1350000400- 32.768 kHz Crystal (LSE)

**User Interface & Debug**

	1) USB-A Connector
	2) 3 × Status LEDs
	3) 2 × Tactile Push Buttons for reset and boot
	4) Test pads for major nets

**Passive Components**

	Decoupling capacitors (100 nF, 1 µF, 2.2 µF, 4.7 µF, 10 µF, 22 µF)
	Timing/load capacitors (6.8 pF, 20 pF)
	Filtering capacitors (3.3 nF, 10 nF)
	Resistor network (10 kΩ, 30 kΩ, 75 kΩ, 80 kΩ, 100 kΩ)
	FCM1608KF-601T03 (Ferrite Bead)

## Build reasoning
STM32F405 because i was drawing inspo from the existing speedybee f405 board

I ran out of ADCs in my STM32 so im reading the voltage given by my battery via a voltage divider and ADC to convert the analog voltage to UART so my STM32 can read it.

Cloclks, buttons, IMU, magnetometer and barometeric sensor were picked up from the guide

Power mux to allow seamless switch between USB power and battery power. 

E22-900M-2S because it has long range and I have worked with the module before

MAX-M10S-00B good features at a reasonable cost

Passive compnents were selected from the datasheet and/or the guide

Rest is rather self explainatory

## Schematic for quick reference

<img width="431" height="295" alt="image" src="https://github.com/user-attachments/assets/e7d71d60-ee83-4b71-a88e-fb8e320ecec0" />
