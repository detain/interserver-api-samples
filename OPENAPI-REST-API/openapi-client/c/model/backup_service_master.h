/*
 * backup_service_master.h
 *
 * 
 */

#ifndef _backup_service_master_H_
#define _backup_service_master_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_service_master_t backup_service_master_t;




typedef struct backup_service_master_t {
    int *backup_id; //numeric
    char *backup_name; // string
    char *backup_ip; // string
    int *backup_type; //numeric
    int *backup_hdsize; //numeric
    int *backup_hdfree; //numeric
    char *backup_last_update; // string
    int *backup_available; //numeric
    int *backup_iowait; //numeric
    int *backup_order; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} backup_service_master_t;

__attribute__((deprecated)) backup_service_master_t *backup_service_master_create(
    int *backup_id,
    char *backup_name,
    char *backup_ip,
    int *backup_type,
    int *backup_hdsize,
    int *backup_hdfree,
    char *backup_last_update,
    int *backup_available,
    int *backup_iowait,
    int *backup_order
);

void backup_service_master_free(backup_service_master_t *backup_service_master);

backup_service_master_t *backup_service_master_parseFromJSON(cJSON *backup_service_masterJSON);

cJSON *backup_service_master_convertToJSON(backup_service_master_t *backup_service_master);

#endif /* _backup_service_master_H_ */

