/*
 * vps_row.h
 *
 * A result row from the &#x60;Vps&#x60; &#x60;GET&#x60; request.
 */

#ifndef _vps_row_H_
#define _vps_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_row_t vps_row_t;




typedef struct vps_row_t {
    char *vps_id; // string
    char *vps_name; // string
    char *repeat_invoices_cost; // string
    char *vps_hostname; // string
    char *vps_ip; // string
    char *vps_status; // string
    char *services_name; // string
    char *vps_comment; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_row_t;

__attribute__((deprecated)) vps_row_t *vps_row_create(
    char *vps_id,
    char *vps_name,
    char *repeat_invoices_cost,
    char *vps_hostname,
    char *vps_ip,
    char *vps_status,
    char *services_name,
    char *vps_comment
);

void vps_row_free(vps_row_t *vps_row);

vps_row_t *vps_row_parseFromJSON(cJSON *vps_rowJSON);

cJSON *vps_row_convertToJSON(vps_row_t *vps_row);

#endif /* _vps_row_H_ */

