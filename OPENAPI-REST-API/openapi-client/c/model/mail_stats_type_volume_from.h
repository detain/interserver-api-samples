/*
 * mail_stats_type_volume_from.h
 *
 * 
 */

#ifndef _mail_stats_type_volume_from_H_
#define _mail_stats_type_volume_from_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_stats_type_volume_from_t mail_stats_type_volume_from_t;




typedef struct mail_stats_type_volume_from_t {
    int billingsomedomain_com; //numeric
    int salessomedomain_com; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} mail_stats_type_volume_from_t;

__attribute__((deprecated)) mail_stats_type_volume_from_t *mail_stats_type_volume_from_create(
    int billingsomedomain_com,
    int salessomedomain_com
);

void mail_stats_type_volume_from_free(mail_stats_type_volume_from_t *mail_stats_type_volume_from);

mail_stats_type_volume_from_t *mail_stats_type_volume_from_parseFromJSON(cJSON *mail_stats_type_volume_fromJSON);

cJSON *mail_stats_type_volume_from_convertToJSON(mail_stats_type_volume_from_t *mail_stats_type_volume_from);

#endif /* _mail_stats_type_volume_from_H_ */

