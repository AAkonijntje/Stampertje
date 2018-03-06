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
LIBS:Arduino_Uno_R3_From_Scratch-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 3 6
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
L L298D U302
U 1 1 5A8D786D
P 5800 3000
F 0 "U302" H 5800 3000 60  0000 C CNN
F 1 "L298D" H 5800 3100 60  0000 C CNN
F 2 "Multiwatt15-V" H 6000 3600 60  0000 C CNN
F 3 "" H 5800 3000 60  0001 C CNN
	1    5800 3000
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR04
U 1 1 5A8D786E
P 7150 3700
F 0 "#PWR04" H 7150 3450 50  0001 C CNN
F 1 "GND" H 7150 3550 50  0000 C CNN
F 2 "" H 7150 3700 50  0001 C CNN
F 3 "" H 7150 3700 50  0001 C CNN
	1    7150 3700
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR05
U 1 1 5A8D786F
P 5800 3800
F 0 "#PWR05" H 5800 3550 50  0001 C CNN
F 1 "GND" H 5800 3650 50  0000 C CNN
F 2 "" H 5800 3800 50  0001 C CNN
F 3 "" H 5800 3800 50  0001 C CNN
	1    5800 3800
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR06
U 1 1 5A8D7870
P 4450 3750
F 0 "#PWR06" H 4450 3500 50  0001 C CNN
F 1 "GND" H 4450 3600 50  0000 C CNN
F 2 "" H 4450 3750 50  0001 C CNN
F 3 "" H 4450 3750 50  0001 C CNN
	1    4450 3750
	1    0    0    -1  
$EndComp
$Comp
L 74AHC1G04 U301
U 1 1 5A8D7871
P 3400 3300
F 0 "U301" H 3595 3415 50  0000 C CNN
F 1 "74AHC1G04" H 3700 3150 50  0000 C CNN
F 2 "" H 3400 3300 50  0001 C CNN
F 3 "" H 3400 3300 50  0001 C CNN
	1    3400 3300
	1    0    0    -1  
$EndComp
$Comp
L 74AHC1G04 U303
U 1 1 5A8D7872
P 7750 3000
F 0 "U303" H 7945 3115 50  0000 C CNN
F 1 "74AHC1G04" H 8050 2850 50  0000 C CNN
F 2 "" H 7750 3000 50  0001 C CNN
F 3 "" H 7750 3000 50  0001 C CNN
	1    7750 3000
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR07
U 1 1 5A8D7873
P 7800 3250
F 0 "#PWR07" H 7800 3000 50  0001 C CNN
F 1 "GND" H 7800 3100 50  0000 C CNN
F 2 "" H 7800 3250 50  0001 C CNN
F 3 "" H 7800 3250 50  0001 C CNN
	1    7800 3250
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR08
U 1 1 5A8D7874
P 3350 3550
F 0 "#PWR08" H 3350 3300 50  0001 C CNN
F 1 "GND" H 3350 3400 50  0000 C CNN
F 2 "" H 3350 3550 50  0001 C CNN
F 3 "" H 3350 3550 50  0001 C CNN
	1    3350 3550
	1    0    0    -1  
$EndComp
$Comp
L C C2
U 1 1 5A9642A9
P 8100 2600
F 0 "C2" H 8125 2700 50  0000 L CNN
F 1 "0.1uF" H 8125 2500 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805" H 8138 2450 50  0001 C CNN
F 3 "" H 8100 2600 50  0001 C CNN
	1    8100 2600
	0    1    1    0   
$EndComp
$Comp
L GND #PWR09
U 1 1 5A964733
P 8400 2600
F 0 "#PWR09" H 8400 2350 50  0001 C CNN
F 1 "GND" H 8400 2450 50  0000 C CNN
F 2 "" H 8400 2600 50  0001 C CNN
F 3 "" H 8400 2600 50  0001 C CNN
	1    8400 2600
	0    -1   -1   0   
$EndComp
$Comp
L C C1
U 1 1 5A9647F3
P 3200 2600
F 0 "C1" H 3225 2700 50  0000 L CNN
F 1 "0.1uF" H 3100 2500 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805" H 3238 2450 50  0001 C CNN
F 3 "" H 3200 2600 50  0001 C CNN
	1    3200 2600
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR010
U 1 1 5A964A96
P 2900 2600
F 0 "#PWR010" H 2900 2350 50  0001 C CNN
F 1 "GND" H 2900 2450 50  0000 C CNN
F 2 "" H 2900 2600 50  0001 C CNN
F 3 "" H 2900 2600 50  0001 C CNN
	1    2900 2600
	0    1    1    0   
