/*
 * This file is part of libslab.
 *
 * Copyright (c) 2006 Novell, Inc.
 *
 * Libslab is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * Libslab is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libslab; if not, write to the Free Software Foundation, Inc., 51
 * Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __MATE_UTILS_H__
#define __MATE_UTILS_H__

#include <gtk/gtk.h>
#include <libmate/mate-desktop-item.h>

#ifdef __cplusplus
extern "C" {
#endif

gboolean load_image_by_id (GtkImage * image, GtkIconSize size,
	const gchar * image_id);
MateDesktopItem *load_desktop_item_by_unknown_id (const gchar * id);
void handle_g_error (GError ** error, const gchar * user_format, ...);
GtkWidget *get_main_menu_section_header (const gchar * markup);

#ifdef __cplusplus
}
#endif
#endif /* __MATE_UTILS_H__ */
