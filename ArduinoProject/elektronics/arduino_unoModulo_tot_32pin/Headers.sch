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
Sheet 2 6
Title "Arduino UNO R3 Clone"
Date "8 oct 2015"
Rev "0"
Comp "Rheingold Heavy"
Comment1 "Based on the Arduino UNO R3 From arduino.cc"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text HLabel 4775 4725 0    40   Input ~ 0
AD3
Text HLabel 4775 4825 0    40   Input ~ 0
AD2
Text HLabel 4775 4925 0    40   Input ~ 0
AD1
Text HLabel 4775 5025 0    40   Input ~ 0
AD0
Text HLabel 4775 5175 0    40   Input ~ 0
IO7
Text HLabel 4775 5275 0    40   Input ~ 0
IO6
Text HLabel 4775 5375 0    40   Input ~ 0
IO5
Text HLabel 4775 5475 0    40   Input ~ 0
IO4
Text HLabel 4775 5575 0    40   Input ~ 0
PWMA
Text HLabel 4775 5675 0    40   Input ~ 0
IO2
Text HLabel 4775 5775 0    40   Input ~ 0
IO1
Text HLabel 4775 5875 0    40   Input ~ 0
IO0
$Comp
L CONN_01X08 J204
U 1 1 5615BF57
P 6250 5525
F 0 "J204" H 6400 5650 60  0000 L CNN
F 1 "IOL" H 6400 5525 60  0000 L CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x08_Pitch2.54mm" H 6250 5525 60  0001 C CNN
F 3 "http://sullinscorp.com/catalogs/101_PAGE114-115_.100_FEMALE_HDR.pdf" H 6250 5525 60  0001 C CNN
F 4 "Connector Header 8 Position 0.100\" (2.54mm) Gold Surface Mount" H 6250 5525 60  0001 C CNN "Characteristics"
F 5 "Shield Header 8POS - DIG01" H 6250 5525 60  0001 C CNN "Description"
F 6 "Sullins Connector" H 6250 5525 60  0001 C CNN "MFN"
F 7 "NPPC081KFXC-RC" H 6250 5525 60  0001 C CNN "MFP"
F 8 "SMD" H 6250 5525 60  0001 C CNN "Package ID"
F 9 "ANY" H 6250 5525 60  0001 C CNN "Source"
F 10 "N" H 6250 5525 60  0001 C CNN "Critical"
F 11 "Shield_Headers" H 6250 5525 60  0001 C CNN "Subsystem"
F 12 "~" H 6250 5525 60  0001 C CNN "Notes"
	1    6250 5525
	1    0    0    -1  
$EndComp
Wire Wire Line
	4775 5025 6050 5025
Wire Wire Line
	6050 4925 4775 4925
Wire Wire Line
	4775 4825 6050 4825
Wire Wire Line
	6050 4725 4775 4725
Wire Wire Line
	6050 5175 4775 5175
Wire Wire Line
	4775 5275 6050 5275
Wire Wire Line
	6050 5375 4775 5375
Wire Wire Line
	4775 5475 6050 5475
Wire Wire Line
	6050 5575 4775 5575
Wire Wire Line
	4775 5675 6050 5675
Wire Wire Line
	6050 5775 4775 5775
Wire Wire Line
	4775 5875 6050 5875
Text HLabel 4775 4525 0    40   Input ~ 0
AD5
Text HLabel 4775 4625 0    40   Input ~ 0
AD4
Wire Wire Line
	6050 4525 4775 4525
Wire Wire Line
	6050 4625 4775 4625
Text HLabel 4775 3475 0    40   Input ~ 0
AREF
Text HLabel 4775 3675 0    40   Input ~ 0
DIRB
Text HLabel 4775 3775 0    40   Input ~ 0
DIRA
Text HLabel 4775 3875 0    40   Input ~ 0
PWMB
Text HLabel 4775 3975 0    40   Input ~ 0
SS
Text HLabel 4775 4075 0    40   Input ~ 0
IO9
Text HLabel 4775 4175 0    40   Input ~ 0
IO8
$Comp
L CONN_01X08 J202
U 1 1 5A972E1B
P 6250 3825
F 0 "J202" H 6400 3950 60  0000 L CNN
F 1 "IOL" H 6400 3825 60  0000 L CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x08_Pitch2.54mm" H 6250 3825 60  0001 C CNN
F 3 "http://sullinscorp.com/catalogs/101_PAGE114-115_.100_FEMALE_HDR.pdf" H 6250 3825 60  0001 C CNN
F 4 "Connector Header 8 Position 0.100\" (2.54mm) Gold Surface Mount" H 6250 3825 60  0001 C CNN "Characteristics"
F 5 "Shield Header 8POS - DIG01" H 6250 3825 60  0001 C CNN "Description"
F 6 "Sullins Connector" H 6250 3825 60  0001 C CNN "MFN"
F 7 "NPPC081KFXC-RC" H 6250 3825 60  0001 C CNN "MFP"
F 8 "SMD" H 6250 3825 60  0001 C CNN "Package ID"
F 9 "ANY" H 6250 3825 60  0001 C CNN "Source"
F 10 "N" H 6250 3825 60  0001 C CNN "Critical"
F 11 "Shield_Headers" H 6250 3825 60  0001 C CNN "Subsystem"
F 12 "~" H 6250 3825 60  0001 C CNN "Notes"
	1    6250 3825
	1    0    0    -1  
