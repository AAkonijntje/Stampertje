EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:switches
LIBS:relays
LIBS:motors
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:tcrt5000
LIBS:sensorModulo-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text Label 1975 5375 2    60   ~ 0
VDD
$Comp
L R R7
U 1 1 5A9FF4E3
P 2975 6675
F 0 "R7" V 3055 6675 50  0000 C CNN
F 1 "R56k" V 2975 6675 50  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 2905 6675 50  0001 C CNN
F 3 "" H 2975 6675 50  0001 C CNN
	1    2975 6675
	1    0    0    -1  
$EndComp
$Comp
L TCRT5000 U4
U 1 1 5A9FF4E9
P 3825 7025
F 0 "U4" H 3825 7025 60  0000 C CNN
F 1 "TCRT5000" H 3825 7175 60  0000 C CNN
F 2 "lib:TRTC5000" H 3825 7025 60  0001 C CNN
F 3 "" H 3825 7025 60  0001 C CNN
	1    3825 7025
	1    0    0    -1  
$EndComp
Text Label 1975 5475 2    60   ~ 0
GND
Text Label 2050 5275 2    60   ~ 0
sens1
$Comp
L Conn_01x03_Female J101
U 1 1 5ABB7538
P 1550 5375
F 0 "J101" H 1550 5575 50  0000 C CNN
F 1 "Conn_01x03_Female" H 1550 5175 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Angled_1x03_Pitch2.54mm" H 1550 5375 50  0001 C CNN
F 3 "" H 1550 5375 50  0001 C CNN
	1    1550 5375
	-1   0    0    1   
$EndComp
Wire Wire Line
	4425 6975 4500 6975
Wire Wire Line
	4500 7075 4425 7075
Wire Wire Line
	2350 6975 3175 6975
Wire Wire Line
	2975 6975 2975 6825
Connection ~ 2975 6975
Wire Wire Line
	2100 7075 3175 7075
Wire Wire Line
	2100 7075 2100 5475
Wire Wire Line
	2975 7075 2975 7275
Wire Wire Line
	2975 7275 4500 7275
Connection ~ 2975 7075
Wire Wire Line
	2350 5275 2350 6975
Wire Wire Line
	1750 5275 2350 5275
Wire Wire Line
	2100 5475 1750 5475
Wire Wire Line
	2225 6525 3550 6525
Wire Wire Line
	2225 5375 2225 6525
Wire Wire Line
	1750 5375 2225 5375
$Comp
L R R3
U 1 1 5A047E29
P 3700 6525
F 0 "R3" V 3780 6525 50  0000 C CNN
F 1 "R220k" V 3700 6525 50  0000 C CNN
F 2 "Resistors_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 3630 6525 50  0001 C CNN
F 3 "" H 3700 6525 50  0001 C CNN
	1    3700 6525
	0    1    1    0   
$EndComp
Connection ~ 2975 6525
Wire Wire Line
	3850 6525 4500 6525
Wire Wire Line
	4500 6525 4500 6975
Wire Wire Line
	4500 7275 4500 7075
$EndSCHEMATC
