#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "post_website_migration_200_response.h"



static post_website_migration_200_response_t *post_website_migration_200_response_create_internal(
    char *text,
    int ticket
    ) {
    post_website_migration_200_response_t *post_website_migration_200_response_local_var = malloc(sizeof(post_website_migration_200_response_t));
    if (!post_website_migration_200_response_local_var) {
        return NULL;
    }
    post_website_migration_200_response_local_var->text = text;
    post_website_migration_200_response_local_var->ticket = ticket;

    post_website_migration_200_response_local_var->_library_owned = 1;
    return post_website_migration_200_response_local_var;
}

__attribute__((deprecated)) post_website_migration_200_response_t *post_website_migration_200_response_create(
    char *text,
    int ticket
    ) {
    return post_website_migration_200_response_create_internal (
        text,
        ticket
        );
}

void post_website_migration_200_response_free(post_website_migration_200_response_t *post_website_migration_200_response) {
    if(NULL == post_website_migration_200_response){
        return ;
    }
    if(post_website_migration_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "post_website_migration_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (post_website_migration_200_response->text) {
        free(post_website_migration_200_response->text);
        post_website_migration_200_response->text = NULL;
    }
    free(post_website_migration_200_response);
}

cJSON *post_website_migration_200_response_convertToJSON(post_website_migration_200_response_t *post_website_migration_200_response) {
    cJSON *item = cJSON_CreateObject();

    // post_website_migration_200_response->text
    if(post_website_migration_200_response->text) {
    if(cJSON_AddStringToObject(item, "text", post_website_migration_200_response->text) == NULL) {
    goto fail; //String
    }
    }


    // post_website_migration_200_response->ticket
    if(post_website_migration_200_response->ticket) {
    if(cJSON_AddNumberToObject(item, "ticket", post_website_migration_200_response->ticket) == NULL) {
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

post_website_migration_200_response_t *post_website_migration_200_response_parseFromJSON(cJSON *post_website_migration_200_responseJSON){

    post_website_migration_200_response_t *post_website_migration_200_response_local_var = NULL;

    // post_website_migration_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(post_website_migration_200_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // post_website_migration_200_response->ticket
    cJSON *ticket = cJSON_GetObjectItemCaseSensitive(post_website_migration_200_responseJSON, "ticket");
    if (cJSON_IsNull(ticket)) {
        ticket = NULL;
    }
    if (ticket) { 
    if(!cJSON_IsNumber(ticket))
    {
    goto end; //Numeric
    }
    }


    post_website_migration_200_response_local_var = post_website_migration_200_response_create_internal (
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL,
        ticket ? ticket->valuedouble : 0
        );

    return post_website_migration_200_response_local_var;
end:
    return NULL;

}
