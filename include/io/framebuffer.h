/** VideoCore framebuffer */
#ifndef _FRAMEBUFFER_H_
#define _FRAMEBUFFER_H_

#include "io/font.h"

/** Initializes the frame buffer */
void fb_init();
/** Draws a pixel to the screen at the given coordinates with the given color */
void fb_draw_pixel(int x, int y, unsigned char color);
/** Draws a character to the screen at the given coordinates with the given color */
void fb_draw_char(int x, int y, char c, struct font font);
/** Draws a string to the screen at the given coordinates with the given color */
void fb_draw_string(int x, int y, const char *s, struct font font);

#endif //_FRAMEBUFFER_H_