/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 *
 * This part needs to get included in the compilation unit where
 * blocking_handler gets defined due to the way #pragma works.
 */


/** @defgroup CM3_nvic_isrpragmas_SAMD User interrupt service routines (ISR) defaults for Atmel SAMD series
    @ingroup CM3_nvic_isrpragmas

    @{*/

#pragma weak pm_isr = blocking_handler
#pragma weak sysctrl_isr = blocking_handler
#pragma weak wdt_isr = blocking_handler
#pragma weak rtc_isr = blocking_handler
#pragma weak eic_isr = blocking_handler
#pragma weak nvmctrl_isr = blocking_handler
#pragma weak dmac_isr = blocking_handler
#pragma weak reserved1_isr = blocking_handler
#pragma weak evsys_isr = blocking_handler
#pragma weak sercom0_isr = blocking_handler
#pragma weak sercom1_isr = blocking_handler
#pragma weak sercom2_isr = blocking_handler
#pragma weak tcc0_isr = blocking_handler
#pragma weak tc1_isr = blocking_handler
#pragma weak tc2_isr = blocking_handler
#pragma weak adc_isr = blocking_handler
#pragma weak ac_isr = blocking_handler
#pragma weak dac_isr = blocking_handler
#pragma weak ptc_isr = blocking_handler

/**@}*/

/* Initialization template for the interrupt vector table. This definition is
 * used by the startup code generator (vector.c) to set the initial values for
 * the interrupt handling routines to the chip family specific _isr weak
 * symbols. */

#define IRQ_HANDLERS \
    [NVIC_PM_IRQ] = pm_isr, \
    [NVIC_SYSCTRL_IRQ] = sysctrl_isr, \
    [NVIC_WDT_IRQ] = wdt_isr, \
    [NVIC_RTC_IRQ] = rtc_isr, \
    [NVIC_EIC_IRQ] = eic_isr, \
    [NVIC_NVMCTRL_IRQ] = nvmctrl_isr, \
    [NVIC_DMAC_IRQ] = dmac_isr, \
    [NVIC_RESERVED1_IRQ] = reserved1_isr, \
    [NVIC_EVSYS_IRQ] = evsys_isr, \
    [NVIC_SERCOM0_IRQ] = sercom0_isr, \
    [NVIC_SERCOM1_IRQ] = sercom1_isr, \
    [NVIC_SERCOM2_IRQ] = sercom2_isr, \
    [NVIC_TCC0_IRQ] = tcc0_isr, \
    [NVIC_TC1_IRQ] = tc1_isr, \
    [NVIC_TC2_IRQ] = tc2_isr, \
    [NVIC_ADC_IRQ] = adc_isr, \
    [NVIC_AC_IRQ] = ac_isr, \
    [NVIC_DAC_IRQ] = dac_isr, \
    [NVIC_PTC_IRQ] = ptc_isr
