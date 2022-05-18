/**
  ******************************************************************************
  * @file    arial_bold.c
  * @author  Maik Kempen
  * @brief   Arial font-family characters (glyphs) 16px size in bold style 
  * of variable width per character all stored in an array. 
  ******************************************************************************
  */

#include "font.h"

// Arial (bold) 16 px font, with 1 bit per pixel
// only these characters: !,.?ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz
// .ttf file (font files) converted to bitmap array with https://lvgl.io/tools/font_conv_v5_3

// Store the image of the characters (glyphs)
const uint8_t arial_bold_bitmap[] = 
{
	/*ASCII: 0021 (!) , Width: 3 */
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 
	0xc0,  //%%. 
	0xc0,  //%%. 
	0xc0,  //%%. 
	0xc0,  //%%. 
	0x40,  //.%. 
	0x40,  //.%. 
	0x40,  //.%. 
	0x00,  //... 
	0xc0,  //%%. 
	0xc0,  //%%. 
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 


	/*ASCII: 002c (,) , Width: 3 */
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 
	0x60,  //.%% 
	0x60,  //.%% 
	0x20,  //..% 
	0x40,  //.%. 
	0x00,  //... 


	/*ASCII: 002e (.) , Width: 2 */
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 
	0xc0,  //%% 
	0xc0,  //%% 
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 


	/*ASCII: 003f (?) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x3c,  //..%%%%.. 
	0x7e,  //.%%%%%%. 
	0x63,  //.%%...%% 
	0x03,  //......%% 
	0x0e,  //....%%%. 
	0x0c,  //....%%.. 
	0x18,  //...%%... 
	0x00,  //........ 
	0x18,  //...%%... 
	0x18,  //...%%... 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0041 (A) , Width: 10 */
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x0c, 0x00,  //....%%.... 
	0x1e, 0x00,  //...%%%%... 
	0x1e, 0x00,  //...%%%%... 
	0x16, 0x00,  //...%.%%... 
	0x33, 0x00,  //..%%..%%.. 
	0x33, 0x00,  //..%%..%%.. 
	0x7f, 0x80,  //.%%%%%%%%. 
	0x7f, 0x80,  //.%%%%%%%%. 
	0x61, 0x80,  //.%%....%%. 
	0xc0, 0xc0,  //%%......%% 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 


	/*ASCII: 0042 (B) , Width: 9 */
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0xfe, 0x00,  //%%%%%%%.. 
	0xff, 0x00,  //%%%%%%%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0xfe, 0x00,  //%%%%%%%.. 
	0xff, 0x00,  //%%%%%%%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0xff, 0x00,  //%%%%%%%%. 
	0xfe, 0x00,  //%%%%%%%.. 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 


	/*ASCII: 0043 (C) , Width: 10 */
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x1e, 0x00,  //...%%%%... 
	0x3f, 0x80,  //..%%%%%%%. 
	0x73, 0x80,  //.%%%..%%%. 
	0x61, 0x00,  //.%%....%.. 
	0x60, 0x00,  //.%%....... 
	0x60, 0x00,  //.%%....... 
	0x61, 0x00,  //.%%....%.. 
	0x71, 0x80,  //.%%%...%%. 
	0x3f, 0x80,  //..%%%%%%%. 
	0x1e, 0x00,  //...%%%%... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 


	/*ASCII: 0044 (D) , Width: 9 */
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0xfc, 0x00,  //%%%%%%... 
	0xfe, 0x00,  //%%%%%%%.. 
	0xc7, 0x00,  //%%...%%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0xfe, 0x00,  //%%%%%%%.. 
	0xfc, 0x00,  //%%%%%%... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 


	/*ASCII: 0045 (E) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0xfe,  //%%%%%%%. 
	0xfe,  //%%%%%%%. 
	0xc0,  //%%...... 
	0xc0,  //%%...... 
	0xfe,  //%%%%%%%. 
	0xfe,  //%%%%%%%. 
	0xc0,  //%%...... 
	0xc0,  //%%...... 
	0xff,  //%%%%%%%% 
	0xff,  //%%%%%%%% 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0046 (F) , Width: 7 */
	0x00,  //....... 
	0x00,  //....... 
	0x00,  //....... 
	0xfe,  //%%%%%%% 
	0xfe,  //%%%%%%% 
	0xc0,  //%%..... 
	0xc0,  //%%..... 
	0xfc,  //%%%%%%. 
	0xfc,  //%%%%%%. 
	0xc0,  //%%..... 
	0xc0,  //%%..... 
	0xc0,  //%%..... 
	0xc0,  //%%..... 
	0x00,  //....... 
	0x00,  //....... 
	0x00,  //....... 


	/*ASCII: 0047 (G) , Width: 11 */
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x1f, 0x00,  //...%%%%%... 
	0x3f, 0x80,  //..%%%%%%%.. 
	0x71, 0xc0,  //.%%%...%%%. 
	0x60, 0x80,  //.%%.....%.. 
	0x60, 0x00,  //.%%........ 
	0x63, 0xc0,  //.%%...%%%%. 
	0x63, 0xc0,  //.%%...%%%%. 
	0x70, 0xc0,  //.%%%....%%. 
	0x3f, 0xc0,  //..%%%%%%%%. 
	0x1f, 0x00,  //...%%%%%... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 


	/*ASCII: 0048 (H) , Width: 9 */
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0xff, 0x00,  //%%%%%%%%. 
	0xff, 0x00,  //%%%%%%%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 


	/*ASCII: 0049 (I) , Width: 3 */
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
	0x60,  //.%% 
	0x60,  //.%% 
	0x60,  //.%% 
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 


	/*ASCII: 004a (J) , Width: 7 */
	0x00,  //....... 
	0x00,  //....... 
	0x00,  //....... 
	0x06,  //.....%% 
	0x06,  //.....%% 
	0x06,  //.....%% 
	0x06,  //.....%% 
	0x06,  //.....%% 
	0x06,  //.....%% 
	0xc6,  //%%...%% 
	0xee,  //%%%.%%% 
	0x7c,  //.%%%%%. 
	0x38,  //..%%%.. 
	0x00,  //....... 
	0x00,  //....... 
	0x00,  //....... 


	/*ASCII: 004b (K) , Width: 9 */
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0xc3, 0x00,  //%%....%%. 
	0xc6, 0x00,  //%%...%%.. 
	0xcc, 0x00,  //%%..%%... 
	0xd8, 0x00,  //%%.%%.... 
	0xfc, 0x00,  //%%%%%%... 
	0xec, 0x00,  //%%%.%%... 
	0xce, 0x00,  //%%..%%%.. 
	0xc7, 0x00,  //%%...%%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x80,  //%%....%%% 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 


	/*ASCII: 004c (L) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0xc0,  //%%...... 
	0xc0,  //%%...... 
	0xc0,  //%%...... 
	0xc0,  //%%...... 
	0xc0,  //%%...... 
	0xc0,  //%%...... 
	0xc0,  //%%...... 
	0xc0,  //%%...... 
	0xfe,  //%%%%%%%. 
	0xfe,  //%%%%%%%. 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 004d (M) , Width: 11 */
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x70, 0xe0,  //.%%%....%%% 
	0x71, 0xe0,  //.%%%...%%%% 
	0x79, 0xe0,  //.%%%%..%%%% 
	0x79, 0xe0,  //.%%%%..%%%% 
	0x7b, 0x60,  //.%%%%.%%.%% 
	0x6b, 0x60,  //.%%.%.%%.%% 
	0x6f, 0x60,  //.%%.%%%%.%% 
	0x6e, 0x60,  //.%%.%%%..%% 
	0x6e, 0x60,  //.%%.%%%..%% 
	0x66, 0x60,  //.%%..%%..%% 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 


	/*ASCII: 004e (N) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0xc3,  //%%....%% 
	0xe3,  //%%%...%% 
	0xe3,  //%%%...%% 
	0xf3,  //%%%%..%% 
	0xdb,  //%%.%%.%% 
	0xdb,  //%%.%%.%% 
	0xcf,  //%%..%%%% 
	0xcf,  //%%..%%%% 
	0xc7,  //%%...%%% 
	0xc3,  //%%....%% 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 004f (O) , Width: 11 */
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x1f, 0x00,  //...%%%%%... 
	0x3f, 0x80,  //..%%%%%%%.. 
	0x71, 0xc0,  //.%%%...%%%. 
	0x60, 0xc0,  //.%%.....%%. 
	0x60, 0xc0,  //.%%.....%%. 
	0x60, 0xc0,  //.%%.....%%. 
	0x60, 0xc0,  //.%%.....%%. 
	0x71, 0xc0,  //.%%%...%%%. 
	0x3f, 0x80,  //..%%%%%%%.. 
	0x1f, 0x00,  //...%%%%%... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 


	/*ASCII: 0050 (P) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0xfc,  //%%%%%%.. 
	0xfe,  //%%%%%%%. 
	0xc7,  //%%...%%% 
	0xc7,  //%%...%%% 
	0xfe,  //%%%%%%%. 
	0xfc,  //%%%%%%.. 
	0xc0,  //%%...... 
	0xc0,  //%%...... 
	0xc0,  //%%...... 
	0xc0,  //%%...... 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0051 (Q) , Width: 11 */
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x1f, 0x00,  //...%%%%%... 
	0x3f, 0x80,  //..%%%%%%%.. 
	0x71, 0xc0,  //.%%%...%%%. 
	0x60, 0xc0,  //.%%.....%%. 
	0x60, 0xc0,  //.%%.....%%. 
	0x60, 0xc0,  //.%%.....%%. 
	0x66, 0xc0,  //.%%..%%.%%. 
	0x73, 0xc0,  //.%%%..%%%%. 
	0x3f, 0xc0,  //..%%%%%%%%. 
	0x1f, 0xc0,  //...%%%%%%%. 
	0x00, 0x40,  //.........%. 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 


	/*ASCII: 0052 (R) , Width: 9 */
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0xfe, 0x00,  //%%%%%%%.. 
	0xff, 0x00,  //%%%%%%%%. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x00,  //%%....%%. 
	0xff, 0x00,  //%%%%%%%%. 
	0xfc, 0x00,  //%%%%%%... 
	0xce, 0x00,  //%%..%%%.. 
	0xc6, 0x00,  //%%...%%.. 
	0xc3, 0x00,  //%%....%%. 
	0xc3, 0x80,  //%%....%%% 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 


	/*ASCII: 0053 (S) , Width: 9 */
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x3e, 0x00,  //..%%%%%.. 
	0x7f, 0x00,  //.%%%%%%%. 
	0x63, 0x00,  //.%%...%%. 
	0x70, 0x00,  //.%%%..... 
	0x7e, 0x00,  //.%%%%%%.. 
	0x1f, 0x00,  //...%%%%%. 
	0x03, 0x80,  //......%%% 
	0x63, 0x80,  //.%%...%%% 
	0x7f, 0x00,  //.%%%%%%%. 
	0x3e, 0x00,  //..%%%%%.. 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 


	/*ASCII: 0054 (T) , Width: 9 */
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0xff, 0x00,  //%%%%%%%%. 
	0xff, 0x00,  //%%%%%%%%. 
	0x18, 0x00,  //...%%.... 
	0x18, 0x00,  //...%%.... 
	0x18, 0x00,  //...%%.... 
	0x18, 0x00,  //...%%.... 
	0x18, 0x00,  //...%%.... 
	0x18, 0x00,  //...%%.... 
	0x18, 0x00,  //...%%.... 
	0x18, 0x00,  //...%%.... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 


	/*ASCII: 0055 (U) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0xc3,  //%%....%% 
	0xc3,  //%%....%% 
	0xc3,  //%%....%% 
	0xc3,  //%%....%% 
	0xc3,  //%%....%% 
	0xc3,  //%%....%% 
	0xc3,  //%%....%% 
	0xe7,  //%%%..%%% 
	0x7e,  //.%%%%%%. 
	0x3c,  //..%%%%.. 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0056 (V) , Width: 10 */
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0xc1, 0x80,  //%%.....%%. 
	0x61, 0x80,  //.%%....%%. 
	0x63, 0x00,  //.%%...%%.. 
	0x63, 0x00,  //.%%...%%.. 
	0x33, 0x00,  //..%%..%%.. 
	0x36, 0x00,  //..%%.%%... 
	0x3e, 0x00,  //..%%%%%... 
	0x1e, 0x00,  //...%%%%... 
	0x1c, 0x00,  //...%%%.... 
	0x1c, 0x00,  //...%%%.... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 


	/*ASCII: 0057 (W) , Width: 14 */
	0x00, 0x00,  //.............. 
	0x00, 0x00,  //.............. 
	0x00, 0x00,  //.............. 
	0xc7, 0x18,  //%%...%%%...%%. 
	0xc7, 0x18,  //%%...%%%...%%. 
	0x67, 0x18,  //.%%..%%%...%%. 
	0x65, 0xb0,  //.%%..%.%%.%%.. 
	0x6d, 0xb0,  //.%%.%%.%%.%%.. 
	0x6d, 0xb0,  //.%%.%%.%%.%%.. 
	0x3c, 0xf0,  //..%%%%..%%%%.. 
	0x38, 0xe0,  //..%%%...%%%... 
	0x38, 0xe0,  //..%%%...%%%... 
	0x38, 0xe0,  //..%%%...%%%... 
	0x00, 0x00,  //.............. 
	0x00, 0x00,  //.............. 
	0x00, 0x00,  //.............. 


	/*ASCII: 0058 (X) , Width: 10 */
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x63, 0x80,  //.%%...%%%. 
	0x73, 0x00,  //.%%%..%%.. 
	0x36, 0x00,  //..%%.%%... 
	0x1e, 0x00,  //...%%%%... 
	0x1c, 0x00,  //...%%%.... 
	0x1c, 0x00,  //...%%%.... 
	0x3e, 0x00,  //..%%%%%... 
	0x37, 0x00,  //..%%.%%%.. 
	0x63, 0x00,  //.%%...%%.. 
	0xe1, 0x80,  //%%%....%%. 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 


	/*ASCII: 0059 (Y) , Width: 10 */
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0xe1, 0x80,  //%%%....%%. 
	0x63, 0x00,  //.%%...%%.. 
	0x33, 0x00,  //..%%..%%.. 
	0x36, 0x00,  //..%%.%%... 
	0x1c, 0x00,  //...%%%.... 
	0x1c, 0x00,  //...%%%.... 
	0x0c, 0x00,  //....%%.... 
	0x0c, 0x00,  //....%%.... 
	0x0c, 0x00,  //....%%.... 
	0x0c, 0x00,  //....%%.... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 
	0x00, 0x00,  //.......... 


	/*ASCII: 005a (Z) , Width: 9 */
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x7f, 0x00,  //.%%%%%%%. 
	0x7f, 0x00,  //.%%%%%%%. 
	0x06, 0x00,  //.....%%.. 
	0x0c, 0x00,  //....%%... 
	0x18, 0x00,  //...%%.... 
	0x38, 0x00,  //..%%%.... 
	0x70, 0x00,  //.%%%..... 
	0x60, 0x00,  //.%%...... 
	0xff, 0x00,  //%%%%%%%%. 
	0xff, 0x00,  //%%%%%%%%. 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 


	/*ASCII: 0061 (a) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x3c,  //..%%%%.. 
	0x7e,  //.%%%%%%. 
	0x06,  //.....%%. 
	0x1e,  //...%%%%. 
	0x66,  //.%%..%%. 
	0x66,  //.%%..%%. 
	0x7e,  //.%%%%%%. 
	0x76,  //.%%%.%%. 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0062 (b) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x60,  //.%%..... 
	0x60,  //.%%..... 
	0x7e,  //.%%%%%%. 
	0x7e,  //.%%%%%%. 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x7e,  //.%%%%%%. 
	0x7c,  //.%%%%%.. 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0063 (c) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x3c,  //..%%%%.. 
	0x7e,  //.%%%%%%. 
	0x66,  //.%%..%%. 
	0x60,  //.%%..... 
	0x60,  //.%%..... 
	0x66,  //.%%..%%. 
	0x7e,  //.%%%%%%. 
	0x3c,  //..%%%%.. 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0064 (d) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x03,  //......%% 
	0x03,  //......%% 
	0x3b,  //..%%%.%% 
	0x7f,  //.%%%%%%% 
	0x67,  //.%%..%%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x67,  //.%%..%%% 
	0x7f,  //.%%%%%%% 
	0x3b,  //..%%%.%% 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0065 (e) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x38,  //..%%%... 
	0x7c,  //.%%%%%.. 
	0x66,  //.%%..%%. 
	0x7e,  //.%%%%%%. 
	0xfe,  //%%%%%%%. 
	0x60,  //.%%..... 
	0x7e,  //.%%%%%%. 
	0x3c,  //..%%%%.. 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0066 (f) , Width: 5 */
	0x00,  //..... 
	0x00,  //..... 
	0x00,  //..... 
	0x38,  //..%%% 
	0x60,  //.%%.. 
	0xf8,  //%%%%% 
	0xf8,  //%%%%% 
	0x60,  //.%%.. 
	0x60,  //.%%.. 
	0x60,  //.%%.. 
	0x60,  //.%%.. 
	0x60,  //.%%.. 
	0x60,  //.%%.. 
	0x00,  //..... 
	0x00,  //..... 
	0x00,  //..... 


	/*ASCII: 0067 (g) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x3b,  //..%%%.%% 
	0x7f,  //.%%%%%%% 
	0x67,  //.%%..%%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x67,  //.%%..%%% 
	0x7f,  //.%%%%%%% 
	0x3b,  //..%%%.%% 
	0x67,  //.%%..%%% 
	0x7e,  //.%%%%%%. 
	0x3c,  //..%%%%.. 


	/*ASCII: 0068 (h) , Width: 7 */
	0x00,  //....... 
	0x00,  //....... 
	0x00,  //....... 
	0xc0,  //%%..... 
	0xc0,  //%%..... 
	0xdc,  //%%.%%%. 
	0xfc,  //%%%%%%. 
	0xce,  //%%..%%% 
	0xc6,  //%%...%% 
	0xc6,  //%%...%% 
	0xc6,  //%%...%% 
	0xc6,  //%%...%% 
	0xc6,  //%%...%% 
	0x00,  //....... 
	0x00,  //....... 
	0x00,  //....... 


	/*ASCII: 0069 (i) , Width: 2 */
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 
	0xc0,  //%% 
	0x00,  //.. 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 


	/*ASCII: 006a (j) , Width: 3 */
	0x00,  //... 
	0x00,  //... 
	0x00,  //... 
	0x60,  //.%% 
	0x00,  //... 
	0x60,  //.%% 
	0x60,  //.%% 
	0x60,  //.%% 
	0x60,  //.%% 
	0x60,  //.%% 
	0x60,  //.%% 
	0x60,  //.%% 
	0x60,  //.%% 
	0x60,  //.%% 
	0xe0,  //%%% 
	0xc0,  //%%. 


	/*ASCII: 006b (k) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x60,  //.%%..... 
	0x60,  //.%%..... 
	0x66,  //.%%..%%. 
	0x6c,  //.%%.%%.. 
	0x78,  //.%%%%... 
	0x78,  //.%%%%... 
	0x7c,  //.%%%%%.. 
	0x6c,  //.%%.%%.. 
	0x66,  //.%%..%%. 
	0x66,  //.%%..%%. 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 006c (l) , Width: 2 */
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0xc0,  //%% 
	0x00,  //.. 
	0x00,  //.. 
	0x00,  //.. 


	/*ASCII: 006d (m) , Width: 12 */
	0x00, 0x00,  //............ 
	0x00, 0x00,  //............ 
	0x00, 0x00,  //............ 
	0x00, 0x00,  //............ 
	0x00, 0x00,  //............ 
	0x7c, 0xe0,  //.%%%%%..%%%. 
	0x7f, 0xe0,  //.%%%%%%%%%%. 
	0x67, 0x70,  //.%%..%%%.%%% 
	0x66, 0x30,  //.%%..%%...%% 
	0x66, 0x30,  //.%%..%%...%% 
	0x66, 0x30,  //.%%..%%...%% 
	0x66, 0x30,  //.%%..%%...%% 
	0x66, 0x30,  //.%%..%%...%% 
	0x00, 0x00,  //............ 
	0x00, 0x00,  //............ 
	0x00, 0x00,  //............ 


	/*ASCII: 006e (n) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x6e,  //.%%.%%%. 
	0x7e,  //.%%%%%%. 
	0x67,  //.%%..%%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 006f (o) , Width: 9 */
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x3c, 0x00,  //..%%%%... 
	0x7e, 0x00,  //.%%%%%%.. 
	0x67, 0x00,  //.%%..%%%. 
	0x63, 0x00,  //.%%...%%. 
	0x63, 0x00,  //.%%...%%. 
	0x67, 0x00,  //.%%..%%%. 
	0x7e, 0x00,  //.%%%%%%.. 
	0x3c, 0x00,  //..%%%%... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 
	0x00, 0x00,  //......... 


	/*ASCII: 0070 (p) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x7c,  //.%%%%%.. 
	0x7e,  //.%%%%%%. 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x7e,  //.%%%%%%. 
	0x6c,  //.%%.%%.. 
	0x60,  //.%%..... 
	0x60,  //.%%..... 
	0x60,  //.%%..... 


	/*ASCII: 0071 (q) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x3b,  //..%%%.%% 
	0x7f,  //.%%%%%%% 
	0x67,  //.%%..%%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x67,  //.%%..%%% 
	0x7f,  //.%%%%%%% 
	0x3b,  //..%%%.%% 
	0x03,  //......%% 
	0x03,  //......%% 
	0x03,  //......%% 


	/*ASCII: 0072 (r) , Width: 6 */
	0x00,  //...... 
	0x00,  //...... 
	0x00,  //...... 
	0x00,  //...... 
	0x00,  //...... 
	0x78,  //.%%%%. 
	0x78,  //.%%%%. 
	0x60,  //.%%... 
	0x60,  //.%%... 
	0x60,  //.%%... 
	0x60,  //.%%... 
	0x60,  //.%%... 
	0x60,  //.%%... 
	0x00,  //...... 
	0x00,  //...... 
	0x00,  //...... 


	/*ASCII: 0073 (s) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x3c,  //..%%%%.. 
	0x7e,  //.%%%%%%. 
	0x60,  //.%%..... 
	0x78,  //.%%%%... 
	0x1e,  //...%%%%. 
	0x06,  //.....%%. 
	0x7e,  //.%%%%%%. 
	0x3c,  //..%%%%.. 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0074 (t) , Width: 5 */
	0x00,  //..... 
	0x00,  //..... 
	0x00,  //..... 
	0x20,  //..%.. 
	0x60,  //.%%.. 
	0xf0,  //%%%%. 
	0xf0,  //%%%%. 
	0x60,  //.%%.. 
	0x60,  //.%%.. 
	0x60,  //.%%.. 
	0x60,  //.%%.. 
	0x70,  //.%%%. 
	0x30,  //..%%. 
	0x00,  //..... 
	0x00,  //..... 
	0x00,  //..... 


	/*ASCII: 0075 (u) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x63,  //.%%...%% 
	0x67,  //.%%..%%% 
	0x7f,  //.%%%%%%% 
	0x3b,  //..%%%.%% 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0076 (v) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0xc6,  //%%...%%. 
	0x66,  //.%%..%%. 
	0x66,  //.%%..%%. 
	0x6c,  //.%%.%%.. 
	0x3c,  //..%%%%.. 
	0x3c,  //..%%%%.. 
	0x38,  //..%%%... 
	0x18,  //...%%... 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0077 (w) , Width: 11 */
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0xce, 0x60,  //%%..%%%..%% 
	0xce, 0x40,  //%%..%%%..%. 
	0x6e, 0xc0,  //.%%.%%%.%%. 
	0x6e, 0xc0,  //.%%.%%%.%%. 
	0x7b, 0xc0,  //.%%%%.%%%%. 
	0x3b, 0x80,  //..%%%.%%%.. 
	0x3b, 0x80,  //..%%%.%%%.. 
	0x31, 0x80,  //..%%...%%.. 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 
	0x00, 0x00,  //........... 


	/*ASCII: 0078 (x) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x66,  //.%%..%%. 
	0x6c,  //.%%.%%.. 
	0x3c,  //..%%%%.. 
	0x38,  //..%%%... 
	0x38,  //..%%%... 
	0x3c,  //..%%%%.. 
	0x6e,  //.%%.%%%. 
	0xe6,  //%%%..%%. 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 


	/*ASCII: 0079 (y) , Width: 8 */
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0x00,  //........ 
	0xc6,  //%%...%%. 
	0x66,  //.%%..%%. 
	0x66,  //.%%..%%. 
	0x64,  //.%%..%.. 
	0x3c,  //..%%%%.. 
	0x3c,  //..%%%%.. 
	0x38,  //..%%%... 
	0x18,  //...%%... 
	0x18,  //...%%... 
	0x30,  //..%%.... 
	0x70,  //.%%%.... 


	/*ASCII: 007a (z) , Width: 7 */
	0x00,  //....... 
	0x00,  //....... 
	0x00,  //....... 
	0x00,  //....... 
	0x00,  //....... 
	0x7c,  //.%%%%%. 
	0x7c,  //.%%%%%. 
	0x1c,  //...%%%. 
	0x18,  //...%%.. 
	0x30,  //..%%... 
	0x60,  //.%%.... 
	0xfe,  //%%%%%%% 
	0xfe,  //%%%%%%% 
	0x00,  //....... 
	0x00,  //....... 
	0x00,  //....... 


};

