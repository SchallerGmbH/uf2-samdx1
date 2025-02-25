#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Adafruit Industries"
#define PRODUCT_NAME "Feather M4 Express"
#define VOLUME_LABEL "FEATHERBOOT"
#define INDEX_URL "http://adafru.it/3857"
#define BOARD_ID "SAMD51J19A-FeatherM4-v0"

#define USB_VID 0x239A
#define USB_PID 0x0022

#define USE_UART 1

#define LED_PIN PIN_PA23

#define BOARD_NEOPIXEL_PIN PIN_PB03
#define BOARD_NEOPIXEL_COUNT 1

#define BOOT_USART_MODULE                 SERCOM5
#define BOOT_USART_MASK                   APBDMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBDMASK_SERCOM5
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PB17C_SERCOM5_PAD1
#define BOOT_USART_PAD0                   PINMUX_PB16C_SERCOM5_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM5_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM5_GCLK_ID_SLOW

#endif
