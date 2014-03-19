
#ifndef _MEMSMODEL_MODULES_H
#define _MEMSMODEL_MODULES_H   


#include "memsmodel_mems_param.h"


static struct lp_mod *memsmodel_mods[] = {
 &memsmodel_mems_mod 
};

typedef enum {
  MEMSMODEL_MOD_MEMS
} memsmodel_mod_t;

#define MEMSMODEL_MAX_MODULE 0
#endif // _MEMSMODEL_MODULES_H
