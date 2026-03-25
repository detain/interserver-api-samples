#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_row.h"



static quickserver_row_t *quickserver_row_create_internal(
    char *qs_id,
    char *qs_name,
    char *cost,
    char *qs_hostname,
    char *qs_status,
    char *qs_comment
    ) {
    quickserver_row_t *quickserver_row_local_var = malloc(sizeof(quickserver_row_t));
    if (!quickserver_row_local_var) {
        return NULL;
    }
    memset(quickserver_row_local_var, 0, sizeof(quickserver_row_t));
    quickserver_row_local_var->_library_owned = 1;
    quickserver_row_local_var->qs_id = qs_id;
    quickserver_row_local_var->qs_name = qs_name;
    quickserver_row_local_var->cost = cost;
    quickserver_row_local_var->qs_hostname = qs_hostname;
    quickserver_row_local_var->qs_status = qs_status;
    quickserver_row_local_var->qs_comment = qs_comment;
    return quickserver_row_local_var;
}

__attribute__((deprecated)) quickserver_row_t *quickserver_row_create(
    char *qs_id,
    char *qs_name,
    char *cost,
    char *qs_hostname,
    char *qs_status,
    char *qs_comment
    ) {
    quickserver_row_t *result = quickserver_row_create_internal (
        qs_id,
        qs_name,
        cost,
        qs_hostname,
        qs_status,
        qs_comment
        );
    if (!result) {
    }
    return result;
}

void quickserver_row_free(quickserver_row_t *quickserver_row) {
    if(NULL == quickserver_row){
        return ;
    }
    if(quickserver_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_row->qs_id) {
        free(quickserver_row->qs_id);
        quickserver_row->qs_id = NULL;
    }
    if (quickserver_row->qs_name) {
        free(quickserver_row->qs_name);
        quickserver_row->qs_name = NULL;
    }
    if (quickserver_row->cost) {
        free(quickserver_row->cost);
        quickserver_row->cost = NULL;
    }
    if (quickserver_row->qs_hostname) {
        free(quickserver_row->qs_hostname);
        quickserver_row->qs_hostname = NULL;
    }
    if (quickserver_row->qs_status) {
        free(quickserver_row->qs_status);
        quickserver_row->qs_status = NULL;
    }
    if (quickserver_row->qs_comment) {
        free(quickserver_row->qs_comment);
        quickserver_row->qs_comment = NULL;
    }
    free(quickserver_row);
}

cJSON *quickserver_row_convertToJSON(quickserver_row_t *quickserver_row) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_row->qs_id
    if (!quickserver_row->qs_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "qs_id", quickserver_row->qs_id) == NULL) {
    goto fail; //String
    }


    // quickserver_row->qs_name
    if (!quickserver_row->qs_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "qs_name", quickserver_row->qs_name) == NULL) {
    goto fail; //String
    }


    // quickserver_row->cost
    if (!quickserver_row->cost) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "cost", quickserver_row->cost) == NULL) {
    goto fail; //String
    }


    // quickserver_row->qs_hostname
    if (!quickserver_row->qs_hostname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "qs_hostname", quickserver_row->qs_hostname) == NULL) {
    goto fail; //String
    }


    // quickserver_row->qs_status
    if (!quickserver_row->qs_status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "qs_status", quickserver_row->qs_status) == NULL) {
    goto fail; //String
    }


    // quickserver_row->qs_comment
    if (!quickserver_row->qs_comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "qs_comment", quickserver_row->qs_comment) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

