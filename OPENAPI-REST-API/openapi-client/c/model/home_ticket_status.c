#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_ticket_status.h"



static home_ticket_status_t *home_ticket_status_create_internal(
    int open,
    int on_hold
    ) {
    home_ticket_status_t *home_ticket_status_local_var = malloc(sizeof(home_ticket_status_t));
    if (!home_ticket_status_local_var) {
        return NULL;
    }
    home_ticket_status_local_var->open = open;
    home_ticket_status_local_var->on_hold = on_hold;

    home_ticket_status_local_var->_library_owned = 1;
    return home_ticket_status_local_var;
}

__attribute__((deprecated)) home_ticket_status_t *home_ticket_status_create(
    int open,
    int on_hold
    ) {
    return home_ticket_status_create_internal (
        open,
        on_hold
        );
}

void home_ticket_status_free(home_ticket_status_t *home_ticket_status) {
    if(NULL == home_ticket_status){
        return ;
    }
    if(home_ticket_status->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_ticket_status_free");
        return ;
    }
    listEntry_t *listEntry;
    free(home_ticket_status);
}

cJSON *home_ticket_status_convertToJSON(home_ticket_status_t *home_ticket_status) {
    cJSON *item = cJSON_CreateObject();

    // home_ticket_status->open
    if(home_ticket_status->open) {
    if(cJSON_AddNumberToObject(item, "Open", home_ticket_status->open) == NULL) {
    goto fail; //Numeric
    }
    }


    // home_ticket_status->on_hold
    if(home_ticket_status->on_hold) {
    if(cJSON_AddNumberToObject(item, "On Hold", home_ticket_status->on_hold) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

home_ticket_status_t *home_ticket_status_parseFromJSON(cJSON *home_ticket_statusJSON){

    home_ticket_status_t *home_ticket_status_local_var = NULL;

    // home_ticket_status->open
    cJSON *open = cJSON_GetObjectItemCaseSensitive(home_ticket_statusJSON, "Open");
    if (cJSON_IsNull(open)) {
        open = NULL;
    }
    if (open) { 
    if(!cJSON_IsNumber(open))
    {
    goto end; //Numeric
    }
    }

    // home_ticket_status->on_hold
    cJSON *on_hold = cJSON_GetObjectItemCaseSensitive(home_ticket_statusJSON, "On Hold");
    if (cJSON_IsNull(on_hold)) {
        on_hold = NULL;
    }
    if (on_hold) { 
    if(!cJSON_IsNumber(on_hold))
    {
    goto end; //Numeric
    }
    }


    home_ticket_status_local_var = home_ticket_status_create_internal (
        open ? open->valuedouble : 0,
        on_hold ? on_hold->valuedouble : 0
        );

    return home_ticket_status_local_var;
end:
    return NULL;

}
