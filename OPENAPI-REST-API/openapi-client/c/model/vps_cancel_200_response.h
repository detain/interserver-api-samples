/*
 * vps_cancel_200_response.h
 *
 * 
 */

#ifndef _vps_cancel_200_response_H_
#define _vps_cancel_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_cancel_200_response_t vps_cancel_200_response_t;




typedef struct vps_cancel_200_response_t {
    int success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_cancel_200_response_t;

__attribute__((deprecated)) vps_cancel_200_response_t *vps_cancel_200_response_create(
    int success,
    char *text
);

void vps_cancel_200_response_free(vps_cancel_200_response_t *vps_cancel_200_response);

vps_cancel_200_response_t *vps_cancel_200_response_parseFromJSON(cJSON *vps_cancel_200_responseJSON);

cJSON *vps_cancel_200_response_convertToJSON(vps_cancel_200_response_t *vps_cancel_200_response);

#endif /* _vps_cancel_200_response_H_ */

