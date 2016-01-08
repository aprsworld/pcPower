#include <18F14K22.h>
#device ADC=12
#device *=16
#use delay(clock=8MHz)

#fuses INTRC_IO
#fuses NOPLLEN
#fuses NOFCMEN
#fuses NOIESO
#fuses PUT
#fuses BROWNOUT
#fuses WDT32768
#fuses NOHFOFST
#fuses NOMCLR
#fuses NOSTVREN
#fuses NOLVP
#fuses NOXINST
#fuses NODEBUG
#fuses NOPROTECT
#fuses NOWRT
#fuses NOWRTC 
#fuses NOWRTB
#fuses NOWRTD
#fuses NOEBTR
#fuses NOEBTRB

#use standard_io(ALL)

#use rs232(UART1,stream=STREAM_PI,baud=57600,errors)	

#define PIC_BOOTLOAD_REQUEST PIN_A4
#define SW_BUTTON            PIN_A3
#define PI_POWER_EN          PIN_C4
#define PIC_LED_GREEN        PIN_C6
#define PIC_TO_PI            PIN_C7
#define SER_TO_PI            PIN_B7
#define WATCHDOG_FROM_PI     PIN_B6
#define SER_FROM_PI          PIN_B5
#define SW_MAGNET            PIN_B4
#define AN_IN_VOLTS          PIN_C0
#define PI_POWER_FLAG        PIN_A2
