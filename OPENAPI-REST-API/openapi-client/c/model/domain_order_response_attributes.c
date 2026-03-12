#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_order_response_attributes.h"



static domain_order_response_attributes_t *domain_order_response_attributes_create_internal(
    char *id,
    char *admin_email
    ) {
    domain_order_response_attributes_t *domain_order_response_attributes_local_var = malloc(sizeof(domain_order_response_attributes_t));
    if (!domain_order_response_attributes_local_var) {
        return NULL;
    }
    domain_order_response_attributes_local_var->id = id;
    domain_order_response_attributes_local_var->admin_email = admin_email;

    domain_order_response_attributes_local_var->_library_owned = 1;
    return domain_order_response_attributes_local_var;
}

__attribute__((deprecated)) domain_order_response_attributes_t *domain_order_response_attributes_create(
    char *id,
    char *admin_email
    ) {
    return domain_order_response_attributes_create_internal (
        id,
        admin_email
        );
}

void domain_order_response_attributes_free(domain_order_response_attributes_t *domain_order_response_attributes) {
    if(NULL == domain_order_response_attributes){
        return ;
    }
    if(domain_order_response_attributes->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_order_response_attributes_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_order_response_attributes->id) {
        free(domain_order_response_attributes->id);
        domain_order_response_attributes->id = NULL;
    }
    if (domain_order_response_attributes->admin_email) {
        free(domain_order_response_attributes->admin_email);
        domain_order_response_attributes->admin_email = NULL;
    }
    free(domain_order_response_attributes);
}

cJSON *domain_order_response_attributes_convertToJSON(domain_order_response_attributes_t *domain_order_response_attributes) {
    cJSON *item = cJSON_CreateObject();

    // domain_order_response_attributes->id
    if(domain_order_response_attributes->id) {
    if(cJSON_AddStringToObject(item, "id", domain_order_response_attributes->id) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_response_attributes->admin_email
    if(domain_order_response_attributes->admin_email) {
    if(cJSON_AddStringToObject(item, "admin_email", domain_order_response_attributes->admin_email) == NULL) {
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

domain_order_response_attributes_t *domain_order_response_attributes_parseFromJSON(cJSON *domain_order_response_attributesJSON){

    domain_order_response_attributes_t *domain_order_response_attributes_local_var = NULL;

    // domain_order_response_attributes->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(domain_order_response_attributesJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // domain_order_response_attributes->admin_email
    cJSON *admin_email = cJSON_GetObjectItemCaseSensitive(domain_order_response_attributesJSON, "admin_email");
    if (cJSON_IsNull(admin_email)) {
        admin_email = NULL;
    }
    if (admin_email) { 
    if(!cJSON_IsString(admin_email) && !cJSON_IsNull(admin_email))
    {
    goto end; //String
    }
    }


    domain_order_response_attributes_local_var = domain_order_response_attributes_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        admin_email && !cJSON_IsNull(admin_email) ? strdup(admin_email->valuestring) : NULL
        );

    return domain_order_response_attributes_local_var;
end:
    return NULL;

}
