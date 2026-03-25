#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_ticket_status.h"



static home_ticket_status_t *home_ticket_status_create_internal(
    int *open,
    int *on_hold
    ) {
    home_ticket_status_t *home_ticket_status_local_var = malloc(sizeof(home_ticket_status_t));
    if (!home_ticket_status_local_var) {
        return NULL;
    }
    memset(home_ticket_status_local_var, 0, sizeof(home_ticket_status_t));
    home_ticket_status_local_var->_library_owned = 1;
    home_ticket_status_local_var->open = open;
    home_ticket_status_local_var->on_hold = on_hold;
    return home_ticket_status_local_var;
}

__attribute__((deprecated)) home_ticket_status_t *home_ticket_status_create(
    int *open,
    int *on_hold
    ) {
    int *open_copy = NULL;
    if (open) {
        open_copy = malloc(sizeof(int));
        if (open_copy) *open_copy = *open;
    }
    int *on_hold_copy = NULL;
    if (on_hold) {
        on_hold_copy = malloc(sizeof(int));
        if (on_hold_copy) *on_hold_copy = *on_hold;
    }
    home_ticket_status_t *result = home_ticket_status_create_internal (
        open_copy,
        on_hold_copy
        );
    if (!result) {
        free(open_copy);
        free(on_hold_copy);
    }
    return result;
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
    if (home_ticket_status->open) {
        free(home_ticket_status->open);
        home_ticket_status->open = NULL;
    }
    if (home_ticket_status->on_hold) {
        free(home_ticket_status->on_hold);
        home_ticket_status->on_hold = NULL;
    }
    free(home_ticket_status);
}

cJSON *home_ticket_status_convertToJSON(home_ticket_status_t *home_ticket_status) {
    cJSON *item = cJSON_CreateObject();

    // home_ticket_status->open
    if(home_ticket_status->open) {
    if(cJSON_AddNumberToObject(item, "Open", *home_ticket_status->open) == NULL) {
    goto fail; //Numeric
    }
    }


    // home_ticket_status->on_hold
    if(home_ticket_status->on_hold) {
    if(cJSON_AddNumberToObject(item, "On Hold", *home_ticket_status->on_hold) == NULL) {
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

    // define the local variable for home_ticket_status->open
    int *open_local_var = NULL;

    // define the local variable for home_ticket_status->on_hold
    int *on_hold_local_var = NULL;

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
    open_local_var = malloc(sizeof(int));
    if(!open_local_var)
    {
        goto end;
    }
    *open_local_var = open->valuedouble;
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
    on_hold_local_var = malloc(sizeof(int));
    if(!on_hold_local_var)
    {
        goto end;
    }
    *on_hold_local_var = on_hold->valuedouble;
    }



    home_ticket_status_local_var = home_ticket_status_create_internal (
        open_local_var,
        on_hold_local_var
        );

    if (!home_ticket_status_local_var) {
        goto end;
    }

    return home_ticket_status_local_var;
end:
    if (open_local_var) {
        free(open_local_var);
        open_local_var = NULL;
    }
    if (on_hold_local_var) {
        free(on_hold_local_var);
        on_hold_local_var = NULL;
    }
    return NULL;

}
