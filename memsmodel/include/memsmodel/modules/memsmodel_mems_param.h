
#ifndef _MEMSMODEL_MEMS_PARAM_H
#define _MEMSMODEL_MEMS_PARAM_H  

#include <libparam/libparam.h>
#ifdef __cplusplus
extern"C"{
#endif
struct dm_disk_if;

/* prototype for memsmodel_mems param loader function */
struct mems *memsmodel_mems_loadparams(struct lp_block *b, int *num);

typedef enum {
   MEMSMODEL_MEMS_SCHEDULER,
   MEMSMODEL_MEMS_POINTS_IN_PRECOMPUTED_SEEK_CURVE,
   MEMSMODEL_MEMS_SEEK_FUNCTION,
   MEMSMODEL_MEMS_MAX_QUEUE_LENGTH,
   MEMSMODEL_MEMS_BULK_SECTOR_TRANSFER_TIME,
   MEMSMODEL_MEMS_SEGMENT_SIZE_,
   MEMSMODEL_MEMS_NUMBER_OF_BUFFER_SEGMENTS,
   MEMSMODEL_MEMS_PRINT_STATS,
   MEMSMODEL_MEMS_COMMAND_OVERHEAD,
   MEMSMODEL_MEMS_NUMBER_OF_SLEDS,
   MEMSMODEL_MEMS_LAYOUT_POLICY,
   MEMSMODEL_MEMS_SLED_MOVEMENT_X,
   MEMSMODEL_MEMS_SLED_MOVEMENT_Y,
   MEMSMODEL_MEMS_BIT_CELL_LENGTH,
   MEMSMODEL_MEMS_TIP_SECTOR_LENGTH,
   MEMSMODEL_MEMS_SERVO_BURST_LENGTH,
   MEMSMODEL_MEMS_TIP_SECTORS_PER_LBN,
   MEMSMODEL_MEMS_NUMBER_OF_USABLE_TIPS,
   MEMSMODEL_MEMS_SIMULTANEOUSLY_ACTIVE_TIPS,
   MEMSMODEL_MEMS_BIDIRECTIONAL_ACCESS,
   MEMSMODEL_MEMS_SLED_ACCELERATION_X,
   MEMSMODEL_MEMS_SLED_ACCELERATION_Y,
   MEMSMODEL_MEMS_SLED_ACCESS_SPEED,
   MEMSMODEL_MEMS_SLED_RESONANT_FREQUENCY,
   MEMSMODEL_MEMS_SETTLING_TIME_CONSTANTS,
   MEMSMODEL_MEMS_SPRING_CONSTANT_FACTOR,
   MEMSMODEL_MEMS_PREFETCH_DEPTH,
   MEMSMODEL_MEMS_TIME_BEFORE_SLED_INACTIVE,
   MEMSMODEL_MEMS_STARTUP_DELAY,
   MEMSMODEL_MEMS_SLED_ACTIVE_POWER,
   MEMSMODEL_MEMS_SLED_INACTIVE_POWER,
   MEMSMODEL_MEMS_TIP_ACCESS_POWER
} memsmodel_mems_param_t;

#define MEMSMODEL_MEMS_MAX_PARAM		MEMSMODEL_MEMS_TIP_ACCESS_POWER
extern void * MEMSMODEL_MEMS_loaders[];
extern lp_paramdep_t MEMSMODEL_MEMS_deps[];


static struct lp_varspec memsmodel_mems_params [] = {
   {"Scheduler", BLOCK, 1 },
   {"Points in precomputed seek curve", I, 1 },
   {"Seek function", I, 1 },
   {"Max queue length", I, 1 },
   {"Bulk sector transfer time", D, 1 },
   {"Segment size (in blks)", I, 1 },
   {"Number of buffer segments", I, 1 },
   {"Print stats", I, 1 },
   {"Command overhead", D, 1 },
   {"Number of sleds", I, 1 },
   {"Layout policy", I, 1 },
   {"Sled movement X", I, 1 },
   {"Sled movement Y", I, 1 },
   {"Bit cell length", I, 1 },
   {"Tip sector length", I, 1 },
   {"Servo burst length", I, 1 },
   {"Tip sectors per lbn", I, 1 },
   {"Number of usable tips", I, 1 },
   {"Simultaneously active tips", I, 1 },
   {"Bidirectional access", I, 1 },
   {"Sled acceleration X", D, 1 },
   {"Sled acceleration Y", D, 1 },
   {"Sled access speed", I, 1 },
   {"Sled resonant frequency", I, 1 },
   {"Settling time constants", D, 1 },
   {"Spring constant factor", D, 1 },
   {"Prefetch depth", I, 1 },
   {"Time before sled inactive", D, 1 },
   {"Startup delay", D, 1 },
   {"Sled active power", D, 1 },
   {"Sled inactive power", D, 1 },
   {"Tip access power", D, 1 },
   {0,0,0}
};
#define MEMSMODEL_MEMS_MAX 32
static struct lp_mod memsmodel_mems_mod = { "memsmodel_mems", memsmodel_mems_params, MEMSMODEL_MEMS_MAX, (lp_modloader_t)memsmodel_mems_loadparams,  0, 0, MEMSMODEL_MEMS_loaders, MEMSMODEL_MEMS_deps };


#ifdef __cplusplus
}
#endif
#endif // _MEMSMODEL_MEMS_PARAM_H
