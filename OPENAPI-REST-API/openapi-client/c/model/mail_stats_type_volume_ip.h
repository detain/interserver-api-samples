/*
 * mail_stats_type_volume_ip.h
 *
 * 
 */

#ifndef _mail_stats_type_volume_ip_H_
#define _mail_stats_type_volume_ip_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_stats_type_volume_ip_t mail_stats_type_volume_ip_t;




typedef struct mail_stats_type_volume_ip_t {
    int _1_1_1_1; //numeric
    int _2_2_2_2; //numeric
    int _3_3_3_3; //numeric
    int _4_4_4_4; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} mail_stats_type_volume_ip_t;

__attribute__((deprecated)) mail_stats_type_volume_ip_t *mail_stats_type_volume_ip_create(
    int _1_1_1_1,
    int _2_2_2_2,
    int _3_3_3_3,
    int _4_4_4_4
);

void mail_stats_type_volume_ip_free(mail_stats_type_volume_ip_t *mail_stats_type_volume_ip);

mail_stats_type_volume_ip_t *mail_stats_type_volume_ip_parseFromJSON(cJSON *mail_stats_type_volume_ipJSON);

cJSON *mail_stats_type_volume_ip_convertToJSON(mail_stats_type_volume_ip_t *mail_stats_type_volume_ip);

#endif /* _mail_stats_type_volume_ip_H_ */

