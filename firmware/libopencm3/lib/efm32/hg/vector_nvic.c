/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 *
 * This part needs to get included in the compilation unit where
 * blocking_handler gets defined due to the way #pragma works.
 */


/** @defgroup CM3_nvic_isrpragmas_EFM32HG User interrupt service routines (ISR) defaults for EFM32 Happy Gecko series
    @ingroup CM3_nvic_isrpragmas

    @{*/

#pragma weak dma_isr = blocking_handler
#pragma weak gpio_even_isr = blocking_handler
#pragma weak timer0_isr = blocking_handler
#pragma weak acmp0_isr = blocking_handler
#pragma weak adc0_isr = blocking_handler
#pragma weak i2c0_isr = blocking_handler
#pragma weak gpio_odd_isr = blocking_handler
#pragma weak timer1_isr = blocking_handler
#pragma weak usart1_rx_isr = blocking_handler
#pragma weak usart1_tx_isr = blocking_handler
#pragma weak leuart0_isr = blocking_handler
#pragma weak pcnt0_isr = blocking_handler
#pragma weak rtc_isr = blocking_handler
#pragma weak cmu_isr = blocking_handler
#pragma weak vcmp_isr = blocking_handler
#pragma weak msc_isr = blocking_handler
#pragma weak aes_isr = blocking_handler
#pragma weak usart0_rx_isr = blocking_handler
#pragma weak usart0_tx_isr = blocking_handler
#pragma weak usb_isr = blocking_handler
#pragma weak timer2_isr = blocking_handler

/**@}*/

/* Initialization template for the interrupt vector table. This definition is
 * used by the startup code generator (vector.c) to set the initial values for
 * the interrupt handling routines to the chip family specific _isr weak
 * symbols. */

#define IRQ_HANDLERS \
    [NVIC_DMA_IRQ] = dma_isr, \
    [NVIC_GPIO_EVEN_IRQ] = gpio_even_isr, \
    [NVIC_TIMER0_IRQ] = timer0_isr, \
    [NVIC_ACMP0_IRQ] = acmp0_isr, \
    [NVIC_ADC0_IRQ] = adc0_isr, \
    [NVIC_I2C0_IRQ] = i2c0_isr, \
    [NVIC_GPIO_ODD_IRQ] = gpio_odd_isr, \
    [NVIC_TIMER1_IRQ] = timer1_isr, \
    [NVIC_USART1_RX_IRQ] = usart1_rx_isr, \
    [NVIC_USART1_TX_IRQ] = usart1_tx_isr, \
    [NVIC_LEUART0_IRQ] = leuart0_isr, \
    [NVIC_PCNT0_IRQ] = pcnt0_isr, \
    [NVIC_RTC_IRQ] = rtc_isr, \
    [NVIC_CMU_IRQ] = cmu_isr, \
    [NVIC_VCMP_IRQ] = vcmp_isr, \
    [NVIC_MSC_IRQ] = msc_isr, \
    [NVIC_AES_IRQ] = aes_isr, \
    [NVIC_USART0_RX_IRQ] = usart0_rx_isr, \
    [NVIC_USART0_TX_IRQ] = usart0_tx_isr, \
    [NVIC_USB_IRQ] = usb_isr, \
    [NVIC_TIMER2_IRQ] = timer2_isr
