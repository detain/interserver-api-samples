/*
 * website_service_master.h
 *
 * 
 */

#ifndef _website_service_master_H_
#define _website_service_master_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_service_master_t website_service_master_t;




typedef struct website_service_master_t {
    char *website_id; // string
    char *website_name; // string
    char *website_ip; // string
    char *website_type; // string
    char *website_available; // string
    char *website_hdsize; // string
    char *website_hdfree; // string
    char *website_load; // string
    char *website_last_update; // string
    char *website_max_sites; // string
    char *website_order; // string
    char *website_partitions; // string
    char *website_dns1; // string
    char *website_dns2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} website_service_master_t;

__attribute__((deprecated)) website_service_master_t *website_service_master_create(
    char *website_id,
    char *website_name,
    char *website_ip,
    char *website_type,
    char *website_available,
    char *website_hdsize,
    char *website_hdfree,
    char *website_load,
    char *website_last_update,
    char *website_max_sites,
    char *website_order,
    char *website_partitions,
    char *website_dns1,
    char *website_dns2
);

void website_service_master_free(website_service_master_t *website_service_master);

website_service_master_t *website_service_master_parseFromJSON(cJSON *website_service_masterJSON);

cJSON *website_service_master_convertToJSON(website_service_master_t *website_service_master);

#endif /* _website_service_master_H_ */