quickserver_row_t *quickserver_row_parseFromJSON(cJSON *quickserver_rowJSON){

    quickserver_row_t *quickserver_row_local_var = NULL;

    char *qs_id_local_str = NULL;

    char *qs_name_local_str = NULL;

    char *cost_local_str = NULL;

    char *qs_hostname_local_str = NULL;

    char *qs_status_local_str = NULL;

    char *qs_comment_local_str = NULL;

    // quickserver_row->qs_id
    cJSON *qs_id = cJSON_GetObjectItemCaseSensitive(quickserver_rowJSON, "qs_id");
    if (cJSON_IsNull(qs_id)) {
        qs_id = NULL;
    }
    if (!qs_id) {
        goto end;
    }

    
    if(!cJSON_IsString(qs_id))
    {
    goto end; //String
    }

    // quickserver_row->qs_name
    cJSON *qs_name = cJSON_GetObjectItemCaseSensitive(quickserver_rowJSON, "qs_name");
    if (cJSON_IsNull(qs_name)) {
        qs_name = NULL;
    }
    if (!qs_name) {
        goto end;
    }

    
    if(!cJSON_IsString(qs_name))
    {
    goto end; //String
    }

    // quickserver_row->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(quickserver_rowJSON, "cost");
    if (cJSON_IsNull(cost)) {
        cost = NULL;
    }
    if (!cost) {
        goto end;
    }

    
    if(!cJSON_IsString(cost))
    {
    goto end; //String
    }

    // quickserver_row->qs_hostname
    cJSON *qs_hostname = cJSON_GetObjectItemCaseSensitive(quickserver_rowJSON, "qs_hostname");
    if (cJSON_IsNull(qs_hostname)) {
        qs_hostname = NULL;
    }
    if (!qs_hostname) {
        goto end;
    }

    
    if(!cJSON_IsString(qs_hostname))
    {
    goto end; //String
    }

    // quickserver_row->qs_status
    cJSON *qs_status = cJSON_GetObjectItemCaseSensitive(quickserver_rowJSON, "qs_status");
    if (cJSON_IsNull(qs_status)) {
        qs_status = NULL;
    }
    if (!qs_status) {
        goto end;
    }

    
    if(!cJSON_IsString(qs_status))
    {
    goto end; //String
    }

    // quickserver_row->qs_comment
    cJSON *qs_comment = cJSON_GetObjectItemCaseSensitive(quickserver_rowJSON, "qs_comment");
    if (cJSON_IsNull(qs_comment)) {
        qs_comment = NULL;
    }
    if (!qs_comment) {
        goto end;
    }

    
    if(!cJSON_IsString(qs_comment))
    {
    goto end; //String
    }


    if (qs_id && !cJSON_IsNull(qs_id)) qs_id_local_str = strdup(qs_id->valuestring);
    if (qs_name && !cJSON_IsNull(qs_name)) qs_name_local_str = strdup(qs_name->valuestring);
    if (cost && !cJSON_IsNull(cost)) cost_local_str = strdup(cost->valuestring);
    if (qs_hostname && !cJSON_IsNull(qs_hostname)) qs_hostname_local_str = strdup(qs_hostname->valuestring);
    if (qs_status && !cJSON_IsNull(qs_status)) qs_status_local_str = strdup(qs_status->valuestring);
    if (qs_comment && !cJSON_IsNull(qs_comment)) qs_comment_local_str = strdup(qs_comment->valuestring);

    quickserver_row_local_var = quickserver_row_create_internal (
        qs_id_local_str,
        qs_name_local_str,
        cost_local_str,
        qs_hostname_local_str,
        qs_status_local_str,
        qs_comment_local_str
        );

    if (!quickserver_row_local_var) {
        goto end;
    }

    return quickserver_row_local_var;
end:
    if (qs_id_local_str) {
        free(qs_id_local_str);
        qs_id_local_str = NULL;
    }
    if (qs_name_local_str) {
        free(qs_name_local_str);
        qs_name_local_str = NULL;
    }
    if (cost_local_str) {
        free(cost_local_str);
        cost_local_str = NULL;
    }
    if (qs_hostname_local_str) {
        free(qs_hostname_local_str);
        qs_hostname_local_str = NULL;
    }
    if (qs_status_local_str) {
        free(qs_status_local_str);
        qs_status_local_str = NULL;
    }
    if (qs_comment_local_str) {
        free(qs_comment_local_str);
        qs_comment_local_str = NULL;
    }
    return NULL;

}
