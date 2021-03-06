#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Core and peripherals registers definitions
*/
#include "interrupt.h"
#include "analog.h"
#include "clock.h"
#include "core_callback.h"
#include "digital_io.h"
#include "hal_uart_emul.h"
#include "hw_config.h"
#include "low_power.h"
#include "rtc.h"
#include "spi_com.h"
#include "stm32_eeprom.h"
#include "timer.h"
#include "twi.h"
#include "uart.h"
#include "uart_emul.h"

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus
void init( void ) ;
#ifdef __cplusplus
}
#endif // __cplusplus

#ifdef USBCON
#include "usb_interface.h"
#endif //USBCON

#endif /* _BOARD_H_ */
