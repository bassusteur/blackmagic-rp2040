/*
 * This file is part of the Black Magic Debug project.
 *
 * Copyright (C) 2015 Gareth McMullin <gareth@blacksphere.co.nz>
 * Copyright (C) 2023 1BitSquared <info@1bitsquared.com>
 * Modified by Rachel Mant <git@dragonmux.network>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PLATFORMS_RP2040_TIMING_RP2040_H
#define PLATFORMS_RP2040_TIMING_RP2040_H

#include <stdint.h>
#include <stdbool.h>

extern bool running_status;

void platform_timing_init(void);

void platform_delay(uint32_t ms);

uint32_t platform_time_ms(void);

#endif /* PLATFORMS_RP2040_TIMING_RP2040_H */
