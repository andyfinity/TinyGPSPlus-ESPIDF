/*
WProgram.h - Just enough Arduino to appease the TinyGPSPlus library.
Copyright (C) 2019 Andrew Russell
andy@russell.works

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with this program; if not, write to the Free Software Foundation,
Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef WPROGRAM_H
#define WPROGRAM_H

#include <stdint.h>
#include <math.h>
#include "esp_timer.h"

#define TWO_PI M_TWOPI
#define sq(x) ((x)*(x))
#define radians(x) ((x)*M_PI/180)
#define degrees(x) ((x)*180/M_PI)
#define millis() (esp_timer_get_time() / 1000)

typedef uint8_t byte;

#endif