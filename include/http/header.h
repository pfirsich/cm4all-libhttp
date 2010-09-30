/*
 * author: Max Kellermann <mk@cm4all.com>
 */

#ifndef HTTP_HEADER_H
#define HTTP_HEADER_H

#include <stdbool.h>

/**
 * Determines if the specified name consists only of valid characters
 * (RFC 822 3.2).
 */
bool
http_header_name_valid(const char *name);

/**
 * Determines if the specified name is a hop-by-hop header.  In
 * addition to the list in RFC 2616 13.5.1, "Content-Length" is also a
 * hop-by-hop header according to this function.
 */
bool
http_header_is_hop_by_hop(const char *name);

#endif
