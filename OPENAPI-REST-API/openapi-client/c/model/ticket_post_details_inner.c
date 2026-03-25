#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ticket_post_details_inner.h"


char* ticket_post_details_inner_creator_ToString(interserver_management_api_ticket_post_details_inner_CREATOR_e creator) {
    char* creatorArray[] =  { "NULL", "User", "Staff" };
    return creatorArray[creator];
}

interserver_management_api_ticket_post_details_inner_CREATOR_e ticket_post_details_inner_creator_FromString(char* creator){
    int stringToReturn = 0;
    char *creatorArray[] =  { "NULL", "User", "Staff" };
    size_t sizeofArray = sizeof(creatorArray) / sizeof(creatorArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(creator, creatorArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static ticket_post_details_inner_t *ticket_post_details_inner_create_internal(
    int *post_id,
    char *date,
    char *contents,
    interserver_management_api_ticket_post_details_inner_CREATOR_e creator,
    char *creator_email,
    char *creator_name,
    int *hasattachments,
    char *attachment_download
    ) {
    ticket_post_details_inner_t *ticket_post_details_inner_local_var = malloc(sizeof(ticket_post_details_inner_t));
    if (!ticket_post_details_inner_local_var) {
        return NULL;
    }
    memset(ticket_post_details_inner_local_var, 0, sizeof(ticket_post_details_inner_t));
    ticket_post_details_inner_local_var->_library_owned = 1;
    ticket_post_details_inner_local_var->post_id = post_id;
    ticket_post_details_inner_local_var->date = date;
    ticket_post_details_inner_local_var->contents = contents;
    ticket_post_details_inner_local_var->creator = creator;
    ticket_post_details_inner_local_var->creator_email = creator_email;
    ticket_post_details_inner_local_var->creator_name = creator_name;
    ticket_post_details_inner_local_var->hasattachments = hasattachments;
    ticket_post_details_inner_local_var->attachment_download = attachment_download;
    return ticket_post_details_inner_local_var;
}

__attribute__((deprecated)) ticket_post_details_inner_t *ticket_post_details_inner_create(
    int *post_id,
    char *date,
    char *contents,
    interserver_management_api_ticket_post_details_inner_CREATOR_e creator,
    char *creator_email,
    char *creator_name,
    int *hasattachments,
    char *attachment_download
    ) {
    int *post_id_copy = NULL;
    if (post_id) {
        post_id_copy = malloc(sizeof(int));
        if (post_id_copy) *post_id_copy = *post_id;
    }
    int *hasattachments_copy = NULL;
    if (hasattachments) {
        hasattachments_copy = malloc(sizeof(int));
        if (hasattachments_copy) *hasattachments_copy = *hasattachments;
    }
    ticket_post_details_inner_t *result = ticket_post_details_inner_create_internal (
        post_id_copy,
        date,
        contents,
        creator,
        creator_email,
        creator_name,
        hasattachments_copy,
        attachment_download
        );
    if (!result) {
        free(post_id_copy);
        free(hasattachments_copy);
    }
    return result;
}

void ticket_post_details_inner_free(ticket_post_details_inner_t *ticket_post_details_inner) {
    if(NULL == ticket_post_details_inner){
        return ;
    }
    if(ticket_post_details_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ticket_post_details_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ticket_post_details_inner->post_id) {
        free(ticket_post_details_inner->post_id);
        ticket_post_details_inner->post_id = NULL;
    }
    if (ticket_post_details_inner->date) {
        free(ticket_post_details_inner->date);
        ticket_post_details_inner->date = NULL;
    }
    if (ticket_post_details_inner->contents) {
        free(ticket_post_details_inner->contents);
        ticket_post_details_inner->contents = NULL;
    }
    if (ticket_post_details_inner->creator_email) {
        free(ticket_post_details_inner->creator_email);
        ticket_post_details_inner->creator_email = NULL;
    }
    if (ticket_post_details_inner->creator_name) {
        free(ticket_post_details_inner->creator_name);
        ticket_post_details_inner->creator_name = NULL;
    }
    if (ticket_post_details_inner->hasattachments) {
        free(ticket_post_details_inner->hasattachments);
        ticket_post_details_inner->hasattachments = NULL;
    }
    if (ticket_post_details_inner->attachment_download) {
        free(ticket_post_details_inner->attachment_download);
        ticket_post_details_inner->attachment_download = NULL;
    }
    free(ticket_post_details_inner);
}

cJSON *ticket_post_details_inner_convertToJSON(ticket_post_details_inner_t *ticket_post_details_inner) {
    cJSON *item = cJSON_CreateObject();

    // ticket_post_details_inner->post_id
    if(ticket_post_details_inner->post_id) {
    if(cJSON_AddNumberToObject(item, "post_id", *ticket_post_details_inner->post_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ticket_post_details_inner->date
    if(ticket_post_details_inner->date) {
    if(cJSON_AddStringToObject(item, "date", ticket_post_details_inner->date) == NULL) {
    goto fail; //String
    }
    }


    // ticket_post_details_inner->contents
    if(ticket_post_details_inner->contents) {
    if(cJSON_AddStringToObject(item, "contents", ticket_post_details_inner->contents) == NULL) {
    goto fail; //String
    }
    }


    // ticket_post_details_inner->creator
    if(ticket_post_details_inner->creator != interserver_management_api_ticket_post_details_inner_CREATOR_NULL) {
    if(cJSON_AddStringToObject(item, "creator", ticket_post_details_inner_creator_ToString(ticket_post_details_inner->creator)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ticket_post_details_inner->creator_email
    if(ticket_post_details_inner->creator_email) {
    if(cJSON_AddStringToObject(item, "creator_email", ticket_post_details_inner->creator_email) == NULL) {
    goto fail; //String
    }
    }


    // ticket_post_details_inner->creator_name
    if(ticket_post_details_inner->creator_name) {
    if(cJSON_AddStringToObject(item, "creator_name", ticket_post_details_inner->creator_name) == NULL) {
    goto fail; //String
    }
    }


    // ticket_post_details_inner->hasattachments
    if(ticket_post_details_inner->hasattachments) {
    if(cJSON_AddNumberToObject(item, "hasattachments", *ticket_post_details_inner->hasattachments) == NULL) {
    goto fail; //Numeric
    }
    }


    // ticket_post_details_inner->attachment_download
    if(ticket_post_details_inner->attachment_download) {
    if(cJSON_AddStringToObject(item, "attachment_download", ticket_post_details_inner->attachment_download) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ticket_post_details_inner_t *ticket_post_details_inner_parseFromJSON(cJSON *ticket_post_details_innerJSON){

    ticket_post_details_inner_t *ticket_post_details_inner_local_var = NULL;

    // define the local variable for ticket_post_details_inner->post_id
    int *post_id_local_var = NULL;

    char *date_local_str = NULL;

    char *contents_local_str = NULL;

    char *creator_email_local_str = NULL;

    char *creator_name_local_str = NULL;

    // define the local variable for ticket_post_details_inner->hasattachments
    int *hasattachments_local_var = NULL;

    char *attachment_download_local_str = NULL;

    // ticket_post_details_inner->post_id
    cJSON *post_id = cJSON_GetObjectItemCaseSensitive(ticket_post_details_innerJSON, "post_id");
    if (cJSON_IsNull(post_id)) {
        post_id = NULL;
    }
    if (post_id) { 
    if(!cJSON_IsNumber(post_id))
    {
    goto end; //Numeric
    }
    post_id_local_var = malloc(sizeof(int));
    if(!post_id_local_var)
    {
        goto end;
    }
    *post_id_local_var = post_id->valuedouble;
    }

    // ticket_post_details_inner->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(ticket_post_details_innerJSON, "date");
    if (cJSON_IsNull(date)) {
        date = NULL;
    }
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //String
    }
    }

    // ticket_post_details_inner->contents
    cJSON *contents = cJSON_GetObjectItemCaseSensitive(ticket_post_details_innerJSON, "contents");
    if (cJSON_IsNull(contents)) {
        contents = NULL;
    }
    if (contents) { 
    if(!cJSON_IsString(contents) && !cJSON_IsNull(contents))
    {
    goto end; //String
    }
    }

    // ticket_post_details_inner->creator
    cJSON *creator = cJSON_GetObjectItemCaseSensitive(ticket_post_details_innerJSON, "creator");
    if (cJSON_IsNull(creator)) {
        creator = NULL;
    }
    interserver_management_api_ticket_post_details_inner_CREATOR_e creatorVariable;
    if (creator) { 
    if(!cJSON_IsString(creator))
    {
    goto end; //Enum
    }
    creatorVariable = ticket_post_details_inner_creator_FromString(creator->valuestring);
    }

    // ticket_post_details_inner->creator_email
    cJSON *creator_email = cJSON_GetObjectItemCaseSensitive(ticket_post_details_innerJSON, "creator_email");
    if (cJSON_IsNull(creator_email)) {
        creator_email = NULL;
    }
    if (creator_email) { 
    if(!cJSON_IsString(creator_email) && !cJSON_IsNull(creator_email))
    {
    goto end; //String
    }
    }

    // ticket_post_details_inner->creator_name
    cJSON *creator_name = cJSON_GetObjectItemCaseSensitive(ticket_post_details_innerJSON, "creator_name");
    if (cJSON_IsNull(creator_name)) {
        creator_name = NULL;
    }
    if (creator_name) { 
    if(!cJSON_IsString(creator_name) && !cJSON_IsNull(creator_name))
    {
    goto end; //String
    }
    }

    // ticket_post_details_inner->hasattachments
    cJSON *hasattachments = cJSON_GetObjectItemCaseSensitive(ticket_post_details_innerJSON, "hasattachments");
    if (cJSON_IsNull(hasattachments)) {
        hasattachments = NULL;
    }
    if (hasattachments) { 
    if(!cJSON_IsNumber(hasattachments))
    {
    goto end; //Numeric
    }
    hasattachments_local_var = malloc(sizeof(int));
    if(!hasattachments_local_var)
    {
        goto end;
    }
    *hasattachments_local_var = hasattachments->valuedouble;
    }

    // ticket_post_details_inner->attachment_download
    cJSON *attachment_download = cJSON_GetObjectItemCaseSensitive(ticket_post_details_innerJSON, "attachment_download");
    if (cJSON_IsNull(attachment_download)) {
        attachment_download = NULL;
    }
    if (attachment_download) { 
    if(!cJSON_IsString(attachment_download) && !cJSON_IsNull(attachment_download))
    {
    goto end; //String
    }
    }


    if (date && !cJSON_IsNull(date)) date_local_str = strdup(date->valuestring);
    if (contents && !cJSON_IsNull(contents)) contents_local_str = strdup(contents->valuestring);
    if (creator_email && !cJSON_IsNull(creator_email)) creator_email_local_str = strdup(creator_email->valuestring);
    if (creator_name && !cJSON_IsNull(creator_name)) creator_name_local_str = strdup(creator_name->valuestring);
    if (attachment_download && !cJSON_IsNull(attachment_download)) attachment_download_local_str = strdup(attachment_download->valuestring);

    ticket_post_details_inner_local_var = ticket_post_details_inner_create_internal (
        post_id_local_var,
        date_local_str,
        contents_local_str,
        creator ? creatorVariable : interserver_management_api_ticket_post_details_inner_CREATOR_NULL,
        creator_email_local_str,
        creator_name_local_str,
        hasattachments_local_var,
        attachment_download_local_str
        );

    if (!ticket_post_details_inner_local_var) {
        goto end;
    }

    return ticket_post_details_inner_local_var;
end:
    if (post_id_local_var) {
        free(post_id_local_var);
        post_id_local_var = NULL;
    }
    if (date_local_str) {
        free(date_local_str);
        date_local_str = NULL;
    }
    if (contents_local_str) {
        free(contents_local_str);
        contents_local_str = NULL;
    }
    if (creator_email_local_str) {
        free(creator_email_local_str);
        creator_email_local_str = NULL;
    }
    if (creator_name_local_str) {
        free(creator_name_local_str);
        creator_name_local_str = NULL;
    }
    if (hasattachments_local_var) {
        free(hasattachments_local_var);
        hasattachments_local_var = NULL;
    }
    if (attachment_download_local_str) {
        free(attachment_download_local_str);
        attachment_download_local_str = NULL;
    }
    return NULL;

}
