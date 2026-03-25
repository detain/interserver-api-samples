#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tickets_count_array.h"



static tickets_count_array_t *tickets_count_array_create_internal(
    int *open,
    int *on_hold,
    int *closed
    ) {
    tickets_count_array_t *tickets_count_array_local_var = malloc(sizeof(tickets_count_array_t));
    if (!tickets_count_array_local_var) {
        return NULL;
    }
    memset(tickets_count_array_local_var, 0, sizeof(tickets_count_array_t));
    tickets_count_array_local_var->_library_owned = 1;
    tickets_count_array_local_var->open = open;
    tickets_count_array_local_var->on_hold = on_hold;
    tickets_count_array_local_var->closed = closed;
    return tickets_count_array_local_var;
}

__attribute__((deprecated)) tickets_count_array_t *tickets_count_array_create(
    int *open,
    int *on_hold,
    int *closed
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
    int *closed_copy = NULL;
    if (closed) {
        closed_copy = malloc(sizeof(int));
        if (closed_copy) *closed_copy = *closed;
    }
    tickets_count_array_t *result = tickets_count_array_create_internal (
        open_copy,
        on_hold_copy,
        closed_copy
        );
    if (!result) {
        free(open_copy);
        free(on_hold_copy);
        free(closed_copy);
    }
    return result;
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
    if (tickets_count_array->open) {
        free(tickets_count_array->open);
        tickets_count_array->open = NULL;
    }
    if (tickets_count_array->on_hold) {
        free(tickets_count_array->on_hold);
        tickets_count_array->on_hold = NULL;
    }
    if (tickets_count_array->closed) {
        free(tickets_count_array->closed);
        tickets_count_array->closed = NULL;
    }
    free(tickets_count_array);
}

cJSON *tickets_count_array_convertToJSON(tickets_count_array_t *tickets_count_array) {
    cJSON *item = cJSON_CreateObject();

    // tickets_count_array->open
    if(tickets_count_array->open) {
    if(cJSON_AddNumberToObject(item, "Open", *tickets_count_array->open) == NULL) {
    goto fail; //Numeric
    }
    }


    // tickets_count_array->on_hold
    if(tickets_count_array->on_hold) {
    if(cJSON_AddNumberToObject(item, "On Hold", *tickets_count_array->on_hold) == NULL) {
    goto fail; //Numeric
    }
    }


    // tickets_count_array->closed
    if(tickets_count_array->closed) {
    if(cJSON_AddNumberToObject(item, "Closed", *tickets_count_array->closed) == NULL) {
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

    // define the local variable for tickets_count_array->open
    int *open_local_var = NULL;

    // define the local variable for tickets_count_array->on_hold
    int *on_hold_local_var = NULL;

    // define the local variable for tickets_count_array->closed
    int *closed_local_var = NULL;

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
    open_local_var = malloc(sizeof(int));
    if(!open_local_var)
    {
        goto end;
    }
    *open_local_var = open->valuedouble;
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
    on_hold_local_var = malloc(sizeof(int));
    if(!on_hold_local_var)
    {
        goto end;
    }
    *on_hold_local_var = on_hold->valuedouble;
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
    closed_local_var = malloc(sizeof(int));
    if(!closed_local_var)
    {
        goto end;
    }
    *closed_local_var = closed->valuedouble;
    }



    tickets_count_array_local_var = tickets_count_array_create_internal (
        open_local_var,
        on_hold_local_var,
        closed_local_var
        );

    if (!tickets_count_array_local_var) {
        goto end;
    }

    return tickets_count_array_local_var;
end:
    if (open_local_var) {
        free(open_local_var);
        open_local_var = NULL;
    }
    if (on_hold_local_var) {
        free(on_hold_local_var);
        on_hold_local_var = NULL;
    }
    if (closed_local_var) {
        free(closed_local_var);
        closed_local_var = NULL;
    }
    return NULL;

}
