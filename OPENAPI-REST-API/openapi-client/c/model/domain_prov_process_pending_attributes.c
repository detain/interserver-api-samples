#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_prov_process_pending_attributes.h"



static domain_prov_process_pending_attributes_t *domain_prov_process_pending_attributes_create_internal(
    char *id,
    char *order_id,
    char *registration_expiration_date,
    char *f_auto_renew
    ) {
    domain_prov_process_pending_attributes_t *domain_prov_process_pending_attributes_local_var = malloc(sizeof(domain_prov_process_pending_attributes_t));
    if (!domain_prov_process_pending_attributes_local_var) {
        return NULL;
    }
    memset(domain_prov_process_pending_attributes_local_var, 0, sizeof(domain_prov_process_pending_attributes_t));
    domain_prov_process_pending_attributes_local_var->_library_owned = 1;
    domain_prov_process_pending_attributes_local_var->id = id;
    domain_prov_process_pending_attributes_local_var->order_id = order_id;
    domain_prov_process_pending_attributes_local_var->registration_expiration_date = registration_expiration_date;
    domain_prov_process_pending_attributes_local_var->f_auto_renew = f_auto_renew;
    return domain_prov_process_pending_attributes_local_var;
}

__attribute__((deprecated)) domain_prov_process_pending_attributes_t *domain_prov_process_pending_attributes_create(
    char *id,
    char *order_id,
    char *registration_expiration_date,
    char *f_auto_renew
    ) {
    domain_prov_process_pending_attributes_t *result = domain_prov_process_pending_attributes_create_internal (
        id,
        order_id,
        registration_expiration_date,
        f_auto_renew
        );
    if (!result) {
    }
    return result;
}

void domain_prov_process_pending_attributes_free(domain_prov_process_pending_attributes_t *domain_prov_process_pending_attributes) {
    if(NULL == domain_prov_process_pending_attributes){
        return ;
    }
    if(domain_prov_process_pending_attributes->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_prov_process_pending_attributes_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_prov_process_pending_attributes->id) {
        free(domain_prov_process_pending_attributes->id);
        domain_prov_process_pending_attributes->id = NULL;
    }
    if (domain_prov_process_pending_attributes->order_id) {
        free(domain_prov_process_pending_attributes->order_id);
        domain_prov_process_pending_attributes->order_id = NULL;
    }
    if (domain_prov_process_pending_attributes->registration_expiration_date) {
        free(domain_prov_process_pending_attributes->registration_expiration_date);
        domain_prov_process_pending_attributes->registration_expiration_date = NULL;
    }
    if (domain_prov_process_pending_attributes->f_auto_renew) {
        free(domain_prov_process_pending_attributes->f_auto_renew);
        domain_prov_process_pending_attributes->f_auto_renew = NULL;
    }
    free(domain_prov_process_pending_attributes);
}

cJSON *domain_prov_process_pending_attributes_convertToJSON(domain_prov_process_pending_attributes_t *domain_prov_process_pending_attributes) {
    cJSON *item = cJSON_CreateObject();

    // domain_prov_process_pending_attributes->id
    if(domain_prov_process_pending_attributes->id) {
    if(cJSON_AddStringToObject(item, "id", domain_prov_process_pending_attributes->id) == NULL) {
    goto fail; //String
    }
    }


    // domain_prov_process_pending_attributes->order_id
    if(domain_prov_process_pending_attributes->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", domain_prov_process_pending_attributes->order_id) == NULL) {
    goto fail; //String
    }
    }


    // domain_prov_process_pending_attributes->registration_expiration_date
    if(domain_prov_process_pending_attributes->registration_expiration_date) {
    if(cJSON_AddStringToObject(item, "registration expiration date", domain_prov_process_pending_attributes->registration_expiration_date) == NULL) {
    goto fail; //String
    }
    }


    // domain_prov_process_pending_attributes->f_auto_renew
    if(domain_prov_process_pending_attributes->f_auto_renew) {
    if(cJSON_AddStringToObject(item, "f_auto_renew", domain_prov_process_pending_attributes->f_auto_renew) == NULL) {
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

domain_prov_process_pending_attributes_t *domain_prov_process_pending_attributes_parseFromJSON(cJSON *domain_prov_process_pending_attributesJSON){

    domain_prov_process_pending_attributes_t *domain_prov_process_pending_attributes_local_var = NULL;

    char *id_local_str = NULL;

    char *order_id_local_str = NULL;

    char *registration_expiration_date_local_str = NULL;

    char *f_auto_renew_local_str = NULL;

    // domain_prov_process_pending_attributes->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(domain_prov_process_pending_attributesJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // domain_prov_process_pending_attributes->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(domain_prov_process_pending_attributesJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // domain_prov_process_pending_attributes->registration_expiration_date
    cJSON *registration_expiration_date = cJSON_GetObjectItemCaseSensitive(domain_prov_process_pending_attributesJSON, "registration expiration date");
    if (cJSON_IsNull(registration_expiration_date)) {
        registration_expiration_date = NULL;
    }
    if (registration_expiration_date) { 
    if(!cJSON_IsString(registration_expiration_date) && !cJSON_IsNull(registration_expiration_date))
    {
    goto end; //String
    }
    }

    // domain_prov_process_pending_attributes->f_auto_renew
    cJSON *f_auto_renew = cJSON_GetObjectItemCaseSensitive(domain_prov_process_pending_attributesJSON, "f_auto_renew");
    if (cJSON_IsNull(f_auto_renew)) {
        f_auto_renew = NULL;
    }
    if (f_auto_renew) { 
    if(!cJSON_IsString(f_auto_renew) && !cJSON_IsNull(f_auto_renew))
    {
    goto end; //String
    }
    }


    if (id && !cJSON_IsNull(id)) id_local_str = strdup(id->valuestring);
    if (order_id && !cJSON_IsNull(order_id)) order_id_local_str = strdup(order_id->valuestring);
    if (registration_expiration_date && !cJSON_IsNull(registration_expiration_date)) registration_expiration_date_local_str = strdup(registration_expiration_date->valuestring);
    if (f_auto_renew && !cJSON_IsNull(f_auto_renew)) f_auto_renew_local_str = strdup(f_auto_renew->valuestring);

    domain_prov_process_pending_attributes_local_var = domain_prov_process_pending_attributes_create_internal (
        id_local_str,
        order_id_local_str,
        registration_expiration_date_local_str,
        f_auto_renew_local_str
        );

    if (!domain_prov_process_pending_attributes_local_var) {
        goto end;
    }

    return domain_prov_process_pending_attributes_local_var;
end:
    if (id_local_str) {
        free(id_local_str);
        id_local_str = NULL;
    }
    if (order_id_local_str) {
        free(order_id_local_str);
        order_id_local_str = NULL;
    }
    if (registration_expiration_date_local_str) {
        free(registration_expiration_date_local_str);
        registration_expiration_date_local_str = NULL;
    }
    if (f_auto_renew_local_str) {
        free(f_auto_renew_local_str);
        f_auto_renew_local_str = NULL;
    }
    return NULL;

}
