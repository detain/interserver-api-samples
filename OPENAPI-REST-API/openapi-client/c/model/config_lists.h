/*
 * config_lists.h
 *
 * All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 */

#ifndef _config_lists_H_
#define _config_lists_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct config_lists_t config_lists_t;

#include "bandwidth.h"
#include "control_panel.h"
#include "cpu.h"
#include "hard_drive.h"
#include "ip_block.h"
#include "memory_option.h"
#include "operating_system.h"
#include "raid_option.h"



typedef struct config_lists_t {
    list_t* cpu_li; //map
    list_t* memory_li; //map
    list_t* hd_li; //map
    list_t* bandwidth_li; //map
    list_t* ips_li; //map
    list_t* os_li; //map
    list_t* cp_li; //map
    list_t *raid_li; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} config_lists_t;

__attribute__((deprecated)) config_lists_t *config_lists_create(
    list_t* cpu_li,
    list_t* memory_li,
    list_t* hd_li,
    list_t* bandwidth_li,
    list_t* ips_li,
    list_t* os_li,
    list_t* cp_li,
    list_t *raid_li
);

void config_lists_free(config_lists_t *config_lists);

config_lists_t *config_lists_parseFromJSON(cJSON *config_listsJSON);

cJSON *config_lists_convertToJSON(config_lists_t *config_lists);

#endif /* _config_lists_H_ */