$EndComp
$Comp
L CP1 C301
U 1 1 5A964B4A
P 4150 3650
F 0 "C301" H 4175 3750 50  0000 L CNN
F 1 "100uF.25V" H 3750 3550 50  0000 L CNN
F 2 "Capacitors_SMD:CP_Elec_5x5.3" H 4150 3650 50  0001 C CNN
F 3 "" H 4150 3650 50  0001 C CNN
	1    4150 3650
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR011
U 1 1 5A964BF3
P 4150 3900
F 0 "#PWR011" H 4150 3650 50  0001 C CNN
F 1 "GND" H 4150 3750 50  0000 C CNN
F 2 "" H 4150 3900 50  0001 C CNN
F 3 "" H 4150 3900 50  0001 C CNN
	1    4150 3900
	1    0    0    -1  
$EndComp
NoConn ~ 6650 2700
NoConn ~ 4950 2700
Text HLabel 4800 2800 0    60   Input ~ 0
OUT1
Text HLabel 4800 2900 0    60   Input ~ 0
OUT2
Text HLabel 6800 2900 2    60   Input ~ 0
OUT3
Text HLabel 6800 2800 2    60   Input ~ 0
OUT4
Text HLabel 6800 3100 2    60   Input ~ 0
PWMB
Text HLabel 8450 3000 2    60   Input ~ 0
DIRB
Text HLabel 2850 3300 0    60   Input ~ 0
DIRA
Text HLabel 4800 3100 0    60   Input ~ 0
DIRA
Text HLabel 6800 3200 2    60   Input ~ 0
DIRB
Text HLabel 4800 3200 0    60   Input ~ 0
PWMA
Text HLabel 4075 3000 0    60   Input ~ 0
PWRIN
$Comp
L +5V #PWR012
U 1 1 5A9E6D4A
P 6750 2200
F 0 "#PWR012" H 6750 2050 50  0001 C CNN
F 1 "+5V" H 6750 2340 50  0000 C CNN
F 2 "" H 6750 2200 50  0001 C CNN
F 3 "" H 6750 2200 50  0001 C CNN
	1    6750 2200
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR013
U 1 1 5A9E6DF9
P 7800 2450
F 0 "#PWR013" H 7800 2300 50  0001 C CNN
F 1 "+5V" H 7800 2590 50  0000 C CNN
F 2 "" H 7800 2450 50  0001 C CNN
F 3 "" H 7800 2450 50  0001 C CNN
	1    7800 2450
	1    0    0    -1  
$EndComp
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
	4450 2500 4450 3750
Wire Wire Line
	4450 3400 4950 3400
Wire Wire Line
	6650 2500 7150 2500
Wire Wire Line
	7150 2500 7150 3700
Wire Wire Line
	7150 3400 6650 3400
Wire Wire Line
	5800 3800 5800 3750
Connection ~ 7150 3400
Connection ~ 4450 3400
Wire Wire Line
	3850 3300 4950 3300
Wire Wire Line
	2850 3300 2950 3300
Wire Wire Line
	3350 3550 3350 3500
Wire Wire Line
	7800 3250 7800 3200
Wire Wire Line
	3350 2425 3350 3100
Wire Wire Line
	7800 2450 7800 2800
Connection ~ 3350 2600
Wire Wire Line
	2900 2600 3050 2600
Wire Wire Line
	4075 3000 4950 3000
Wire Wire Line
	4150 3000 4150 3500
Wire Wire Line
	4150 3900 4150 3800
Wire Wire Line
	6650 2600 7150 2600
Connection ~ 7150 2600
Wire Wire Line
	4950 2600 4450 2600
Connection ~ 4450 2600
Wire Wire Line
	6650 3300 6750 3300
Wire Wire Line
	6750 3300 6750 2200
Wire Wire Line
	7950 2600 7800 2600
Connection ~ 7800 2600
Wire Wire Line
	8400 2600 8250 2600
Wire Wire Line
	8200 3000 8450 3000
Wire Wire Line
	4950 3200 4800 3200
Wire Wire Line
	6800 3100 6650 3100
Wire Wire Line
	6650 3200 6800 3200
Wire Wire Line
	4950 3100 4800 3100
Wire Wire Line
	7300 3000 6650 3000
Connection ~ 4150 3000
$Comp
L +5V #PWR014
U 1 1 5A9E6E40
P 3350 2425
F 0 "#PWR014" H 3350 2275 50  0001 C CNN
F 1 "+5V" H 3350 2565 50  0000 C CNN
F 2 "" H 3350 2425 50  0001 C CNN
F 3 "" H 3350 2425 50  0001 C CNN
	1    3350 2425
	1    0    0    -1  
$EndComp
$EndSCHEMATC
