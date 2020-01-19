/* time_shift_dlg.h
 * Submitted by Edwin Groothuis <wireshark@mavetju.org>
 *
 * $Id: time_shift_dlg.h 46680 2012-12-21 17:37:57Z gerald $
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __TIME_SHIFT_DLG_H__
#define __TIME_SHIFT_DLG_H__

/** User requested to shift the time of the trace
 *
 * @param widget parent widget (unused)
 * @param data unused
 * @param action the function to use
 */
extern void time_shift_cb(GtkWidget *widget, gpointer data);

#endif /* __TIME_SHIFT_DLG_H__ */
