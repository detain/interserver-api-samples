#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ticket_post_details.h"



static ticket_post_details_t *ticket_post_details_create_internal(
    ) {
    ticket_post_details_t *ticket_post_details_local_var = malloc(sizeof(ticket_post_details_t));
    if (!ticket_post_details_local_var) {
        return NULL;
    }

    ticket_post_details_local_var->_library_owned = 1;
    return ticket_post_details_local_var;
}

__attribute__((deprecated)) ticket_post_details_t *ticket_post_details_create(
    ) {
    return ticket_post_details_create_internal (
        );
}

void ticket_post_details_free(ticket_post_details_t *ticket_post_details) {
    if(NULL == ticket_post_details){
        return ;
    }
    if(ticket_post_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ticket_post_details_free");
        return ;
    }
    listEntry_t *listEntry;
    free(ticket_post_details);
}

cJSON *ticket_post_details_convertToJSON(ticket_post_details_t *ticket_post_details) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ticket_post_details_t *ticket_post_details_parseFromJSON(cJSON *ticket_post_detailsJSON){

    ticket_post_details_t *ticket_post_details_local_var = NULL;


    ticket_post_details_local_var = ticket_post_details_create_internal (
        );

    return ticket_post_details_local_var;
end:
    return NULL;

}
