/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define AUTO_SHIFT_MODIFIERS
#define AUTO_SHIFT_TIMEOUT 145

#define COMBO_COUNT 1

#define LAYER_STATE_8BIT

#define NO_MUSIC_MODE

#define RETRO_SHIFT 500
#define RETRO_TAPPING

//#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 145

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
