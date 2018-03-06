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
Sheet 1 6
Title "Arduino UNO R3 Clone"
Date "8 oct 2015"
Rev "0"
Comp "Rheingold Heavy"
Comment1 "Based on the Arduino UNO R3 From arduino.cc"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Sheet
S 7875 825  1500 4000
U 55E94587
F0 "Headers" 50
F1 "Headers.sch" 50
F2 "AD3" I L 7875 3075 60 
F3 "AD2" I L 7875 3200 60 
F4 "AD1" I L 7875 3325 60 
F5 "AD0" I L 7875 3450 60 
F6 "IO7" I L 7875 3675 60 
F7 "IO6" I L 7875 3825 60 
F8 "IO5" I L 7875 3975 60 
F9 "IO4" I L 7875 4125 60 
F10 "PWMA" I L 7875 4275 60 
F11 "IO2" I L 7875 4425 60 
F12 "IO1" I L 7875 4575 60 
F13 "IO0" I L 7875 4725 60 
F14 "AREF" I L 7875 1075 60 
F15 "DIRB" I L 7875 1600 60 
F16 "DIRA" I L 7875 1750 60 
F17 "PWMB" I L 7875 1900 60 
F18 "SS" I L 7875 2050 60 
F19 "IO9" I L 7875 2200 60 
F20 "IO8" I L 7875 2350 60 
F21 "+3V3" I R 9375 4400 60 
F22 "RESET" I L 7875 1225 60 
F23 "VIN" I R 9375 4550 60 
F24 "AD5" I L 7875 2825 60 
F25 "AD4" I L 7875 2950 60 
F26 "AD7" I L 7875 2575 60 
F27 "AD6" I L 7875 2700 60 
$EndSheet
$Sheet
S 2950 3025 1450 1200
U 5A8D7699
F0 "L298_Driver." 60
F1 "L298_Driver.sch" 60
F2 "OUT1" I L 2950 3225 60 
F3 "OUT2" I L 2950 3325 60 
F4 "OUT3" I L 2950 3425 60 
F5 "OUT4" I L 2950 3525 60 
F6 "PWMB" I R 4400 3725 60 
F7 "DIRB" I R 4400 3250 60 
F8 "DIRA" I R 4400 3375 60 
F9 "PWMA" I R 4400 3625 60 
F10 "PWRIN" I L 2950 4100 60 
$EndSheet
$Sheet
S 1200 1525 1400 1200
U 5A965D0D
F0 "Power_Input" 60
F1 "Power_Input.sch" 60
F2 "PWRIN" I L 1200 2525 60 
F3 "VIN" I L 1200 2375 60 
F4 "+3V3" I L 1200 2150 60 
$EndSheet
$Sheet
S 1200 3025 1450 1350
U 5A9679FD
F0 "Motor_Outputs." 60
F1 "Motor_Outputs.sch" 60
F2 "OUT1" I R 2650 3225 60 
F3 "OUT2" I R 2650 3325 60 
F4 "OUT4" I R 2650 3425 60 
F5 "OUT3" I R 2650 3525 60 
F6 "PWRIN" I L 1200 3275 60 
$EndSheet
Wire Wire Line
	2650 3225 2950 3225
Wire Wire Line
	2650 3325 2950 3325
Wire Wire Line
	2650 3425 2950 3425
Wire Wire Line
	2650 3525 2950 3525
Wire Wire Line
	1200 2525 1000 2525
Wire Wire Line
	1000 2525 1000 4625
Wire Wire Line
	1000 3275 1200 3275
Wire Wire Line
	2950 4100 2825 4100
Wire Wire Line
	2825 4100 2825 4625
Wire Wire Line
	2825 4625 1000 4625
