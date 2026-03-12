#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_row.h"



static domain_row_t *domain_row_create_internal(
    char *domain_id,
    char *domain_hostname,
    char *domain_expire_date,
    char *cost,
    char *domain_status
    ) {
    domain_row_t *domain_row_local_var = malloc(sizeof(domain_row_t));
    if (!domain_row_local_var) {
        return NULL;
    }
    domain_row_local_var->domain_id = domain_id;
    domain_row_local_var->domain_hostname = domain_hostname;
    domain_row_local_var->domain_expire_date = domain_expire_date;
    domain_row_local_var->cost = cost;
    domain_row_local_var->domain_status = domain_status;

    domain_row_local_var->_library_owned = 1;
    return domain_row_local_var;
}

__attribute__((deprecated)) domain_row_t *domain_row_create(
    char *domain_id,
    char *domain_hostname,
    char *domain_expire_date,
    char *cost,
    char *domain_status
    ) {
    return domain_row_create_internal (
        domain_id,
        domain_hostname,
        domain_expire_date,
        cost,
        domain_status
        );
}

void domain_row_free(domain_row_t *domain_row) {
    if(NULL == domain_row){
        return ;
    }
    if(domain_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_row->domain_id) {
        free(domain_row->domain_id);
        domain_row->domain_id = NULL;
    }
    if (domain_row->domain_hostname) {
        free(domain_row->domain_hostname);
        domain_row->domain_hostname = NULL;
    }
    if (domain_row->domain_expire_date) {
        free(domain_row->domain_expire_date);
        domain_row->domain_expire_date = NULL;
    }
    if (domain_row->cost) {
        free(domain_row->cost);
        domain_row->cost = NULL;
    }
    if (domain_row->domain_status) {
        free(domain_row->domain_status);
        domain_row->domain_status = NULL;
    }
    free(domain_row);
}

cJSON *domain_row_convertToJSON(domain_row_t *domain_row) {
    cJSON *item = cJSON_CreateObject();

    // domain_row->domain_id
    if(domain_row->domain_id) {
    if(cJSON_AddStringToObject(item, "domain_id", domain_row->domain_id) == NULL) {
    goto fail; //String
    }
    }


    // domain_row->domain_hostname
    if(domain_row->domain_hostname) {
    if(cJSON_AddStringToObject(item, "domain_hostname", domain_row->domain_hostname) == NULL) {
    goto fail; //String
    }
    }


    // domain_row->domain_expire_date
    if(domain_row->domain_expire_date) {
    if(cJSON_AddStringToObject(item, "domain_expire_date", domain_row->domain_expire_date) == NULL) {
    goto fail; //String
    }
    }


    // domain_row->cost
    if(domain_row->cost) {
    if(cJSON_AddStringToObject(item, "cost", domain_row->cost) == NULL) {
    goto fail; //String
    }
    }


    // domain_row->domain_status
    if(domain_row->domain_status) {
    if(cJSON_AddStringToObject(item, "domain_status", domain_row->domain_status) == NULL) {
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

domain_row_t *domain_row_parseFromJSON(cJSON *domain_rowJSON){

    domain_row_t *domain_row_local_var = NULL;

    // domain_row->domain_id
    cJSON *domain_id = cJSON_GetObjectItemCaseSensitive(domain_rowJSON, "domain_id");
    if (cJSON_IsNull(domain_id)) {
        domain_id = NULL;
    }
    if (domain_id) { 
    if(!cJSON_IsString(domain_id) && !cJSON_IsNull(domain_id))
    {
    goto end; //String
    }
    }

    // domain_row->domain_hostname
    cJSON *domain_hostname = cJSON_GetObjectItemCaseSensitive(domain_rowJSON, "domain_hostname");
    if (cJSON_IsNull(domain_hostname)) {
        domain_hostname = NULL;
    }
    if (domain_hostname) { 
    if(!cJSON_IsString(domain_hostname) && !cJSON_IsNull(domain_hostname))
    {
    goto end; //String
    }
    }

    // domain_row->domain_expire_date
    cJSON *domain_expire_date = cJSON_GetObjectItemCaseSensitive(domain_rowJSON, "domain_expire_date");
    if (cJSON_IsNull(domain_expire_date)) {
        domain_expire_date = NULL;
    }
    if (domain_expire_date) { 
    if(!cJSON_IsString(domain_expire_date) && !cJSON_IsNull(domain_expire_date))
    {
    goto end; //String
    }
    }

    // domain_row->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(domain_rowJSON, "cost");
    if (cJSON_IsNull(cost)) {
        cost = NULL;
    }
    if (cost) { 
    if(!cJSON_IsString(cost) && !cJSON_IsNull(cost))
    {
    goto end; //String
    }
    }

    // domain_row->domain_status
    cJSON *domain_status = cJSON_GetObjectItemCaseSensitive(domain_rowJSON, "domain_status");
    if (cJSON_IsNull(domain_status)) {
        domain_status = NULL;
    }
    if (domain_status) { 
    if(!cJSON_IsString(domain_status) && !cJSON_IsNull(domain_status))
    {
    goto end; //String
    }
    }


    domain_row_local_var = domain_row_create_internal (
        domain_id && !cJSON_IsNull(domain_id) ? strdup(domain_id->valuestring) : NULL,
        domain_hostname && !cJSON_IsNull(domain_hostname) ? strdup(domain_hostname->valuestring) : NULL,
        domain_expire_date && !cJSON_IsNull(domain_expire_date) ? strdup(domain_expire_date->valuestring) : NULL,
        cost && !cJSON_IsNull(cost) ? strdup(cost->valuestring) : NULL,
        domain_status && !cJSON_IsNull(domain_status) ? strdup(domain_status->valuestring) : NULL
        );

    return domain_row_local_var;
end:
    return NULL;

}
