/*
 * websites_order_packages_info.h
 *
 * 
 */

#ifndef _websites_order_packages_info_H_
#define _websites_order_packages_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websites_order_packages_info_t websites_order_packages_info_t;




typedef struct websites_order_packages_info_t {
    char *services_id; // string
    char *services_name; // string
    char *services_cost; // string
    char *services_category; // string
    char *services_buyable; // string
    char *services_type; // string
    char *services_module; // string
    char *services_description; // string
    char *services_field1; // string
    char *services_field2; // string
    char *services_html; // string
    char *services_moreinfo_url; // string
    char *services_hidden; // string

    int _library_owned; // Is the library responsible for freeing this object?
} websites_order_packages_info_t;

__attribute__((deprecated)) websites_order_packages_info_t *websites_order_packages_info_create(
    char *services_id,
    char *services_name,
    char *services_cost,
    char *services_category,
    char *services_buyable,
    char *services_type,
    char *services_module,
    char *services_description,
    char *services_field1,
    char *services_field2,
    char *services_html,
    char *services_moreinfo_url,
    char *services_hidden
);

void websites_order_packages_info_free(websites_order_packages_info_t *websites_order_packages_info);

websites_order_packages_info_t *websites_order_packages_info_parseFromJSON(cJSON *websites_order_packages_infoJSON);

cJSON *websites_order_packages_info_convertToJSON(websites_order_packages_info_t *websites_order_packages_info);

#endif /* _websites_order_packages_info_H_ */

