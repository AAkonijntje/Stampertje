EESchema Schematic File Version 2
LIBS:Arduino_Uno_R3_From_Scratch-rescue
LIBS:power
LIBS:device
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
LIBS:Arduino_Uno_R3_From_Scratch
LIBS:MFN_Atmel
LIBS:MFN_STMicro
LIBS:degson
LIBS:Arduino_Uno_R3_From_Scratch-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 4 6
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
L MC33269ST-5.OT3 IC401
U 1 1 5A96669E
P 5400 2900
F 0 "IC401" H 5600 2650 60  0000 C CNN
F 1 "MC33269ST-5.OT3" H 5400 3150 60  0000 C CNN
F 2 "PHT6NQ10T_135:SOT230P700X180-4N" H 5050 2800 60  0001 C CNN
F 3 "" H 5050 2800 60  0001 C CNN
	1    5400 2900
	1    0    0    -1  
$EndComp
$Comp
L D D401
U 1 1 5A970C82
P 4300 2800
F 0 "D401" H 4300 2900 50  0000 C CNN
F 1 "D" H 4300 2700 50  0000 C CNN
F 2 "Diodes_SMD:D_MiniMELF_Handsoldering" H 4300 2800 50  0001 C CNN
F 3 "" H 4300 2800 50  0001 C CNN
	1    4300 2800
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR015
U 1 1 5A970D05
P 3850 2950
F 0 "#PWR015" H 3850 2700 50  0001 C CNN
F 1 "GND" H 3850 2800 50  0000 C CNN
F 2 "" H 3850 2950 50  0001 C CNN
F 3 "" H 3850 2950 50  0001 C CNN
	1    3850 2950
	1    0    0    -1  
$EndComp
Text HLabel 4050 2900 3    60   Input ~ 0
PWRIN
Text HLabel 4500 2650 1    60   Input ~ 0
VIN
$Comp
L CP PC401
U 1 1 5A970D8E
P 4700 3650
F 0 "PC401" H 4725 3750 50  0000 L CNN
F 1 "47u" H 4725 3550 50  0000 L CNN
F 2 "Capacitors_SMD:CP_Elec_6.3x5.3" H 4738 3500 50  0001 C CNN
F 3 "" H 4700 3650 50  0001 C CNN
	1    4700 3650
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR016
U 1 1 5A970E2E
P 4700 3900
F 0 "#PWR016" H 4700 3650 50  0001 C CNN
F 1 "GND" H 4700 3750 50  0000 C CNN
F 2 "" H 4700 3900 50  0001 C CNN
F 3 "" H 4700 3900 50  0001 C CNN
	1    4700 3900
	1    0    0    -1  
$EndComp
$Comp
L C C402
U 1 1 5A970F0C
P 8250 3600
F 0 "C402" H 8275 3700 50  0000 L CNN
F 1 "1u" H 8275 3500 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805" H 8288 3450 50  0001 C CNN
F 3 "" H 8250 3600 50  0001 C CNN
	1    8250 3600
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR017
U 1 1 5A970FC8
P 8250 3850
F 0 "#PWR017" H 8250 3600 50  0001 C CNN
F 1 "GND" H 8250 3700 50  0000 C CNN
F 2 "" H 8250 3850 50  0001 C CNN
F 3 "" H 8250 3850 50  0001 C CNN
	1    8250 3850
	1    0    0    -1  
$EndComp
$Comp
L CP PC402
U 1 1 5A971109
P 6050 3750
F 0 "PC402" H 6075 3850 50  0000 L CNN
F 1 "47u" H 6075 3650 50  0000 L CNN
F 2 "Capacitors_SMD:CP_Elec_6.3x5.3" H 6088 3600 50  0001 C CNN
F 3 "" H 6050 3750 50  0001 C CNN
	1    6050 3750
	1    0    0    -1  
$EndComp
$Comp
L C C401
U 1 1 5A9711D8
P 6450 3750
F 0 "C401" H 6475 3850 50  0000 L CNN
F 1 "100n" H 6475 3650 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805" H 6488 3600 50  0001 C CNN
F 3 "" H 6450 3750 50  0001 C CNN
	1    6450 3750
	1    0    0    1   
