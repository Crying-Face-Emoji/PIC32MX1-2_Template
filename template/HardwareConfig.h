/* ************************************************************************** */
/** Descriptive File Name
 * 
  @File Hardware Configs
	HardwareConfig.h

  @Description
	File for comon macros used by several files/libraries like
	* clock
	* peripheral configs
	* constants
 */
/* ************************************************************************** */

#ifndef _HARDWARE_CONFIG_H    /* Guard against multiple inclusion */
#define _HARDWARE_CONFIG_H

/* **************************************************************************	*/
/* Section: Clock constants							*/
/* **************************************************************************	*/
#define GetSystemClock()            (8000000)
#define GetPeripheralClock()        (GetSystemClock())
#define GetInstructionClock()       (GetSystemClock()/4)

/* **************************************************************************	*/
/* Section: UART Configs							*/
/* **************************************************************************	*/
#define UART1_EN		
//#define UART2_EN		
#define UART_BAUD		115200
#define UART_FIFO_SIZE	128

/* **************************************************************************	*/
/* Section: Constants								*/
/* **************************************************************************	*/

/* **************************************************************************	*/
/* Section:										*/
/* **************************************************************************	*/

#endif /* _HARDWARE_CONFIG_H */