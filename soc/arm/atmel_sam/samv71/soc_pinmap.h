/*
 * Copyright (c) 2019 Gerson Fernando Budke
 * Copyright (c) 2016-2017 Piotr Mienkowski
 * SPDX-License-Identifier: Apache-2.0
 */

/** @file
 * @brief Atmel SAM V71 MCU pin definitions.
 *
 * This file contains pin configuration data required by different MCU
 * modules to correctly configure GPIO controller.
 */

#ifndef _ATMEL_SAM_SOC_PINMAP_H_
#define _ATMEL_SAM_SOC_PINMAP_H_

#include <soc.h>

/* Ethernet MAC (GMAC) */

#define PINS_GMAC_MASK (PIO_PD0A_GMAC_GTXCK | PIO_PD1A_GMAC_GTXEN \
	  | PIO_PD2A_GMAC_GTX0 | PIO_PD3A_GMAC_GTX1 | PIO_PD4A_GMAC_GRXDV \
	  | PIO_PD5A_GMAC_GRX0 | PIO_PD6A_GMAC_GRX1 | PIO_PD7A_GMAC_GRXER \
	  | PIO_PD8A_GMAC_GMDC | PIO_PD9A_GMAC_GMDIO)
#define PIN_GMAC_SET1 {PINS_GMAC_MASK, PIOD, ID_PIOD, SOC_GPIO_FUNC_A}

#define PINS_GMAC0 {PIN_GMAC_SET1}

/* Synchronous Serial Controller (SSC) */

#define PIN_SSC0_RD {PIO_PA10C_SSC_RD, PIOA, ID_PIOA, SOC_GPIO_FUNC_C}
#define PIN_SSC0_RF {PIO_PD24B_SSC_RF, PIOD, ID_PIOD, SOC_GPIO_FUNC_B}
#define PIN_SSC0_RK {PIO_PA22A_SSC_RK, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#ifdef CONFIG_I2S_SAM_SSC_0_PIN_TD_PB5
#define PIN_SSC0_TD {PIO_PB5D_SSC_TD,  PIOB, ID_PIOB, SOC_GPIO_FUNC_D}
#elif CONFIG_I2S_SAM_SSC_0_PIN_TD_PD10
#define PIN_SSC0_TD {PIO_PD10C_SSC_TD, PIOD, ID_PIOD, SOC_GPIO_FUNC_C}
#elif CONFIG_I2S_SAM_SSC_0_PIN_TD_PD26
#define PIN_SSC0_TD {PIO_PD26B_SSC_TD, PIOD, ID_PIOD, SOC_GPIO_FUNC_B}
#endif
#define PIN_SSC0_TF {PIO_PB0D_SSC_TF,  PIOB, ID_PIOB, SOC_GPIO_FUNC_D}
#define PIN_SSC0_TK {PIO_PB1D_SSC_TK,  PIOB, ID_PIOB, SOC_GPIO_FUNC_D}

#define PINS_SSC0 {PIN_SSC0_RD, PIN_SSC0_RF, PIN_SSC0_RK, PIN_SSC0_TD, \
	  PIN_SSC0_TF, PIN_SSC0_TK}

#endif /* _ATMEL_SAM_SOC_PINMAP_H_ */
