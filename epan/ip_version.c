/* ip_version.c
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

#include "config.h"

#include <epan/value_string.h>
#include <epan/ip_version.h>

const value_string ip_version_vals[] = {
    { IP_VERSION_NUM_RESERVED,       "Reserved" },
    { IP_VERSION_NUM_INET,           "IPv4" },
    { IP_VERSION_NUM_ST,             "ST Datagram" },
    { IP_VERSION_NUM_INET6,          "IPv6" },
    { IP_VERSION_NUM_TPIX,           "TP/IX" },
    { IP_VERSION_NUM_PIP,            "PIP" },
    { IP_VERSION_NUM_TUBA,           "TUBA" },
    { 0, NULL },
};

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
