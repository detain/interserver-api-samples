#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_all_info_attributes_contact_set.h"



static domain_all_info_attributes_contact_set_t *domain_all_info_attributes_contact_set_create_internal(
    domain_owner_contact_t *owner,
    domain_admin_contact_t *admin,
    domain_tech_contact_t *tech
    ) {
    domain_all_info_attributes_contact_set_t *domain_all_info_attributes_contact_set_local_var = malloc(sizeof(domain_all_info_attributes_contact_set_t));
    if (!domain_all_info_attributes_contact_set_local_var) {
        return NULL;
    }
    memset(domain_all_info_attributes_contact_set_local_var, 0, sizeof(domain_all_info_attributes_contact_set_t));
    domain_all_info_attributes_contact_set_local_var->_library_owned = 1;
    domain_all_info_attributes_contact_set_local_var->owner = owner;
    domain_all_info_attributes_contact_set_local_var->admin = admin;
    domain_all_info_attributes_contact_set_local_var->tech = tech;
    return domain_all_info_attributes_contact_set_local_var;
}

__attribute__((deprecated)) domain_all_info_attributes_contact_set_t *domain_all_info_attributes_contact_set_create(
    domain_owner_contact_t *owner,
    domain_admin_contact_t *admin,
    domain_tech_contact_t *tech
    ) {
    domain_all_info_attributes_contact_set_t *result = domain_all_info_attributes_contact_set_create_internal (
        owner,
        admin,
        tech
        );
    if (!result) {
    }
    return result;
}

void domain_all_info_attributes_contact_set_free(domain_all_info_attributes_contact_set_t *domain_all_info_attributes_contact_set) {
    if(NULL == domain_all_info_attributes_contact_set){
        return ;
    }
    if(domain_all_info_attributes_contact_set->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_all_info_attributes_contact_set_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_all_info_attributes_contact_set->owner) {
        domain_owner_contact_free(domain_all_info_attributes_contact_set->owner);
        domain_all_info_attributes_contact_set->owner = NULL;
    }
    if (domain_all_info_attributes_contact_set->admin) {
        domain_admin_contact_free(domain_all_info_attributes_contact_set->admin);
        domain_all_info_attributes_contact_set->admin = NULL;
    }
    if (domain_all_info_attributes_contact_set->tech) {
        domain_tech_contact_free(domain_all_info_attributes_contact_set->tech);
        domain_all_info_attributes_contact_set->tech = NULL;
    }
    free(domain_all_info_attributes_contact_set);
}

cJSON *domain_all_info_attributes_contact_set_convertToJSON(domain_all_info_attributes_contact_set_t *domain_all_info_attributes_contact_set) {
    cJSON *item = cJSON_CreateObject();

    // domain_all_info_attributes_contact_set->owner
    if(domain_all_info_attributes_contact_set->owner) {
    cJSON *owner_local_JSON = domain_owner_contact_convertToJSON(domain_all_info_attributes_contact_set->owner);
    if(owner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "owner", owner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain_all_info_attributes_contact_set->admin
    if(domain_all_info_attributes_contact_set->admin) {
    cJSON *admin_local_JSON = domain_admin_contact_convertToJSON(domain_all_info_attributes_contact_set->admin);
    if(admin_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "admin", admin_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain_all_info_attributes_contact_set->tech
    if(domain_all_info_attributes_contact_set->tech) {
    cJSON *tech_local_JSON = domain_tech_contact_convertToJSON(domain_all_info_attributes_contact_set->tech);
    if(tech_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tech", tech_local_JSON);
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

domain_all_info_attributes_contact_set_t *domain_all_info_attributes_contact_set_parseFromJSON(cJSON *domain_all_info_attributes_contact_setJSON){

    domain_all_info_attributes_contact_set_t *domain_all_info_attributes_contact_set_local_var = NULL;

    // define the local variable for domain_all_info_attributes_contact_set->owner
    domain_owner_contact_t *owner_local_nonprim = NULL;

    // define the local variable for domain_all_info_attributes_contact_set->admin
    domain_admin_contact_t *admin_local_nonprim = NULL;

    // define the local variable for domain_all_info_attributes_contact_set->tech
    domain_tech_contact_t *tech_local_nonprim = NULL;

    // domain_all_info_attributes_contact_set->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributes_contact_setJSON, "owner");
    if (cJSON_IsNull(owner)) {
        owner = NULL;
    }
    if (owner) { 
    owner_local_nonprim = domain_owner_contact_parseFromJSON(owner); //nonprimitive
    }

    // domain_all_info_attributes_contact_set->admin
    cJSON *admin = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributes_contact_setJSON, "admin");
    if (cJSON_IsNull(admin)) {
        admin = NULL;
    }
    if (admin) { 
    admin_local_nonprim = domain_admin_contact_parseFromJSON(admin); //nonprimitive
    }

    // domain_all_info_attributes_contact_set->tech
    cJSON *tech = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributes_contact_setJSON, "tech");
    if (cJSON_IsNull(tech)) {
        tech = NULL;
    }
    if (tech) { 
    tech_local_nonprim = domain_tech_contact_parseFromJSON(tech); //nonprimitive
    }



    domain_all_info_attributes_contact_set_local_var = domain_all_info_attributes_contact_set_create_internal (
        owner ? owner_local_nonprim : NULL,
        admin ? admin_local_nonprim : NULL,
        tech ? tech_local_nonprim : NULL
        );

    if (!domain_all_info_attributes_contact_set_local_var) {
        goto end;
    }

    return domain_all_info_attributes_contact_set_local_var;
end:
    if (owner_local_nonprim) {
        domain_owner_contact_free(owner_local_nonprim);
        owner_local_nonprim = NULL;
    }
    if (admin_local_nonprim) {
        domain_admin_contact_free(admin_local_nonprim);
        admin_local_nonprim = NULL;
    }
    if (tech_local_nonprim) {
        domain_tech_contact_free(tech_local_nonprim);
        tech_local_nonprim = NULL;
    }
    return NULL;

}