Connection ~ 1000 3275
$Sheet
S 5600 825  1325 3975
U 55E89CE4
F0 "ATMEGA328P" 50
F1 "ATMEGA328P.sch" 50
F2 "AREF" I R 6925 1075 60 
F3 "AD5" I R 6925 2825 60 
F4 "AD4" I R 6925 2950 60 
F5 "AD3" I R 6925 3075 60 
F6 "AD2" I R 6925 3200 60 
F7 "AD1" I R 6925 3325 60 
F8 "AD0" I R 6925 3450 60 
F9 "IO7" I R 6925 3675 60 
F10 "IO6" I R 6925 3825 60 
F11 "IO5" I R 6925 3975 60 
F12 "IO4" I R 6925 4125 60 
F13 "PWMA" I R 6925 4275 60 
F14 "IO2" I R 6925 4425 60 
F15 "IO1" I R 6925 4575 60 
F16 "IO0" I R 6925 4725 60 
F17 "IO8" I R 6925 2350 60 
F18 "IO9" I R 6925 2200 60 
F19 "SS" I R 6925 2050 60 
F20 "PWMB" I R 6925 1900 60 
F21 "DIRA" I R 6925 1750 60 
F22 "DIRB" I R 6925 1600 60 
F23 "RESET" I R 6925 1225 60 
F24 "AD6" I R 6925 2700 60 
F25 "AD7" I R 6925 2575 60 
$EndSheet
Wire Wire Line
	6925 1075 7875 1075
Wire Wire Line
	6925 1225 7875 1225
Wire Wire Line
	6925 1600 7875 1600
Wire Wire Line
	6925 1750 7875 1750
Wire Wire Line
	6925 1900 7875 1900
Wire Wire Line
	6925 2050 7875 2050
Wire Wire Line
	6925 2200 7875 2200
Wire Wire Line
	6925 2350 7875 2350
Wire Wire Line
	6925 3675 7875 3675
Wire Wire Line
	6925 3825 7875 3825
Wire Wire Line
	6925 3975 7875 3975
Wire Wire Line
	6925 4125 7875 4125
Wire Wire Line
	6925 4275 7875 4275
Wire Wire Line
	6925 4425 7875 4425
Wire Wire Line
	6925 4575 7875 4575
Wire Wire Line
	6925 4725 7875 4725
Wire Wire Line
	7075 4275 7075 5000
Wire Wire Line
	7075 5000 5300 5000
Wire Wire Line
	5300 5000 5300 3625
Wire Wire Line
	5300 3625 4400 3625
Connection ~ 7075 4275
Wire Wire Line
	7300 1900 7300 5200
Wire Wire Line
	7300 5200 5125 5200
Wire Wire Line
	5125 5200 5125 3725
Wire Wire Line
	5125 3725 4400 3725
Connection ~ 7300 1900
Wire Wire Line
	7025 1750 7025 675 
Wire Wire Line
	7025 675  5325 675 
Wire Wire Line
	5325 675  5325 3375
Wire Wire Line
	5325 3375 4400 3375
Connection ~ 7025 1750
Wire Wire Line
	7275 575  5175 575 
Wire Wire Line
	5175 575  5175 3250
Wire Wire Line
	5175 3250 4400 3250
Wire Wire Line
	9375 4550 9600 4550
Wire Wire Line
	9600 4550 9600 5375
Wire Wire Line
	9600 5375 775  5375
Wire Wire Line
	775  5375 775  2375
Wire Wire Line
	775  2375 1200 2375
Wire Wire Line
	9375 4400 9725 4400
Wire Wire Line
	9725 4400 9725 5500
Wire Wire Line
	9725 5500 675  5500
Wire Wire Line
	675  5500 675  2150
Wire Wire Line
	675  2150 1200 2150
Wire Wire Line
	7275 575  7275 1600
Connection ~ 7275 1600
Wire Wire Line
	7875 3450 6925 3450
Wire Wire Line
	6925 3325 7875 3325
Wire Wire Line
	6925 3200 7875 3200
Wire Wire Line
	6925 3075 7875 3075
Wire Wire Line
	6925 2950 7875 2950
Wire Wire Line
	6925 2825 7875 2825
Wire Wire Line
	6925 2575 7875 2575
Wire Wire Line
	6925 2700 7875 2700
$EndSCHEMATC
