/*
 * mail_stats_type_volume_to.h
 *
 * 
 */

#ifndef _mail_stats_type_volume_to_H_
#define _mail_stats_type_volume_to_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_stats_type_volume_to_t mail_stats_type_volume_to_t;




typedef struct mail_stats_type_volume_to_t {
    int clientdomain_com; //numeric
    int usersite_net; //numeric
    int salescompany_com; //numeric
    int clientanothersite_com; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} mail_stats_type_volume_to_t;

__attribute__((deprecated)) mail_stats_type_volume_to_t *mail_stats_type_volume_to_create(
    int clientdomain_com,
    int usersite_net,
    int salescompany_com,
    int clientanothersite_com
);

void mail_stats_type_volume_to_free(mail_stats_type_volume_to_t *mail_stats_type_volume_to);

mail_stats_type_volume_to_t *mail_stats_type_volume_to_parseFromJSON(cJSON *mail_stats_type_volume_toJSON);

cJSON *mail_stats_type_volume_to_convertToJSON(mail_stats_type_volume_to_t *mail_stats_type_volume_to);

#endif /* _mail_stats_type_volume_to_H_ */

