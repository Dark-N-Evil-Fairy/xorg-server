/*
 * Copyright © 2013 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

/** @file glamor_egl_stubs.c
 *
 * Stubbed out glamor_egl.c functions for servers other than Xorg.
 */

#include "dix-config.h"

#include "glamor.h"

void
glamor_egl_screen_init(ScreenPtr screen, struct glamor_context *glamor_ctx)
{
}

void
glamor_egl_destroy_textured_pixmap(PixmapPtr pixmap)
{
}

int
glamor_egl_dri3_fd_name_from_tex(ScreenPtr screen,
                                 PixmapPtr pixmap,
                                 unsigned int tex,
                                 Bool want_name, CARD16 *stride, CARD32 *size)
{
    return 0;
}

unsigned int
glamor_egl_create_argb8888_based_texture(ScreenPtr screen, int w, int h)
{
    return 0;
}