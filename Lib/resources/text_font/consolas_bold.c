
/**
  ******************************************************************************
  * @file    consolas_bold.c
  * @author  Maik Kempen
  * @brief   Consolas font-family characters (glyphs) 16px size in bold style 
  * of variable width per character all stored in an array. 
  ******************************************************************************
  */

#include "font.h"

// Consolas (bold) 16 px font, with 1 bit per pixel
// only these characters: !,.?ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz
// .ttf file (font files) converted to bitmap array with https://lvgl.io/tools/font_conv_v5_3

// Store the image of the letters (glyph)
const uint8_t consolas_bold_bitmap[] = 
{
  /*ASCII: 0021 (!) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x60,  //.%% 
  0x60,  //.%% 
  0x60,  //.%% 
  0x60,  //.%% 
  0x60,  //.%% 
  0x60,  //.%% 
  0x60,  //.%% 
  0x00,  //... 
  0x60,  //.%% 
  0x60,  //.%% 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*ASCII: 002c (,) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x30,  //..%%. 
  0x30,  //..%%. 
  0x30,  //..%%. 
  0x30,  //..%%. 
  0xe0,  //%%%.. 
  0x00,  //..... 


  /*ASCII: 002e (.) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*ASCII: 003f (?) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x70,  //.%%%.. 
  0x18,  //...%%. 
  0x0c,  //....%% 
  0x08,  //....%. 
  0x38,  //..%%%. 
  0x20,  //..%... 
  0x20,  //..%... 
  0x00,  //...... 
  0x60,  //.%%... 
  0x60,  //.%%... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*ASCII: 0041 (A) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x18,  //...%%... 
  0x38,  //..%%%... 
  0x2c,  //..%.%%.. 
  0x2c,  //..%.%%.. 
  0x64,  //.%%..%.. 
  0x66,  //.%%..%%. 
  0x7e,  //.%%%%%%. 
  0xc6,  //%%...%%. 
  0xc3,  //%%....%% 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0042 (B) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x7c,  //.%%%%%.. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x64,  //.%%..%.. 
  0x7c,  //.%%%%%.. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x7c,  //.%%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0043 (C) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x1c,  //...%%%. 
  0x62,  //.%%...% 
  0x60,  //.%%.... 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x60,  //.%%.... 
  0x62,  //.%%...% 
  0x3c,  //..%%%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 0044 (D) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x78,  //.%%%%... 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x42,  //.%....%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x4c,  //.%..%%.. 
  0x78,  //.%%%%... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0045 (E) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xfc,  //%%%%%% 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xf8,  //%%%%%. 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xfc,  //%%%%%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*ASCII: 0046 (F) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xfc,  //%%%%%% 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xf8,  //%%%%%. 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*ASCII: 0047 (G) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x62,  //.%%...%. 
  0x60,  //.%%..... 
  0xc0,  //%%...... 
  0xce,  //%%..%%%. 
  0xc6,  //%%...%%. 
  0x46,  //.%...%%. 
  0x66,  //.%%..%%. 
  0x3e,  //..%%%%%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0048 (H) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x7e,  //.%%%%%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0049 (I) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xfc,  //%%%%%% 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0xfc,  //%%%%%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*ASCII: 004a (J) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xf8,  //%%%%%. 
  0x18,  //...%%. 
  0x18,  //...%%. 
  0x18,  //...%%. 
  0x18,  //...%%. 
  0x18,  //...%%. 
  0x18,  //...%%. 
  0x98,  //%..%%. 
  0x70,  //.%%%.. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*ASCII: 004b (K) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x66,  //.%%..%%. 
  0x6c,  //.%%.%%.. 
  0x6c,  //.%%.%%.. 
  0x78,  //.%%%%... 
  0x70,  //.%%%.... 
  0x78,  //.%%%%... 
  0x6c,  //.%%.%%.. 
  0x6c,  //.%%.%%.. 
  0x66,  //.%%..%%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 004c (L) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0xfc,  //%%%%%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*ASCII: 004d (M) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x6e,  //.%%.%%%. 
  0x5a,  //.%.%%.%. 
  0x5a,  //.%.%%.%. 
  0xd2,  //%%.%..%. 
  0xc2,  //%%....%. 
  0xc2,  //%%....%. 
  0xc2,  //%%....%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 004e (N) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x62,  //.%%...%. 
  0x62,  //.%%...%. 
  0x72,  //.%%%..%. 
  0x72,  //.%%%..%. 
  0x5a,  //.%.%%.%. 
  0x4e,  //.%..%%%. 
  0x4e,  //.%..%%%. 
  0x4e,  //.%..%%%. 
  0x46,  //.%...%%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 004f (O) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x66,  //.%%..%%. 
  0x46,  //.%...%%. 
  0xc2,  //%%....%. 
  0xc2,  //%%....%. 
  0xc2,  //%%....%. 
  0x46,  //.%...%%. 
  0x66,  //.%%..%%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0050 (P) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x7c,  //.%%%%%.. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x7c,  //.%%%%%.. 
  0x60,  //.%%..... 
  0x60,  //.%%..... 
  0x60,  //.%%..... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0051 (Q) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x66,  //.%%..%%. 
  0x46,  //.%...%%. 
  0xc2,  //%%....%. 
  0xc2,  //%%....%. 
  0xc2,  //%%....%. 
  0xc6,  //%%...%%. 
  0x66,  //.%%..%%. 
  0x3c,  //..%%%%.. 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x0e,  //....%%%. 


  /*ASCII: 0052 (R) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x7c,  //.%%%%%.. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x64,  //.%%..%.. 
  0x78,  //.%%%%... 
  0x6c,  //.%%.%%.. 
  0x6c,  //.%%.%%.. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0053 (S) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x3c,  //..%%%%. 
  0x60,  //.%%.... 
  0x60,  //.%%.... 
  0x70,  //.%%%... 
  0x3c,  //..%%%%. 
  0x0e,  //....%%% 
  0x06,  //.....%% 
  0x46,  //.%...%% 
  0x7c,  //.%%%%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 0054 (T) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x7e,  //.%%%%%%. 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0055 (U) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x66,  //.%%..%%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0056 (V) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0xc3,  //%%....%% 
  0xc6,  //%%...%%. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x64,  //.%%..%.. 
  0x2c,  //..%.%%.. 
  0x3c,  //..%%%%.. 
  0x38,  //..%%%... 
  0x18,  //...%%... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0057 (W) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0xc2,  //%%....%. 
  0xc2,  //%%....%. 
  0xc2,  //%%....%. 
  0xda,  //%%.%%.%. 
  0xda,  //%%.%%.%. 
  0x5a,  //.%.%%.%. 
  0x6e,  //.%%.%%%. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0058 (X) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x66,  //.%%..%%. 
  0x64,  //.%%..%.. 
  0x3c,  //..%%%%.. 
  0x38,  //..%%%... 
  0x18,  //...%%... 
  0x3c,  //..%%%%.. 
  0x2c,  //..%.%%.. 
  0x66,  //.%%..%%. 
  0xc6,  //%%...%%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0059 (Y) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0xc2,  //%%....%. 
  0x66,  //.%%..%%. 
  0x64,  //.%%..%.. 
  0x3c,  //..%%%%.. 
  0x38,  //..%%%... 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 005a (Z) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x7e,  //.%%%%%% 
  0x04,  //.....%. 
  0x0c,  //....%%. 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x30,  //..%%... 
  0x30,  //..%%... 
  0x60,  //.%%.... 
  0x7e,  //.%%%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 0061 (a) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x3c,  //..%%%%. 
  0x46,  //.%...%% 
  0x06,  //.....%% 
  0x3e,  //..%%%%% 
  0x66,  //.%%..%% 
  0x6e,  //.%%.%%% 
  0x7e,  //.%%%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 0062 (b) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x60,  //.%%..... 
  0x60,  //.%%..... 
  0x60,  //.%%..... 
  0x7c,  //.%%%%%.. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x7c,  //.%%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0063 (c) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x1e,  //...%%%% 
  0x20,  //..%.... 
  0x60,  //.%%.... 
  0x60,  //.%%.... 
  0x60,  //.%%.... 
  0x60,  //.%%.... 
  0x3e,  //..%%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 0064 (d) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x06,  //.....%% 
  0x06,  //.....%% 
  0x06,  //.....%% 
  0x3e,  //..%%%%% 
  0x66,  //.%%..%% 
  0x46,  //.%...%% 
  0x46,  //.%...%% 
  0x46,  //.%...%% 
  0x6e,  //.%%.%%% 
  0x3e,  //..%%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 0065 (e) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x3c,  //..%%%%. 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x7e,  //.%%%%%% 
  0x40,  //.%..... 
  0x60,  //.%%.... 
  0x3e,  //..%%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 0066 (f) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x0e,  //....%%%. 
  0x18,  //...%%... 
  0x10,  //...%.... 
  0x10,  //...%.... 
  0x7e,  //.%%%%%%. 
  0x10,  //...%.... 
  0x10,  //...%.... 
  0x10,  //...%.... 
  0x10,  //...%.... 
  0x10,  //...%.... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0067 (g) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3e,  //..%%%%%. 
  0x64,  //.%%..%.. 
  0x64,  //.%%..%.. 
  0x64,  //.%%..%.. 
  0x78,  //.%%%%... 
  0x60,  //.%%..... 
  0x7c,  //.%%%%%.. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x7c,  //.%%%%%.. 


  /*ASCII: 0068 (h) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x60,  //.%%.... 
  0x60,  //.%%.... 
  0x60,  //.%%.... 
  0x7c,  //.%%%%%. 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 0069 (i) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x7e,  //.%%%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 006a (j) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x0c,  //....%%. 
  0x0c,  //....%%. 
  0x00,  //....... 
  0x7c,  //.%%%%%. 
  0x0c,  //....%%. 
  0x0c,  //....%%. 
  0x0c,  //....%%. 
  0x0c,  //....%%. 
  0x0c,  //....%%. 
  0x0c,  //....%%. 
  0x0c,  //....%%. 
  0x0c,  //....%%. 
  0x78,  //.%%%%.. 


  /*ASCII: 006b (k) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0xc0,  //%%..... 
  0xc0,  //%%..... 
  0xc0,  //%%..... 
  0xcc,  //%%..%%. 
  0xd8,  //%%.%%.. 
  0xf0,  //%%%%... 
  0xf0,  //%%%%... 
  0xf0,  //%%%%... 
  0xd8,  //%%.%%.. 
  0xcc,  //%%..%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 006c (l) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x18,  //...%%.. 
  0x7e,  //.%%%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 006d (m) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0xf6,  //%%%%.%%. 
  0xda,  //%%.%%.%. 
  0xda,  //%%.%%.%. 
  0xda,  //%%.%%.%. 
  0xda,  //%%.%%.%. 
  0xda,  //%%.%%.%. 
  0xda,  //%%.%%.%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 006e (n) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x7c,  //.%%%%%. 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 006f (o) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x66,  //.%%..%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x46,  //.%...%%. 
  0x66,  //.%%..%%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0070 (p) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x7c,  //.%%%%%.. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x7c,  //.%%%%%.. 
  0x60,  //.%%..... 
  0x60,  //.%%..... 
  0x60,  //.%%..... 


  /*ASCII: 0071 (q) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x3e,  //..%%%%% 
  0x66,  //.%%..%% 
  0x46,  //.%...%% 
  0x46,  //.%...%% 
  0x46,  //.%...%% 
  0x6e,  //.%%.%%% 
  0x3e,  //..%%%%% 
  0x06,  //.....%% 
  0x06,  //.....%% 
  0x06,  //.....%% 


  /*ASCII: 0072 (r) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0xd8,  //%%.%%.. 
  0xec,  //%%%.%%. 
  0xcc,  //%%..%%. 
  0xc0,  //%%..... 
  0xc0,  //%%..... 
  0xc0,  //%%..... 
  0xc0,  //%%..... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 0073 (s) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x78,  //.%%%%. 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0x78,  //.%%%%. 
  0x1c,  //...%%% 
  0x0c,  //....%% 
  0xf8,  //%%%%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*ASCII: 0074 (t) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x10,  //...%... 
  0x30,  //..%%... 
  0xfe,  //%%%%%%% 
  0x30,  //..%%... 
  0x30,  //..%%... 
  0x30,  //..%%... 
  0x30,  //..%%... 
  0x30,  //..%%... 
  0x1e,  //...%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 0075 (u) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x66,  //.%%..%% 
  0x6e,  //.%%.%%% 
  0x3e,  //..%%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*ASCII: 0076 (v) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0xc2,  //%%....%. 
  0x46,  //.%...%%. 
  0x66,  //.%%..%%. 
  0x24,  //..%..%.. 
  0x2c,  //..%.%%.. 
  0x38,  //..%%%... 
  0x18,  //...%%... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0077 (w) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0xc3,  //%%....%% 
  0xc2,  //%%....%. 
  0xda,  //%%.%%.%. 
  0x5a,  //.%.%%.%. 
  0x7e,  //.%%%%%%. 
  0x6e,  //.%%.%%%. 
  0x66,  //.%%..%%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0078 (x) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x66,  //.%%..%%. 
  0x64,  //.%%..%.. 
  0x3c,  //..%%%%.. 
  0x18,  //...%%... 
  0x3c,  //..%%%%.. 
  0x64,  //.%%..%.. 
  0x66,  //.%%..%%. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*ASCII: 0079 (y) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0xc2,  //%%....%. 
  0x46,  //.%...%%. 
  0x66,  //.%%..%%. 
  0x24,  //..%..%.. 
  0x2c,  //..%.%%.. 
  0x38,  //..%%%... 
  0x18,  //...%%... 
  0x10,  //...%.... 
  0x30,  //..%%.... 
  0xe0,  //%%%..... 


  /*ASCII: 007a (z) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xf8,  //%%%%%. 
  0x18,  //...%%. 
  0x10,  //...%.. 
  0x30,  //..%%.. 
  0x60,  //.%%... 
  0x60,  //.%%... 
  0xfc,  //%%%%%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


};
