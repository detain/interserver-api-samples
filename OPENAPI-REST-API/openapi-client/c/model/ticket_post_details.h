/*
 * ticket_post_details.h
 *
 * Fetches every posts of ticket
 */

#ifndef _ticket_post_details_H_
#define _ticket_post_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ticket_post_details_t ticket_post_details_t;

#include "ticket_post_details_inner.h"



typedef struct ticket_post_details_t {

    int _library_owned; // Is the library responsible for freeing this object?
} ticket_post_details_t;

__attribute__((deprecated)) ticket_post_details_t *ticket_post_details_create(
);

void ticket_post_details_free(ticket_post_details_t *ticket_post_details);

ticket_post_details_t *ticket_post_details_parseFromJSON(cJSON *ticket_post_detailsJSON);

cJSON *ticket_post_details_convertToJSON(ticket_post_details_t *ticket_post_details);

#endif /* _ticket_post_details_H_ */

