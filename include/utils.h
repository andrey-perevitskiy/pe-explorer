#ifndef UTILS_H

#include <windows.h>

void assert (HWND winh, const char * func_name);
CHAR_INFO * data_alloc (const char * data, WORD attrs);

#define UTILS_H
#endif
