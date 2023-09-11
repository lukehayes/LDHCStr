#ifndef LDH_STR_H
#define LDH_STR_H

#include <stddef.h>

/*-----------------------------------------------------------------------------
|
| Helpful string functions.
|
-----------------------------------------------------------------------------*/

typedef struct str_t
{
	char* data;
	size_t length;

} str_t;

str_t str_create(const char* s);

#endif // !LDH_STR_H
