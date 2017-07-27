/* ip_version.h
 * RFC 2780 address family numbers
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

#ifndef __IP_VERSION_H__
#define __IP_VERSION_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*
 * IP Version numbers, from
 *
 *  https://www.iana.org/assignments/version-numbers/version-numbers.xhtml
 */
#define IP_VERSION_NUM_RESERVED          0       /* Reserved */
#define IP_VERSION_NUM_INET              4       /* IP (IP version 4)           */
#define IP_VERSION_NUM_ST                5       /* ST Datagram Mode            */
#define IP_VERSION_NUM_INET6             6       /* IP6 (IP version 6)          */
#define IP_VERSION_NUM_TPIX              7       /* TP/IX: The Next Internet    */
#define IP_VERSION_NUM_PIP               8       /* The P Internet Protocol     */
#define IP_VERSION_NUM_TUBA              9       /* TUBA     */

extern const value_string ip_version_vals[];

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __IP_VERSION_H__ */

/*
 * Editor modelines  -  http://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 4
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=4 tabstop=8 expandtab:
 * :indentSize=4:tabSize=8:noTabs=true:
 */
