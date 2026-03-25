#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "view_ticket_response.h"



static view_ticket_response_t *view_ticket_response_create_internal(
    int *success,
    ticket_details_t *ticket,
    ticket_custom_field_details_t *ticket_custom_fields,
    ticket_post_details_t *ticket_posts
    ) {
    view_ticket_response_t *view_ticket_response_local_var = malloc(sizeof(view_ticket_response_t));
    if (!view_ticket_response_local_var) {
        return NULL;
    }
    memset(view_ticket_response_local_var, 0, sizeof(view_ticket_response_t));
    view_ticket_response_local_var->_library_owned = 1;
    view_ticket_response_local_var->success = success;
    view_ticket_response_local_var->ticket = ticket;
    view_ticket_response_local_var->ticket_custom_fields = ticket_custom_fields;
    view_ticket_response_local_var->ticket_posts = ticket_posts;
    return view_ticket_response_local_var;
}

__attribute__((deprecated)) view_ticket_response_t *view_ticket_response_create(
    int *success,
    ticket_details_t *ticket,
    ticket_custom_field_details_t *ticket_custom_fields,
    ticket_post_details_t *ticket_posts
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    view_ticket_response_t *result = view_ticket_response_create_internal (
        success_copy,
        ticket,
        ticket_custom_fields,
        ticket_posts
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void view_ticket_response_free(view_ticket_response_t *view_ticket_response) {
    if(NULL == view_ticket_response){
        return ;
    }
    if(view_ticket_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "view_ticket_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (view_ticket_response->success) {
        free(view_ticket_response->success);
        view_ticket_response->success = NULL;
    }
    if (view_ticket_response->ticket) {
        ticket_details_free(view_ticket_response->ticket);
        view_ticket_response->ticket = NULL;
    }
    if (view_ticket_response->ticket_custom_fields) {
        ticket_custom_field_details_free(view_ticket_response->ticket_custom_fields);
        view_ticket_response->ticket_custom_fields = NULL;
    }
    if (view_ticket_response->ticket_posts) {
        ticket_post_details_free(view_ticket_response->ticket_posts);
        view_ticket_response->ticket_posts = NULL;
    }
    free(view_ticket_response);
}

cJSON *view_ticket_response_convertToJSON(view_ticket_response_t *view_ticket_response) {
    cJSON *item = cJSON_CreateObject();

    // view_ticket_response->success
    if (!view_ticket_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", *view_ticket_response->success) == NULL) {
    goto fail; //Bool
    }


    // view_ticket_response->ticket
    if (!view_ticket_response->ticket) {
        goto fail;
    }
    cJSON *ticket_local_JSON = ticket_details_convertToJSON(view_ticket_response->ticket);
    if(ticket_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ticket", ticket_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // view_ticket_response->ticket_custom_fields
    if(view_ticket_response->ticket_custom_fields) {
    cJSON *ticket_custom_fields_local_JSON = ticket_custom_field_details_convertToJSON(view_ticket_response->ticket_custom_fields);
    if(ticket_custom_fields_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ticket_custom_fields", ticket_custom_fields_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // view_ticket_response->ticket_posts
    if(view_ticket_response->ticket_posts) {
    cJSON *ticket_posts_local_JSON = ticket_post_details_convertToJSON(view_ticket_response->ticket_posts);
    if(ticket_posts_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "ticket_posts", ticket_posts_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

view_ticket_response_t *view_ticket_response_parseFromJSON(cJSON *view_ticket_responseJSON){

    view_ticket_response_t *view_ticket_response_local_var = NULL;

    // define the local variable for view_ticket_response->success
    int *success_local_var = NULL;

    // define the local variable for view_ticket_response->ticket
    ticket_details_t *ticket_local_nonprim = NULL;

    // define the local variable for view_ticket_response->ticket_custom_fields
    ticket_custom_field_details_t *ticket_custom_fields_local_nonprim = NULL;

    // define the local variable for view_ticket_response->ticket_posts
    ticket_post_details_t *ticket_posts_local_nonprim = NULL;

    // view_ticket_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(view_ticket_responseJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (!success) {
        goto end;
    }

    
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    success_local_var = malloc(sizeof(int));
    if(!success_local_var)
    {
        goto end;
    }
    *success_local_var = success->valueint;

    // view_ticket_response->ticket
    cJSON *ticket = cJSON_GetObjectItemCaseSensitive(view_ticket_responseJSON, "ticket");
    if (cJSON_IsNull(ticket)) {
        ticket = NULL;
    }
    if (!ticket) {
        goto end;
    }

    
    ticket_local_nonprim = ticket_details_parseFromJSON(ticket); //nonprimitive

    // view_ticket_response->ticket_custom_fields
    cJSON *ticket_custom_fields = cJSON_GetObjectItemCaseSensitive(view_ticket_responseJSON, "ticket_custom_fields");
    if (cJSON_IsNull(ticket_custom_fields)) {
        ticket_custom_fields = NULL;
    }
    if (ticket_custom_fields) { 
    ticket_custom_fields_local_nonprim = ticket_custom_field_details_parseFromJSON(ticket_custom_fields); //nonprimitive
    }

    // view_ticket_response->ticket_posts
    cJSON *ticket_posts = cJSON_GetObjectItemCaseSensitive(view_ticket_responseJSON, "ticket_posts");
    if (cJSON_IsNull(ticket_posts)) {
        ticket_posts = NULL;
    }
    if (ticket_posts) { 
    ticket_posts_local_nonprim = ticket_post_details_parseFromJSON(ticket_posts); //custom
    }



    view_ticket_response_local_var = view_ticket_response_create_internal (
        success_local_var,
        ticket_local_nonprim,
        ticket_custom_fields ? ticket_custom_fields_local_nonprim : NULL,
        ticket_posts ? ticket_posts_local_nonprim : NULL
        );

    if (!view_ticket_response_local_var) {
        goto end;
    }

    return view_ticket_response_local_var;
end:
    if (success_local_var) {
        free(success_local_var);
        success_local_var = NULL;
    }
    if (ticket_local_nonprim) {
        ticket_details_free(ticket_local_nonprim);
        ticket_local_nonprim = NULL;
    }
    if (ticket_custom_fields_local_nonprim) {
        ticket_custom_field_details_free(ticket_custom_fields_local_nonprim);
        ticket_custom_fields_local_nonprim = NULL;
    }
    if (ticket_posts_local_nonprim) {
        ticket_post_details_free(ticket_posts_local_nonprim);
        ticket_posts_local_nonprim = NULL;
    }
    return NULL;

}