$EndComp
Wire Wire Line
	6050 3475 4775 3475
Wire Wire Line
	4550 3575 6050 3575
Wire Wire Line
	6050 3675 4775 3675
Wire Wire Line
	4775 3775 6050 3775
Wire Wire Line
	6050 3875 4775 3875
Wire Wire Line
	4775 3975 6050 3975
Wire Wire Line
	6050 4075 4775 4075
Wire Wire Line
	4775 4175 6050 4175
$Comp
L CONN_01X06 J201
U 1 1 5A9732C8
P 2400 1975
F 0 "J201" H 2550 1850 60  0000 L CNN
F 1 "POWER" H 2550 1975 60  0000 L CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x06_Pitch2.54mm" H 2400 1975 60  0001 C CNN
F 3 "http://sullinscorp.com/catalogs/101_PAGE114-115_.100_FEMALE_HDR.pdf" H 2400 1975 60  0001 C CNN
F 4 "Connector Header 6 Position 0.100\" (2.54mm) Gold Surface Mount" H 2400 1975 60  0001 C CNN "Characteristics"
F 5 "Shield Header 6POS - ANLG" H 2400 1975 60  0001 C CNN "Description"
F 6 "Sullins Connector" H 2400 1975 60  0001 C CNN "MFN"
F 7 "NPPC061KFXC-RC" H 2400 1975 60  0001 C CNN "MFP"
F 8 "SMD" H 2400 1975 60  0001 C CNN "Package ID"
F 9 "ANY" H 2400 1975 60  0001 C CNN "Source"
F 10 "N" H 2400 1975 60  0001 C CNN "Critical"
F 11 "Shield_Headers" H 2400 1975 60  0001 C CNN "Subsystem"
F 12 "~" H 2400 1975 60  0001 C CNN "Notes"
	1    2400 1975
	0    1    -1   0   
$EndComp
Wire Wire Line
	2150 2175 2150 2325
Wire Wire Line
	2250 2175 2250 2325
Text HLabel 2250 2325 3    60   Input ~ 0
+3V3
Text HLabel 2150 2325 3    60   Input ~ 0
RESET
Wire Wire Line
	2350 2175 2350 2275
Wire Wire Line
	2350 2275 2850 2275
Wire Wire Line
	2850 2275 2850 1875
Wire Wire Line
	2450 2175 2450 2225
Wire Wire Line
	2450 2225 2550 2225
Wire Wire Line
	2550 2175 2550 2550
Connection ~ 2550 2225
$Comp
L GND #PWR01
U 1 1 5A9735E0
P 2550 2550
F 0 "#PWR01" H 2550 2300 50  0001 C CNN
F 1 "GND" H 2550 2400 50  0000 C CNN
F 2 "" H 2550 2550 50  0001 C CNN
F 3 "" H 2550 2550 50  0001 C CNN
	1    2550 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	2650 2175 2650 2325
Text HLabel 2650 2325 3    60   Input ~ 0
VIN
$Comp
L GND #PWR02
U 1 1 5A9915EF
P 4550 3575
F 0 "#PWR02" H 4550 3325 50  0001 C CNN
F 1 "GND" H 4550 3425 50  0000 C CNN
F 2 "" H 4550 3575 50  0001 C CNN
F 3 "" H 4550 3575 50  0001 C CNN
	1    4550 3575
	0    1    1    0   
$EndComp
$Comp
L +5V #PWR03
U 1 1 5A9E6787
P 2850 1875
F 0 "#PWR03" H 2850 1725 50  0001 C CNN
F 1 "+5V" H 2850 2015 50  0000 C CNN
F 2 "" H 2850 1875 50  0001 C CNN
F 3 "" H 2850 1875 50  0001 C CNN
	1    2850 1875
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X08 J203
U 1 1 5A9EE64C
P 6250 4675
F 0 "J203" H 6400 4800 60  0000 L CNN
F 1 "IOL" H 6400 4675 60  0000 L CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x08_Pitch2.54mm" H 6250 4675 60  0001 C CNN
F 3 "http://sullinscorp.com/catalogs/101_PAGE114-115_.100_FEMALE_HDR.pdf" H 6250 4675 60  0001 C CNN
F 4 "Connector Header 8 Position 0.100\" (2.54mm) Gold Surface Mount" H 6250 4675 60  0001 C CNN "Characteristics"
F 5 "Shield Header 8POS - DIG01" H 6250 4675 60  0001 C CNN "Description"
F 6 "Sullins Connector" H 6250 4675 60  0001 C CNN "MFN"
F 7 "NPPC081KFXC-RC" H 6250 4675 60  0001 C CNN "MFP"
F 8 "SMD" H 6250 4675 60  0001 C CNN "Package ID"
F 9 "ANY" H 6250 4675 60  0001 C CNN "Source"
F 10 "N" H 6250 4675 60  0001 C CNN "Critical"
F 11 "Shield_Headers" H 6250 4675 60  0001 C CNN "Subsystem"
F 12 "~" H 6250 4675 60  0001 C CNN "Notes"
	1    6250 4675
	1    0    0    -1  
$EndComp
Text HLabel 4775 4325 0    40   Input ~ 0
AD7
Text HLabel 4775 4425 0    40   Input ~ 0
AD6
Wire Wire Line
	6050 4325 4775 4325
Wire Wire Line
	6050 4425 4775 4425
$EndSCHEMATC
