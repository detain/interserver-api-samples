/*
 * view_ticket_response.h
 *
 * Ticket details
 */

#ifndef _view_ticket_response_H_
#define _view_ticket_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct view_ticket_response_t view_ticket_response_t;

#include "ticket_custom_field_details.h"
#include "ticket_details.h"
#include "ticket_post_details.h"



typedef struct view_ticket_response_t {
    int success; //boolean
    struct ticket_details_t *ticket; //model
    struct ticket_custom_field_details_t *ticket_custom_fields; //model
    ticket_post_details_t *ticket_posts; // custom

    int _library_owned; // Is the library responsible for freeing this object?
} view_ticket_response_t;

__attribute__((deprecated)) view_ticket_response_t *view_ticket_response_create(
    int success,
    ticket_details_t *ticket,
    ticket_custom_field_details_t *ticket_custom_fields,
    ticket_post_details_t *ticket_posts
);

void view_ticket_response_free(view_ticket_response_t *view_ticket_response);

view_ticket_response_t *view_ticket_response_parseFromJSON(cJSON *view_ticket_responseJSON);

cJSON *view_ticket_response_convertToJSON(view_ticket_response_t *view_ticket_response);

#endif /* _view_ticket_response_H_ */

