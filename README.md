
<h1>OVERVIEW</h1>
The power factor of a circuit can be found out from the wattmeter reading and
voltmeter and ammeter readings suitably connected in the circuit.

Power factor = Wattmeter reading / (Voltmeter reading x ammeter reading)

Power factor = True Power / Apparent Power

This method involves mathematical calculations. Sometimes it is required to measure
the power factor of the circuit instantaneously when the power factor of the load is
varying continuously.

This purpose is served by connecting a power factor meter in the circuit. It indicates
the power factor of the circuit directly on the scale or in display.

<h1>Measuring Method</h1>
There are 2 methods to determine the phase angle. The first method is by
measuring the time difference to reach peak value (or 0 value) between both
waves while using the same starting time or point. This method is direct and
simpler method to obtain phase angle. This method is measured based on 2
reference point only (the starting point and peak value point) and it is suitable
for pure wave and distorted or high disturbance wave. This method required
to measure the period of wave in order to determine the angle value.
This most will be using this method for calculation.

![image](https://github.com/user-attachments/assets/67769664-e010-45c0-97cb-b2ad0f2684cb)

second method is going through calculation by comparing values
betweenaveraged instantaneous value and product of RMS values. Phase
angle is related to power factor which can be obtained by dividing averaged
instantaneous of product values (multiplication of every instantaneous value
of wave A and B and average them) and RMS product values (multiplication
of RMS wave A and RMS wave B). It is more complicated compared to the
previous method as many calculation is involved. This method is more like an
average value as each segment of wave also involved for phase angle
calculation. Wave frequency or period is not required over a large quantity of
sample readings. This method may not be accurate on highly disordered wave
or have a lot of electrical noises.
Thesecond method is going through calculation by comparing values
between averaged instantaneous value and product of RMS values. Phase
angle is related to power factor which can be obtained by dividing averaged
instantaneous of product values (multiplication of every instantaneous value
of wave A and B and average them) and RMS product values (multiplication
of RMS wave A and RMS wave B). It is more complicated compared to the
previous method as many calculation is involved. This method is more like an
average value as each segment of wave also involved for phase angle
calculation. Wave frequency or period is not required over a large quantity of
sample readings. This method may not be accurate on highly disordered wave
or have a lot of electrical noises.

![image](https://github.com/user-attachments/assets/c7fde0d6-0c51-42bb-8dad-2b50b688efc9)


<h1>Hardware Selection</h1>
<h3> Raspberry Pi Pico:</h3>
Pi Pico has the ability to measure AC voltage or AC current using
analog input pin. For Pi Pico , there are total 30 GPIO pins out of which 4 are
for analog inputs with ADC converters, from 4 only 3 works as analog inputs
as the 4th one is connected to the onboard temperature sensor which
measures temperature by converting the analog values to digital output.
Raspberry Pi Pico has 3 ADC channels with 12 bit resolution. which should
have a sampling rate between 0-4095 . In order to measure phase angle, 2
Analog input pins are required.<br /><br />

<h3> Potential Transformer:</h3>
Used a step down transformer to step down voltage from 240 volt AC to 12
Volt AC and further this voltage is step down using voltage divider circuit.
Because Pi Pico can never measure voltage more than 3.3 volt directly.<br /><br />

<h3> Current sensor:</h3>
Used a 5A current transformer in this project. Output wave of current
sensor is fed to Pi Pico analog channel. Current sensor can also use to measure
current and to measure current wave form of load current.<br /><br />

<h3> Display:</h3>
Used a 2.44 cm (0.96 Inch) I2C/IIC 4pin OLED Display Module BLUE can
be interfaced with any microcontroller using SPI/IIC/I2C protocols. It is
having a resolution of 128x64. The package includes display board, display, 4
pin male header pre-soldered to board.
OLED monochrome 128x64 dot matrix display module. The characteristics of
this display module are high brightness, self-emission, high contrast ratio, slim/thin
outline, wide viewing angle, wide temperature range and low power consumption.<br /><br />

<h3> Other Components:</h3>
Used other required components like resistors for voltage divider, capacitor for
dc offset, power supply for providing constant voltage to the microcontroller
and display.

<h1>Conclusion</h1>

This Power Factor Meter is an essential tool for electrical engineers and technicians seeking to monitor and optimize electrical systems. By providing real-time data on incoming line voltage, output current, and power factor, this device helps users ensure the efficient and reliable operation of connected equipment. With accurate measurements, it aids in identifying potential issues, improving energy efficiency, and maintaining system stability. Whether used in industrial, commercial, or residential settings, this Power Factor Meter is a valuable addition to any toolkit, enhancing the ability to manage and troubleshoot electrical systems effectively.
