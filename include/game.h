#include "common.h"
#include "entity.h"
#include <psyq/LIBGTE.H>

/*
 * g_CurrentEntity is allocated in 0x1F8000A4
 * which is part of the PSX D-Cache area.
 */
extern Entity* g_CurrentEntity;