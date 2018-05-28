/* 
 * File:   PIC32mx_SysTick.h
 * Author: Rafael Silva
 *
 * Created on May 27, 2018, 7:02 PM
 */



#ifndef SYSTICK_PIC32MX_H
#define SYSTICK_PIC32MX_H


#include <xc.h>
#include <stdint.h>
#include <sys/attribs.h>
#include "../HardwareConfig.h"

namespace SysTick
{
	extern volatile uint32_t count;
	extern volatile uint32_t timeout;
	extern volatile bool timeoutFlag;

	void __attribute__((nomips16)) init(void);

	inline void __attribute__((nomips16)) delay_us(uint32_t duration)
	{
		uint32_t count = 0;
		// get the count	 reg
		asm volatile("mfc0   %0, $9" : "=r"(count));
		duration = ((GetSystemClock()/20000000)*duration) + count;
		while(count != duration)
			asm volatile("mfc0   %0, $9" : "=r"(count));
	}

	inline void delay_ms(uint32_t duration)
	{
		duration += count;
		while(count != duration);
	}

	inline void timeout_set(uint32_t duration)
	{
		timeout = duration + count;
	}
}

#endif	/* SYSTICK_PIC32MX_H */

