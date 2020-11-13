/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2014 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2017 - Daniel De Matteis
 *
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __RARCH_FONT_BITMAP_H
#define __RARCH_FONT_BITMAP_H

#define FONT_WIDTH 5
#define FONT_HEIGHT 10
#define FONT_HEIGHT_BASELINE 8
#define FONT_WIDTH_STRIDE (FONT_WIDTH + 1)
#define FONT_HEIGHT_STRIDE (FONT_HEIGHT + 1)

#define FONT_OFFSET(x) ((x) * ((FONT_HEIGHT * FONT_WIDTH + 7) / 8))

static const unsigned char bitmap_bin[1792] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x42, 0x08, 0x20, 0x00, 0x00, 0x4A, 0x29,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA8, 0xAF, 0xD4, 0x57, 0x00, 0x00, 0x80, 0xF8, 0xE2, 0xE8,
   0x23, 0x00, 0x00, 0x00, 0x88, 0xAA, 0xA8, 0x8A, 0x00, 0x00, 0xC0, 0xA4, 0x64, 0x52, 0x74, 0x00,
   0x00, 0x84, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x08, 0x21, 0x84, 0x20, 0x08, 0x00, 0x82,
   0x20, 0x84, 0x10, 0x22, 0x02, 0x00, 0x00, 0x90, 0xEA, 0x2A, 0x01, 0x00, 0x00, 0x00, 0x10, 0xF2,
   0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0xF0, 0x01, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x10, 0x22, 0x44, 0x88, 0x10, 0x01, 0x00,
   0xC0, 0xC5, 0x58, 0x63, 0x74, 0x00, 0x00, 0x80, 0x18, 0x42, 0x08, 0x71, 0x00, 0x00, 0xC0, 0x45,
   0xC8, 0x44, 0xF8, 0x00, 0x00, 0xC0, 0x45, 0xC8, 0x60, 0x74, 0x00, 0x00, 0x00, 0x31, 0x95, 0x3E,
   0x42, 0x00, 0x00, 0xE0, 0x87, 0xF0, 0x60, 0x74, 0x00, 0x00, 0x80, 0x89, 0xF0, 0x62, 0x74, 0x00,
   0x00, 0xE0, 0x43, 0x84, 0x08, 0x11, 0x00, 0x00, 0xC0, 0xC5, 0xE8, 0x62, 0x74, 0x00, 0x00, 0xC0,
   0xC5, 0xE8, 0x21, 0x32, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02,
   0x00, 0x11, 0x00, 0x00, 0x00, 0x40, 0x36, 0x18, 0x04, 0x00, 0x00, 0x00, 0x80, 0x0F, 0x3E, 0x00,
   0x00, 0x00, 0x00, 0x04, 0x83, 0x4D, 0x00, 0x00, 0x00, 0xC0, 0x45, 0x88, 0x08, 0x20, 0x00, 0x00,
   0xC0, 0x87, 0xD6, 0x7A, 0xF0, 0x00, 0x00, 0x80, 0x10, 0xA5, 0x5C, 0x8C, 0x00, 0x00, 0xE0, 0xC5,
   0xF8, 0x62, 0x7C, 0x00, 0x00, 0xC0, 0xC5, 0x10, 0x42, 0x74, 0x00, 0x00, 0xE0, 0xA4, 0x18, 0x63,
   0x3A, 0x00, 0x00, 0xE0, 0x87, 0xF0, 0x42, 0xF8, 0x00, 0x00, 0xE0, 0x87, 0xF0, 0x42, 0x08, 0x00,
   0x00, 0xC0, 0xC5, 0x90, 0x63, 0xF4, 0x00, 0x00, 0x20, 0xC6, 0xF8, 0x63, 0x8C, 0x00, 0x00, 0xC0,
   0x11, 0x42, 0x08, 0x71, 0x00, 0x00, 0x80, 0x43, 0x08, 0x21, 0x7C, 0x00, 0x00, 0x20, 0xA6, 0x32,
   0x4A, 0x8A, 0x00, 0x00, 0x20, 0x84, 0x10, 0x42, 0xF8, 0x00, 0x00, 0x20, 0xC6, 0xBD, 0x6B, 0x8D,
   0x00, 0x00, 0x60, 0xCE, 0x5A, 0x6B, 0xCE, 0x00, 0x00, 0xC0, 0xC5, 0x18, 0x63, 0x74, 0x00, 0x00,
   0xE0, 0xC5, 0xF8, 0x42, 0x08, 0x00, 0x00, 0xC0, 0xC5, 0x18, 0x63, 0xF6, 0x00, 0x00, 0xE0, 0xC5,
   0xF8, 0x62, 0x8C, 0x00, 0x00, 0xC0, 0xC5, 0xE0, 0x60, 0x74, 0x00, 0x00, 0xE0, 0x13, 0x42, 0x08,
   0x21, 0x00, 0x00, 0x20, 0xC6, 0x18, 0x63, 0x74, 0x00, 0x00, 0x20, 0xC6, 0xA8, 0x14, 0x21, 0x00,
   0x00, 0x20, 0xD6, 0x5A, 0x95, 0x52, 0x00, 0x00, 0x20, 0x46, 0x45, 0x54, 0x8C, 0x00, 0x00, 0x20,
   0xC6, 0xE8, 0x08, 0x21, 0x00, 0x00, 0xE0, 0x43, 0x44, 0x44, 0xF8, 0x00, 0x00, 0x4E, 0x08, 0x21,
   0x84, 0x10, 0x0E, 0x00, 0x21, 0x08, 0x41, 0x08, 0x42, 0x10, 0x00, 0x0E, 0x21, 0x84, 0x10, 0x42,
   0x0E, 0x00, 0x80, 0xA8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00,
   0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x7D, 0xF4, 0x00, 0x00, 0x21, 0x84,
   0x17, 0x63, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x42, 0xF0, 0x00, 0x00, 0x10, 0x42, 0x1F, 0x63,
   0xF4, 0x00, 0x00, 0x00, 0x00, 0x17, 0x7F, 0xF0, 0x00, 0x00, 0x5C, 0x88, 0x27, 0x84, 0x10, 0x00,
   0x00, 0x00, 0x00, 0x17, 0x63, 0xF4, 0xD0, 0x01, 0x21, 0x84, 0x17, 0x63, 0x8C, 0x00, 0x00, 0x80,
   0x00, 0x43, 0x08, 0x21, 0x00, 0x00, 0x00, 0x01, 0x86, 0x10, 0x42, 0xE8, 0x00, 0x42, 0x08, 0xA9,
   0x8C, 0x92, 0x00, 0x00, 0x86, 0x10, 0x42, 0x08, 0x21, 0x00, 0x00, 0x00, 0x80, 0x55, 0x6B, 0xAD,
   0x00, 0x00, 0x00, 0x80, 0x17, 0x63, 0x8C, 0x00, 0x00, 0x00, 0x00, 0x17, 0x63, 0x74, 0x00, 0x00,
   0x00, 0x80, 0x17, 0x63, 0x7C, 0x21, 0x00, 0x00, 0x00, 0x1F, 0x63, 0xF4, 0x10, 0x02, 0x00, 0x80,
   0x36, 0x43, 0x08, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1C, 0x7C, 0x00, 0x00, 0x40, 0x08, 0x27, 0x84,
   0xE0, 0x00, 0x00, 0x00, 0x80, 0x18, 0x63, 0xF4, 0x00, 0x00, 0x00, 0x80, 0x18, 0x95, 0x22, 0x00,
   0x00, 0x00, 0x80, 0x58, 0xAB, 0x52, 0x00, 0x00, 0x00, 0x80, 0xA8, 0x88, 0x8A, 0x00, 0x00, 0x00,
   0x80, 0x18, 0x63, 0xF4, 0xD0, 0x01, 0x00, 0x80, 0x8F, 0x88, 0xF8, 0x00, 0x00, 0x88, 0x10, 0x22,
   0x08, 0x21, 0x08, 0x00, 0x84, 0x10, 0x42, 0x08, 0x21, 0x04, 0x00, 0x82, 0x10, 0x82, 0x08, 0x21,
   0x02, 0x00, 0x00, 0x00, 0x60, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x3F, 0x84, 0x10, 0x42, 0x08, 0xE1, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x40, 0x04, 0x00, 0x98, 0x10, 0x47, 0x08, 0x21, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x50, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA8, 0x00, 0x00, 0x84, 0x7C, 0x42, 0x08, 0x21, 0x04,
   0x00, 0x84, 0x7C, 0xF2, 0x09, 0x21, 0x04, 0x00, 0x44, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x48, 0x45, 0x54, 0x02, 0x00, 0x00, 0x8A, 0x00, 0x1F, 0x3E, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x44,
   0x04, 0x41, 0x00, 0x00, 0xC0, 0xA6, 0x94, 0x53, 0xB2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x8A, 0x80, 0x8F, 0x88, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x11,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x4A, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x2A, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x15, 0x00, 0x00, 0x00, 0x00,
   0x80, 0xAF, 0x95, 0x02, 0x00, 0x00, 0x8A, 0x00, 0x1F, 0x1C, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x82,
   0x20, 0x22, 0x00, 0x00, 0x00, 0x00, 0x9B, 0x72, 0xB2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x8A, 0x80, 0x8F, 0x88, 0xF8, 0x00, 0x00, 0x0A, 0xC4, 0x18, 0x1D, 0x21, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x42, 0x08, 0x21, 0x00, 0x00, 0x00, 0x20,
   0xAE, 0x14, 0x47, 0x00, 0x00, 0x98, 0x10, 0x4F, 0x44, 0xF8, 0x00, 0x00, 0x00, 0x04, 0x2F, 0xA5,
   0x0F, 0x00, 0x00, 0x20, 0x46, 0x47, 0x3E, 0x21, 0x00, 0x00, 0x84, 0x10, 0x02, 0x08, 0x21, 0x04,
   0x00, 0x98, 0x10, 0x17, 0xA3, 0x23, 0x64, 0x00, 0x40, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
   0x87, 0x56, 0x5A, 0xF0, 0x00, 0x00, 0x04, 0x31, 0xC5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22,
   0x93, 0x24, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x21, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xC0, 0x87, 0x54, 0x4A, 0xF0, 0x00, 0x00, 0xE0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x80, 0x38, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xF2, 0x09, 0xF9, 0x00, 0x00, 0x06, 0x11,
   0xE1, 0x00, 0x00, 0x00, 0x00, 0x06, 0x19, 0x64, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0xA5, 0x74, 0x22, 0x00, 0xC0, 0xDF, 0x6B, 0x29, 0xA5, 0x94,
   0x02, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x88, 0x00, 0xC4,
   0x10, 0xE2, 0x00, 0x00, 0x00, 0x00, 0x44, 0x29, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x24,
   0x89, 0x4C, 0x00, 0x00, 0x30, 0xA6, 0x44, 0xA8, 0x16, 0x01, 0x00, 0x30, 0xA6, 0x44, 0x89, 0x94,
   0x01, 0x00, 0x51, 0x2E, 0x55, 0xA8, 0x16, 0x01, 0x00, 0x80, 0x00, 0x82, 0x60, 0x74, 0x00, 0x00,
   0x82, 0x00, 0xE2, 0x5C, 0x8C, 0x00, 0x00, 0x44, 0x00, 0xE2, 0x5C, 0x8C, 0x00, 0x00, 0x44, 0x01,
   0xE2, 0x5C, 0x8C, 0x00, 0x00, 0x54, 0x01, 0xE2, 0x5C, 0x8C, 0x00, 0x00, 0x40, 0x01, 0xE2, 0x5C,
   0x8C, 0x00, 0x00, 0xC4, 0x11, 0xE2, 0x5C, 0x8C, 0x00, 0x00, 0x80, 0x3B, 0xE7, 0x53, 0xCA, 0x00,
   0x00, 0xC0, 0xC5, 0x10, 0x42, 0x74, 0x44, 0x00, 0x82, 0x80, 0x1F, 0x5E, 0xF8, 0x00, 0x00, 0x44,
   0x80, 0x1F, 0x5E, 0xF8, 0x00, 0x00, 0x44, 0x81, 0x1F, 0x5E, 0xF8, 0x00, 0x00, 0x40, 0x81, 0x1F,
   0x5E, 0xF8, 0x00, 0x00, 0x82, 0x00, 0x47, 0x08, 0x71, 0x00, 0x00, 0x44, 0x00, 0x47, 0x08, 0x71,
   0x00, 0x00, 0x44, 0x01, 0x47, 0x08, 0x71, 0x00, 0x00, 0x40, 0x01, 0x47, 0x08, 0x71, 0x00, 0x00,
   0xC0, 0x49, 0xF1, 0x84, 0x74, 0x00, 0x00, 0x54, 0x81, 0x59, 0x6B, 0xCE, 0x00, 0x00, 0x82, 0x00,
   0x17, 0x63, 0x74, 0x00, 0x00, 0x44, 0x00, 0x17, 0x63, 0x74, 0x00, 0x00, 0x44, 0x01, 0x17, 0x63,
   0x74, 0x00, 0x00, 0x54, 0x01, 0x17, 0x63, 0x74, 0x00, 0x00, 0x40, 0x01, 0x17, 0x63, 0x74, 0x00,
   0x00, 0x00, 0x44, 0x45, 0x54, 0x04, 0x00, 0x00, 0x00, 0x30, 0xA9, 0xAD, 0x6C, 0x00, 0x00, 0x82,
   0x80, 0x18, 0x63, 0x74, 0x00, 0x00, 0x44, 0x80, 0x18, 0x63, 0x74, 0x00, 0x00, 0x44, 0x81, 0x18,
   0x63, 0x74, 0x00, 0x00, 0x40, 0x81, 0x18, 0x63, 0x74, 0x00, 0x00, 0x88, 0xC4, 0x18, 0x1D, 0x21,
   0x00, 0x00, 0x40, 0x08, 0x27, 0xA5, 0x13, 0x02, 0x00, 0xC0, 0x49, 0xE9, 0xA4, 0x74, 0x01, 0x00,
   0x82, 0x00, 0x07, 0x7D, 0xF4, 0x00, 0x00, 0x44, 0x00, 0x07, 0x7D, 0xF4, 0x00, 0x00, 0x44, 0x01,
   0x07, 0x7D, 0xF4, 0x00, 0x00, 0x54, 0x01, 0x07, 0x7D, 0xF4, 0x00, 0x00, 0x40, 0x01, 0x07, 0x7D,
   0xF4, 0x00, 0x00, 0xC4, 0x11, 0x07, 0x7D, 0xF4, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x7C, 0xB2, 0x00,
   0x00, 0x00, 0x00, 0x1F, 0x42, 0xF0, 0x44, 0x00, 0x82, 0x00, 0x17, 0x7F, 0xF0, 0x00, 0x00, 0x44,
   0x00, 0x17, 0x7F, 0xF0, 0x00, 0x00, 0x44, 0x01, 0x17, 0x7F, 0xF0, 0x00, 0x00, 0x40, 0x01, 0x17,
   0x7F, 0xF0, 0x00, 0x00, 0x82, 0x00, 0x43, 0x08, 0x21, 0x00, 0x00, 0x44, 0x00, 0x43, 0x08, 0x21,
   0x00, 0x00, 0x44, 0x01, 0x43, 0x08, 0x21, 0x00, 0x00, 0x40, 0x01, 0x43, 0x08, 0x21, 0x00, 0x00,
   0xC0, 0x22, 0xE8, 0x63, 0x74, 0x00, 0x00, 0x54, 0x81, 0x17, 0x63, 0x8C, 0x00, 0x00, 0x82, 0x00,
   0x17, 0x63, 0x74, 0x00, 0x00, 0x44, 0x00, 0x17, 0x63, 0x74, 0x00, 0x00, 0x44, 0x01, 0x17, 0x63,
   0x74, 0x00, 0x00, 0xAA, 0x00, 0x17, 0x63, 0x74, 0x00, 0x00, 0x40, 0x01, 0x17, 0x63, 0x74, 0x00,
   0x00, 0x00, 0x10, 0xF0, 0x01, 0x01, 0x00, 0x00, 0x00, 0x30, 0xA9, 0xAD, 0x6C, 0x00, 0x00, 0x82,
   0x80, 0x18, 0x63, 0xF4, 0x00, 0x00, 0x44, 0x80, 0x18, 0x63, 0xF4, 0x00, 0x00, 0x44, 0x81, 0x18,
   0x63, 0xF4, 0x00, 0x00, 0x40, 0x81, 0x18, 0x63, 0xF4, 0x00, 0x00, 0x44, 0x80, 0x18, 0x63, 0xF4,
   0xD0, 0x01, 0x20, 0x84, 0x17, 0x63, 0x7C, 0x21, 0x00, 0x40, 0x81, 0x18, 0x63, 0xF4, 0xD0, 0x01
};

#endif
