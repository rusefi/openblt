/************************************************************************************//**
* \file         Demo/ARMCM4_STM32L4_Nucleo_L496ZG_CubeIDE/Boot/App/flash_layout.c
* \brief        Custom flash layout table source file.
* \ingroup      Boot_ARMCM4_STM32L4_Nucleo_L496ZG_CubeIDE
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2021  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published by the Free
* Software Foundation, either version 3 of the License, or (at your option) any later
* version.
*
* OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
* PURPOSE. See the GNU General Public License for more details.
*
* You have received a copy of the GNU General Public License along with OpenBLT. It
* should be located in ".\Doc\license.html". If not, contact Feaser to obtain a copy.
*
* \endinternal
****************************************************************************************/

/** \brief   Array wit the layout of the flash memory.
 *  \details Also controls what part of the flash memory is reserved for the bootloader.
 *           If the bootloader size changes, the reserved sectors for the bootloader
 *           might need adjustment to make sure the bootloader doesn't get overwritten.
 */
static const tFlashSector flashLayout[] =
{
  /* space is reserved for a bootloader configuration with all supported communication
   * interfaces enabled. when for example only UART is needed, then the space required
   * for the bootloader can be made a lot smaller here.
   */
  /* { 0x08000000, 0x00800 },           flash sector  0 - 2kb (reserved for bootloader)*/
  /* { 0x08000800, 0x00800 },           flash sector  1 - 2kb (reserved for bootloader)*/
  /* { 0x08001000, 0x00800 },           flash sector  2 - 2kb (reserved for bootloader)*/
  /* { 0x08001800, 0x00800 },           flash sector  3 - 2kb (reserved for bootloader)*/
  /* { 0x08002000, 0x00800 },           flash sector  4 - 2kb (reserved for bootloader)*/
  /* { 0x08002800, 0x00800 },           flash sector  5 - 2kb (reserved for bootloader)*/
  /* { 0x08003000, 0x00800 },           flash sector  6 - 2kb (reserved for bootloader)*/
  /* { 0x08003800, 0x00800 },           flash sector  7 - 2kb (reserved for bootloader)*/
  /* { 0x08004000, 0x00800 },           flash sector  8 - 2kb (reserved for bootloader)*/
  /* { 0x08004800, 0x00800 },           flash sector  9 - 2kb (reserved for bootloader)*/
  /* { 0x08005000, 0x00800 },           flash sector 10 - 2kb (reserved for bootloader)*/
  /* { 0x08005800, 0x00800 },           flash sector 11 - 2kb (reserved for bootloader)*/
  { 0x08006000, 0x00800 },              /* flash sector  12 - 2kb                      */
  { 0x08006800, 0x00800 },              /* flash sector  13 - 2kb                      */
  { 0x08007000, 0x00800 },              /* flash sector  14 - 2kb                      */
  { 0x08007800, 0x00800 },              /* flash sector  15 - 2kb                      */
  { 0x08008000, 0x00800 },              /* flash sector  16 - 2kb                      */
  { 0x08008800, 0x00800 },              /* flash sector  17 - 2kb                      */
  { 0x08009000, 0x00800 },              /* flash sector  18 - 2kb                      */
  { 0x08009800, 0x00800 },              /* flash sector  19 - 2kb                      */
  { 0x0800A000, 0x00800 },              /* flash sector  20 - 2kb                      */
  { 0x0800A800, 0x00800 },              /* flash sector  21 - 2kb                      */
  { 0x0800B000, 0x00800 },              /* flash sector  22 - 2kb                      */
  { 0x0800B800, 0x00800 },              /* flash sector  23 - 2kb                      */
  { 0x0800C000, 0x00800 },              /* flash sector  24 - 2kb                      */
  { 0x0800C800, 0x00800 },              /* flash sector  25 - 2kb                      */
  { 0x0800D000, 0x00800 },              /* flash sector  26 - 2kb                      */
  { 0x0800D800, 0x00800 },              /* flash sector  27 - 2kb                      */
  { 0x0800E000, 0x00800 },              /* flash sector  28 - 2kb                      */
  { 0x0800E800, 0x00800 },              /* flash sector  29 - 2kb                      */
  { 0x0800F000, 0x00800 },              /* flash sector  30 - 2kb                      */
  { 0x0800F800, 0x00800 },              /* flash sector  31 - 2kb                      */
  { 0x08010000, 0x08000 },              /* flash sectors 32  to  47 - 32kb             */
  { 0x08018000, 0x08000 },              /* flash sectors 48  to  63 - 32kb             */
  { 0x08020000, 0x08000 },              /* flash sectors 64  to  79 - 32kb             */
  { 0x08028000, 0x08000 },              /* flash sectors 80  to  95 - 32kb             */
  { 0x08030000, 0x08000 },              /* flash sectors 96  to 111 - 32kb             */
  { 0x08038000, 0x08000 },              /* flash sectors 112 to 127 - 32kb             */
  { 0x08040000, 0x08000 },              /* flash sectors 128 to 143 - 32kb             */
  { 0x08048000, 0x08000 },              /* flash sectors 144 to 159 - 32kb             */
  { 0x08050000, 0x08000 },              /* flash sectors 160 to 175 - 32kb             */
  { 0x08058000, 0x08000 },              /* flash sectors 176 to 191 - 32kb             */
  { 0x08060000, 0x08000 },              /* flash sectors 192 to 207 - 32kb             */
  { 0x08068000, 0x08000 },              /* flash sectors 208 to 223 - 32kb             */
  { 0x08070000, 0x08000 },              /* flash sectors 224 to 239 - 32kb             */
  { 0x08078000, 0x08000 },              /* flash sectors 240 to 255 - 32kb             */
  { 0x08080000, 0x08000 },              /* flash sectors 256 to 271 - 32kb             */
  { 0x08088000, 0x08000 },              /* flash sectors 272 to 287 - 32kb             */
  { 0x08090000, 0x08000 },              /* flash sectors 288 to 303 - 32kb             */
  { 0x08098000, 0x08000 },              /* flash sectors 304 to 319 - 32kb             */
  { 0x080A0000, 0x08000 },              /* flash sectors 320 to 335 - 32kb             */
  { 0x080A8000, 0x08000 },              /* flash sectors 336 to 351 - 32kb             */
  { 0x080B0000, 0x08000 },              /* flash sectors 352 to 367 - 32kb             */
  { 0x080B8000, 0x08000 },              /* flash sectors 368 to 383 - 32kb             */
  { 0x080C0000, 0x08000 },              /* flash sectors 384 to 399 - 32kb             */
  { 0x080C8000, 0x08000 },              /* flash sectors 400 to 415 - 32kb             */
  { 0x080D0000, 0x08000 },              /* flash sectors 416 to 431 - 32kb             */
  { 0x080D8000, 0x08000 },              /* flash sectors 432 to 447 - 32kb             */
  { 0x080E0000, 0x08000 },              /* flash sectors 448 to 463 - 32kb             */
  { 0x080E8000, 0x08000 },              /* flash sectors 464 to 479 - 32kb             */
  { 0x080F0000, 0x08000 },              /* flash sectors 480 to 495 - 32kb             */
  { 0x080F8000, 0x08000 },              /* flash sectors 496 to 511 - 32kb             */
};


/*********************************** end of flash_layout.c *****************************/
