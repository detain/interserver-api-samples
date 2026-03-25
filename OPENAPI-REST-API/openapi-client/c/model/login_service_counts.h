/*
 * login_service_counts.h
 *
 * Order counts per module.
 */

#ifndef _login_service_counts_H_
#define _login_service_counts_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct login_service_counts_t login_service_counts_t;




typedef struct login_service_counts_t {
    int *vps; //numeric
    int *websites; //numeric
    int *servers; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} login_service_counts_t;

__attribute__((deprecated)) login_service_counts_t *login_service_counts_create(
    int *vps,
    int *websites,
    int *servers
);

void login_service_counts_free(login_service_counts_t *login_service_counts);

login_service_counts_t *login_service_counts_parseFromJSON(cJSON *login_service_countsJSON);

cJSON *login_service_counts_convertToJSON(login_service_counts_t *login_service_counts);

#endif /* _login_service_counts_H_ */

