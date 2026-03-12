/*
 * mail_stats_type_volume.h
 *
 * 
 */

#ifndef _mail_stats_type_volume_H_
#define _mail_stats_type_volume_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_stats_type_volume_t mail_stats_type_volume_t;

#include "mail_stats_type_volume_from.h"
#include "mail_stats_type_volume_ip.h"
#include "mail_stats_type_volume_to.h"



typedef struct mail_stats_type_volume_t {
    struct mail_stats_type_volume_to_t *to; //model
    struct mail_stats_type_volume_from_t *from; //model
    struct mail_stats_type_volume_ip_t *ip; //model

    int _library_owned; // Is the library responsible for freeing this object?
} mail_stats_type_volume_t;

__attribute__((deprecated)) mail_stats_type_volume_t *mail_stats_type_volume_create(
    mail_stats_type_volume_to_t *to,
    mail_stats_type_volume_from_t *from,
    mail_stats_type_volume_ip_t *ip
);

void mail_stats_type_volume_free(mail_stats_type_volume_t *mail_stats_type_volume);

mail_stats_type_volume_t *mail_stats_type_volume_parseFromJSON(cJSON *mail_stats_type_volumeJSON);

cJSON *mail_stats_type_volume_convertToJSON(mail_stats_type_volume_t *mail_stats_type_volume);

#endif /* _mail_stats_type_volume_H_ */