$EndComp
Text HLabel 8400 2800 2    60   Input ~ 0
+3V3
$Comp
L +5V #PWR018
U 1 1 5A9E7608
P 6050 2550
F 0 "#PWR018" H 6050 2400 50  0001 C CNN
F 1 "+5V" H 6050 2690 50  0000 C CNN
F 2 "" H 6050 2550 50  0001 C CNN
F 3 "" H 6050 2550 50  0001 C CNN
	1    6050 2550
	1    0    0    -1  
$EndComp
$Comp
L DG3XX-02-3.5 X2
U 1 1 5AA016CD
P 3550 2800
F 0 "X2" H 3670 2765 45  0000 L BNN
F 1 "DG3XX-02-3.5" H 3550 2800 45  0001 L BNN
F 2 "degson:degson-DG350-3.5-02P" H 3580 2950 20  0001 C CNN
F 3 "" H 3550 2800 60  0001 C CNN
	1    3550 2800
	-1   0    0    1   
$EndComp
$Comp
L DG3XX-02-3.5 X2
U 2 1 5AA0177C
P 3550 2950
F 0 "X2" H 3670 2915 45  0000 L BNN
F 1 "DG3XX-02-3.5" H 3550 2950 45  0001 L BNN
F 2 "degson:degson-DG350-3.5-02P" H 3580 3100 20  0001 C CNN
F 3 "" H 3550 2950 60  0001 C CNN
	2    3550 2950
	-1   0    0    1   
$EndComp
$Comp
L MC33269ST-5.OT3 IC402
U 1 1 5AA92A2E
P 7250 2900
F 0 "IC402" H 7450 2650 60  0000 C CNN
F 1 "MC33269ST-5.OT3" H 7250 3150 60  0000 C CNN
F 2 "PHT6NQ10T_135:SOT230P700X180-4N" H 6900 2800 60  0001 C CNN
F 3 "" H 6900 2800 60  0001 C CNN
	1    7250 2900
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR019
U 1 1 5AB2F4BB
P 6050 3950
F 0 "#PWR019" H 6050 3700 50  0001 C CNN
F 1 "GND" H 6050 3800 50  0000 C CNN
F 2 "" H 6050 3950 50  0001 C CNN
F 3 "" H 6050 3950 50  0001 C CNN
	1    6050 3950
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR020
U 1 1 5A97100A
P 7250 3950
F 0 "#PWR020" H 7250 3700 50  0001 C CNN
F 1 "GND" H 7250 3800 50  0000 C CNN
F 2 "" H 7250 3950 50  0001 C CNN
F 3 "" H 7250 3950 50  0001 C CNN
	1    7250 3950
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR021
U 1 1 5A970E5B
P 5400 3900
F 0 "#PWR021" H 5400 3650 50  0001 C CNN
F 1 "GND" H 5400 3750 50  0000 C CNN
F 2 "" H 5400 3900 50  0001 C CNN
F 3 "" H 5400 3900 50  0001 C CNN
	1    5400 3900
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR022
U 1 1 5A9712AB
P 6450 3950
F 0 "#PWR022" H 6450 3700 50  0001 C CNN
F 1 "GND" H 6450 3800 50  0000 C CNN
F 2 "" H 6450 3950 50  0001 C CNN
F 3 "" H 6450 3950 50  0001 C CNN
	1    6450 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	3650 2800 4150 2800
Wire Wire Line
	4450 2800 4850 2800
Wire Wire Line
	4050 2800 4050 2900
Connection ~ 4050 2800
Wire Wire Line
	4500 2800 4500 2650
Connection ~ 4500 2800
Wire Wire Line
	4700 2800 4700 3500
Connection ~ 4700 2800
Wire Wire Line
	4700 3900 4700 3800
Wire Wire Line
	5400 3900 5400 3300
Connection ~ 6050 2800
Wire Wire Line
	7700 2800 8400 2800
Wire Wire Line
	8250 2800 8250 3450
Wire Wire Line
	8250 3850 8250 3750
Wire Wire Line
	7250 3950 7250 3300
Wire Wire Line
	5850 2900 6450 2900
Wire Wire Line
	6450 2900 6450 3600
Connection ~ 8250 2800
Wire Wire Line
	6050 2550 6050 3600
Connection ~ 6050 2900
Wire Wire Line
	3650 2950 3850 2950
Wire Wire Line
	5850 2800 6700 2800
Wire Wire Line
	7700 2900 7825 2900
Wire Wire Line
	7825 2900 7825 2800
Connection ~ 7825 2800
Wire Wire Line
	6450 3900 6450 3950
Wire Wire Line
	6050 3900 6050 3950
$EndSCHEMATC
