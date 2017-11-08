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
LIBS:l298
LIBS:L298_Driver-cache
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
$Comp
L L298D U?
U 1 1 5A03F7D6
P 5800 3000
F 0 "U?" H 5800 3000 60  0000 C CNN
F 1 "L298D" H 5800 3100 60  0000 C CNN
F 2 "Multiwatt15-V" H 6000 3600 60  0000 C CNN
F 3 "" H 5800 3000 60  0001 C CNN
	1    5800 3000
	1    0    0    -1  
$EndComp
Text GLabel 4800 2800 0    60   Input ~ 0
OUT1
Text GLabel 4800 2900 0    60   Input ~ 0
OUT2
Text GLabel 6800 2800 2    60   Input ~ 0
OUT4
Text GLabel 6800 2900 2    60   Input ~ 0
OUT3
Wire Wire Line
	6650 2800 6800 2800
Wire Wire Line
	6800 2900 6650 2900
Wire Wire Line
	4950 2800 4800 2800
Wire Wire Line
	4800 2900 4950 2900
Wire Wire Line
	4950 2500 4450 2500
Wire Wire Line
	4450 2500 4450 3450
Wire Wire Line
	4450 3400 4950 3400
Wire Wire Line
	6650 2500 7150 2500
Wire Wire Line
	7150 2500 7150 3450
Wire Wire Line
	7150 3400 6650 3400
$Comp
L GND #PWR?
U 1 1 5A04015E
P 7150 3450
F 0 "#PWR?" H 7150 3200 50  0001 C CNN
F 1 "GND" H 7150 3300 50  0000 C CNN
F 2 "" H 7150 3450 50  0001 C CNN
F 3 "" H 7150 3450 50  0001 C CNN
	1    7150 3450
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A040174
P 5800 3800
F 0 "#PWR?" H 5800 3550 50  0001 C CNN
F 1 "GND" H 5800 3650 50  0000 C CNN
F 2 "" H 5800 3800 50  0001 C CNN
F 3 "" H 5800 3800 50  0001 C CNN
	1    5800 3800
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A04019C
P 4450 3450
F 0 "#PWR?" H 4450 3200 50  0001 C CNN
F 1 "GND" H 4450 3300 50  0000 C CNN
F 2 "" H 4450 3450 50  0001 C CNN
F 3 "" H 4450 3450 50  0001 C CNN
	1    4450 3450
	1    0    0    -1  
$EndComp
Wire Wire Line
	5800 3800 5800 3750
Connection ~ 7150 3400
Connection ~ 4450 3400
Text GLabel 7550 3350 2    60   Input ~ 0
DIRB/2.77
Text GLabel 2800 2900 0    60   Input ~ 0
DIRA/2.77
$Comp
L 74AHC1G04 U?
U 1 1 5A04048E
P 3400 3300
F 0 "U?" H 3595 3415 50  0000 C CNN
F 1 "74AHC1G04" H 3700 3150 50  0000 C CNN
F 2 "" H 3400 3300 50  0001 C CNN
F 3 "" H 3400 3300 50  0001 C CNN
	1    3400 3300
	1    0    0    -1  
$EndComp
$Comp
L 74AHC1G04 U?
U 1 1 5A040541
P 7750 2750
F 0 "U?" H 7945 2865 50  0000 C CNN
F 1 "74AHC1G04" H 8050 2600 50  0000 C CNN
F 2 "" H 7750 2750 50  0001 C CNN
F 3 "" H 7750 2750 50  0001 C CNN
	1    7750 2750
	-1   0    0    1   
$EndComp
Wire Wire Line
	3850 3300 4950 3300
Wire Wire Line
	2850 3300 2950 3300
Wire Wire Line
	4950 3100 3650 3100
Wire Wire Line
	3650 3100 3650 3000
Wire Wire Line
	3650 3000 2850 3000
Connection ~ 2850 3000
Wire Wire Line
	2850 3300 2850 2900
Wire Wire Line
	2850 2900 2800 2900
Wire Wire Line
	7300 2750 7300 3000
Wire Wire Line
	7300 3000 6650 3000
Wire Wire Line
	6650 3200 8200 3200
Wire Wire Line
	8200 3200 8200 2750
Wire Wire Line
	7550 3200 7550 3350
Connection ~ 7550 3200
$Comp
L GND #PWR?
U 1 1 5A04137A
P 7800 3000
F 0 "#PWR?" H 7800 2750 50  0001 C CNN
F 1 "GND" H 7800 2850 50  0000 C CNN
F 2 "" H 7800 3000 50  0001 C CNN
F 3 "" H 7800 3000 50  0001 C CNN
	1    7800 3000
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A041487
P 3350 3550
F 0 "#PWR?" H 3350 3300 50  0001 C CNN
F 1 "GND" H 3350 3400 50  0000 C CNN
F 2 "" H 3350 3550 50  0001 C CNN
F 3 "" H 3350 3550 50  0001 C CNN
	1    3350 3550
	1    0    0    -1  
$EndComp
Wire Wire Line
	3350 3550 3350 3500
Wire Wire Line
	7800 3000 7800 2950
$Comp
L VCC #PWR?
U 1 1 5A0418E4
P 7800 2500
F 0 "#PWR?" H 7800 2350 50  0001 C CNN
F 1 "VCC" H 7800 2650 50  0000 C CNN
F 2 "" H 7800 2500 50  0001 C CNN
F 3 "" H 7800 2500 50  0001 C CNN
	1    7800 2500
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR?
U 1 1 5A0419F1
P 3350 3050
F 0 "#PWR?" H 3350 2900 50  0001 C CNN
F 1 "VCC" H 3350 3200 50  0000 C CNN
F 2 "" H 3350 3050 50  0001 C CNN
F 3 "" H 3350 3050 50  0001 C CNN
	1    3350 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3350 3100 3350 3050
Wire Wire Line
	7800 2550 7800 2500
$EndSCHEMATC