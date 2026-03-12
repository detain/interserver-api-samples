/*
 * home_details.h
 *
 * Users details.
 */

#ifndef _home_details_H_
#define _home_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_details_t home_details_t;

#include "home_details_modules.h"



typedef struct home_details_t {
    struct home_details_modules_t *modules; //model

    int _library_owned; // Is the library responsible for freeing this object?
} home_details_t;

__attribute__((deprecated)) home_details_t *home_details_create(
    home_details_modules_t *modules
);

void home_details_free(home_details_t *home_details);

home_details_t *home_details_parseFromJSON(cJSON *home_detailsJSON);

cJSON *home_details_convertToJSON(home_details_t *home_details);

#endif /* _home_details_H_ */

