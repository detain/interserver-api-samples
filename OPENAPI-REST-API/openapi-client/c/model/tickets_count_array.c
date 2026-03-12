#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tickets_count_array.h"



static tickets_count_array_t *tickets_count_array_create_internal(
    int open,
    int on_hold,
    int closed
    ) {
    tickets_count_array_t *tickets_count_array_local_var = malloc(sizeof(tickets_count_array_t));
    if (!tickets_count_array_local_var) {
        return NULL;
    }
    tickets_count_array_local_var->open = open;
    tickets_count_array_local_var->on_hold = on_hold;
    tickets_count_array_local_var->closed = closed;

    tickets_count_array_local_var->_library_owned = 1;
    return tickets_count_array_local_var;
}

__attribute__((deprecated)) tickets_count_array_t *tickets_count_array_create(
    int open,
    int on_hold,
    int closed
    ) {
    return tickets_count_array_create_internal (
        open,
        on_hold,
        closed
        );
}

void tickets_count_array_free(tickets_count_array_t *tickets_count_array) {
    if(NULL == tickets_count_array){
        return ;
    }
    if(tickets_count_array->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "tickets_count_array_free");
        return ;
    }
    listEntry_t *listEntry;
    free(tickets_count_array);
}

cJSON *tickets_count_array_convertToJSON(tickets_count_array_t *tickets_count_array) {
    cJSON *item = cJSON_CreateObject();

    // tickets_count_array->open
    if(tickets_count_array->open) {
    if(cJSON_AddNumberToObject(item, "Open", tickets_count_array->open) == NULL) {
    goto fail; //Numeric
    }
    }


    // tickets_count_array->on_hold
    if(tickets_count_array->on_hold) {
    if(cJSON_AddNumberToObject(item, "On Hold", tickets_count_array->on_hold) == NULL) {
    goto fail; //Numeric
    }
    }


    // tickets_count_array->closed
    if(tickets_count_array->closed) {
    if(cJSON_AddNumberToObject(item, "Closed", tickets_count_array->closed) == NULL) {
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

tickets_count_array_t *tickets_count_array_parseFromJSON(cJSON *tickets_count_arrayJSON){

    tickets_count_array_t *tickets_count_array_local_var = NULL;

    // tickets_count_array->open
    cJSON *open = cJSON_GetObjectItemCaseSensitive(tickets_count_arrayJSON, "Open");
    if (cJSON_IsNull(open)) {
        open = NULL;
    }
    if (open) { 
    if(!cJSON_IsNumber(open))
    {
    goto end; //Numeric
    }
    }

    // tickets_count_array->on_hold
    cJSON *on_hold = cJSON_GetObjectItemCaseSensitive(tickets_count_arrayJSON, "On Hold");
    if (cJSON_IsNull(on_hold)) {
        on_hold = NULL;
    }
    if (on_hold) { 
    if(!cJSON_IsNumber(on_hold))
    {
    goto end; //Numeric
    }
    }

    // tickets_count_array->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(tickets_count_arrayJSON, "Closed");
    if (cJSON_IsNull(closed)) {
        closed = NULL;
    }
    if (closed) { 
    if(!cJSON_IsNumber(closed))
    {
    goto end; //Numeric
    }
    }


    tickets_count_array_local_var = tickets_count_array_create_internal (
        open ? open->valuedouble : 0,
        on_hold ? on_hold->valuedouble : 0,
        closed ? closed->valuedouble : 0
        );

    return tickets_count_array_local_var;
end:
    return NULL;

}
