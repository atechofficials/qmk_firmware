/* Protokeeb Copyright 2024 A-Tech Officials (@atechofficials)
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program. 
 * If not, see <https://www.gnu.org/licenses/gpl-3.0.html>.
 */

#pragma once

/* Enable RP2040 I2C Interface */
#undef HAL_USE_I2C
#define HAL_USE_I2C FALSE

/* Enable RP2040 SPI Interface */
#undef HAL_USE_SPI
#define HAL_USE_SPI FALSE
#define SPI_USE_WAIT FALSE
#define SPI_SELECT_MODE SPI_SELECT_MODE_NONE
// #define SPI_SELECT_MODE SPI_SELECT_MODE_PAD

#include_next <halconf.h>
