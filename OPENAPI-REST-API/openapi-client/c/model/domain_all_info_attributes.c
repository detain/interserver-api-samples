#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_all_info_attributes.h"



static domain_all_info_attributes_t *domain_all_info_attributes_create_internal(
    domain_all_info_attributes_contact_set_t *contact_set,
    char *registry_createdate,
    char *registry_expiredate,
    char *tld_data,
    char *let_expire,
    char *auto_renew,
    char *sponsoring_rsp,
    char *gdpr_consent_status,
    list_t *nameserver_list,
    char *registry_updatedate,
    char *affiliate_id,
    char *expiredate
    ) {
    domain_all_info_attributes_t *domain_all_info_attributes_local_var = malloc(sizeof(domain_all_info_attributes_t));
    if (!domain_all_info_attributes_local_var) {
        return NULL;
    }
    memset(domain_all_info_attributes_local_var, 0, sizeof(domain_all_info_attributes_t));
    domain_all_info_attributes_local_var->_library_owned = 1;
    domain_all_info_attributes_local_var->contact_set = contact_set;
    domain_all_info_attributes_local_var->registry_createdate = registry_createdate;
    domain_all_info_attributes_local_var->registry_expiredate = registry_expiredate;
    domain_all_info_attributes_local_var->tld_data = tld_data;
    domain_all_info_attributes_local_var->let_expire = let_expire;
    domain_all_info_attributes_local_var->auto_renew = auto_renew;
    domain_all_info_attributes_local_var->sponsoring_rsp = sponsoring_rsp;
    domain_all_info_attributes_local_var->gdpr_consent_status = gdpr_consent_status;
    domain_all_info_attributes_local_var->nameserver_list = nameserver_list;
    domain_all_info_attributes_local_var->registry_updatedate = registry_updatedate;
    domain_all_info_attributes_local_var->affiliate_id = affiliate_id;
    domain_all_info_attributes_local_var->expiredate = expiredate;
    return domain_all_info_attributes_local_var;
}

__attribute__((deprecated)) domain_all_info_attributes_t *domain_all_info_attributes_create(
    domain_all_info_attributes_contact_set_t *contact_set,
    char *registry_createdate,
    char *registry_expiredate,
    char *tld_data,
    char *let_expire,
    char *auto_renew,
    char *sponsoring_rsp,
    char *gdpr_consent_status,
    list_t *nameserver_list,
    char *registry_updatedate,
    char *affiliate_id,
    char *expiredate
    ) {
    domain_all_info_attributes_t *result = domain_all_info_attributes_create_internal (
        contact_set,
        registry_createdate,
        registry_expiredate,
        tld_data,
        let_expire,
        auto_renew,
        sponsoring_rsp,
        gdpr_consent_status,
        nameserver_list,
        registry_updatedate,
        affiliate_id,
        expiredate
        );
    if (!result) {
    }
    return result;
}

void domain_all_info_attributes_free(domain_all_info_attributes_t *domain_all_info_attributes) {
    if(NULL == domain_all_info_attributes){
        return ;
    }
    if(domain_all_info_attributes->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_all_info_attributes_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_all_info_attributes->contact_set) {
        domain_all_info_attributes_contact_set_free(domain_all_info_attributes->contact_set);
        domain_all_info_attributes->contact_set = NULL;
    }
    if (domain_all_info_attributes->registry_createdate) {
        free(domain_all_info_attributes->registry_createdate);
        domain_all_info_attributes->registry_createdate = NULL;
    }
    if (domain_all_info_attributes->registry_expiredate) {
        free(domain_all_info_attributes->registry_expiredate);
        domain_all_info_attributes->registry_expiredate = NULL;
    }
    if (domain_all_info_attributes->tld_data) {
        free(domain_all_info_attributes->tld_data);
        domain_all_info_attributes->tld_data = NULL;
    }
    if (domain_all_info_attributes->let_expire) {
        free(domain_all_info_attributes->let_expire);
        domain_all_info_attributes->let_expire = NULL;
    }
    if (domain_all_info_attributes->auto_renew) {
        free(domain_all_info_attributes->auto_renew);
        domain_all_info_attributes->auto_renew = NULL;
    }
    if (domain_all_info_attributes->sponsoring_rsp) {
        free(domain_all_info_attributes->sponsoring_rsp);
        domain_all_info_attributes->sponsoring_rsp = NULL;
    }
    if (domain_all_info_attributes->gdpr_consent_status) {
        free(domain_all_info_attributes->gdpr_consent_status);
        domain_all_info_attributes->gdpr_consent_status = NULL;
    }
    if (domain_all_info_attributes->nameserver_list) {
        list_ForEach(listEntry, domain_all_info_attributes->nameserver_list) {
            domain_name_server_free(listEntry->data);
        }
        list_freeList(domain_all_info_attributes->nameserver_list);
        domain_all_info_attributes->nameserver_list = NULL;
    }
    if (domain_all_info_attributes->registry_updatedate) {
        free(domain_all_info_attributes->registry_updatedate);
        domain_all_info_attributes->registry_updatedate = NULL;
    }
    if (domain_all_info_attributes->affiliate_id) {
        free(domain_all_info_attributes->affiliate_id);
        domain_all_info_attributes->affiliate_id = NULL;
    }
    if (domain_all_info_attributes->expiredate) {
        free(domain_all_info_attributes->expiredate);
        domain_all_info_attributes->expiredate = NULL;
    }
    free(domain_all_info_attributes);
}

cJSON *domain_all_info_attributes_convertToJSON(domain_all_info_attributes_t *domain_all_info_attributes) {
    cJSON *item = cJSON_CreateObject();

    // domain_all_info_attributes->contact_set
    if(domain_all_info_attributes->contact_set) {
    cJSON *contact_set_local_JSON = domain_all_info_attributes_contact_set_convertToJSON(domain_all_info_attributes->contact_set);
    if(contact_set_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "contact_set", contact_set_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain_all_info_attributes->registry_createdate
    if(domain_all_info_attributes->registry_createdate) {
    if(cJSON_AddStringToObject(item, "registry_createdate", domain_all_info_attributes->registry_createdate) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info_attributes->registry_expiredate
    if(domain_all_info_attributes->registry_expiredate) {
    if(cJSON_AddStringToObject(item, "registry_expiredate", domain_all_info_attributes->registry_expiredate) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info_attributes->tld_data
    if(domain_all_info_attributes->tld_data) {
    if(cJSON_AddStringToObject(item, "tld_data", domain_all_info_attributes->tld_data) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info_attributes->let_expire
    if(domain_all_info_attributes->let_expire) {
    if(cJSON_AddStringToObject(item, "let_expire", domain_all_info_attributes->let_expire) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info_attributes->auto_renew
    if(domain_all_info_attributes->auto_renew) {
    if(cJSON_AddStringToObject(item, "auto_renew", domain_all_info_attributes->auto_renew) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info_attributes->sponsoring_rsp
    if(domain_all_info_attributes->sponsoring_rsp) {
    if(cJSON_AddStringToObject(item, "sponsoring_rsp", domain_all_info_attributes->sponsoring_rsp) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info_attributes->gdpr_consent_status
    if(domain_all_info_attributes->gdpr_consent_status) {
    if(cJSON_AddStringToObject(item, "gdpr_consent_status", domain_all_info_attributes->gdpr_consent_status) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info_attributes->nameserver_list
    if(domain_all_info_attributes->nameserver_list) {
    cJSON *nameserver_list = cJSON_AddArrayToObject(item, "nameserver_list");
    if(nameserver_list == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *nameserver_listListEntry;
    if (domain_all_info_attributes->nameserver_list) {
    list_ForEach(nameserver_listListEntry, domain_all_info_attributes->nameserver_list) {
    cJSON *itemLocal = domain_name_server_convertToJSON(nameserver_listListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(nameserver_list, itemLocal);
    }
    }
    }


    // domain_all_info_attributes->registry_updatedate
    if(domain_all_info_attributes->registry_updatedate) {
    if(cJSON_AddStringToObject(item, "registry_updatedate", domain_all_info_attributes->registry_updatedate) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info_attributes->affiliate_id
    if(domain_all_info_attributes->affiliate_id) {
    if(cJSON_AddStringToObject(item, "affiliate_id", domain_all_info_attributes->affiliate_id) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info_attributes->expiredate
    if(domain_all_info_attributes->expiredate) {
    if(cJSON_AddStringToObject(item, "expiredate", domain_all_info_attributes->expiredate) == NULL) {
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

domain_all_info_attributes_t *domain_all_info_attributes_parseFromJSON(cJSON *domain_all_info_attributesJSON){

    domain_all_info_attributes_t *domain_all_info_attributes_local_var = NULL;

    // define the local variable for domain_all_info_attributes->contact_set
    domain_all_info_attributes_contact_set_t *contact_set_local_nonprim = NULL;

    char *registry_createdate_local_str = NULL;

    char *registry_expiredate_local_str = NULL;

    char *tld_data_local_str = NULL;

    char *let_expire_local_str = NULL;

    char *auto_renew_local_str = NULL;

    char *sponsoring_rsp_local_str = NULL;

    char *gdpr_consent_status_local_str = NULL;

    // define the local list for domain_all_info_attributes->nameserver_list
    list_t *nameserver_listList = NULL;

    char *registry_updatedate_local_str = NULL;

    char *affiliate_id_local_str = NULL;

    char *expiredate_local_str = NULL;

    // domain_all_info_attributes->contact_set
    cJSON *contact_set = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributesJSON, "contact_set");
    if (cJSON_IsNull(contact_set)) {
        contact_set = NULL;
    }
    if (contact_set) { 
    contact_set_local_nonprim = domain_all_info_attributes_contact_set_parseFromJSON(contact_set); //nonprimitive
    }

    // domain_all_info_attributes->registry_createdate
    cJSON *registry_createdate = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributesJSON, "registry_createdate");
    if (cJSON_IsNull(registry_createdate)) {
        registry_createdate = NULL;
    }
    if (registry_createdate) { 
    if(!cJSON_IsString(registry_createdate) && !cJSON_IsNull(registry_createdate))
    {
    goto end; //String
    }
    }

    // domain_all_info_attributes->registry_expiredate
    cJSON *registry_expiredate = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributesJSON, "registry_expiredate");
    if (cJSON_IsNull(registry_expiredate)) {
        registry_expiredate = NULL;
    }
    if (registry_expiredate) { 
    if(!cJSON_IsString(registry_expiredate) && !cJSON_IsNull(registry_expiredate))
    {
    goto end; //String
    }
    }

    // domain_all_info_attributes->tld_data
    cJSON *tld_data = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributesJSON, "tld_data");
    if (cJSON_IsNull(tld_data)) {
        tld_data = NULL;
    }
    if (tld_data) { 
    if(!cJSON_IsString(tld_data) && !cJSON_IsNull(tld_data))
    {
    goto end; //String
    }
    }

    // domain_all_info_attributes->let_expire
    cJSON *let_expire = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributesJSON, "let_expire");
    if (cJSON_IsNull(let_expire)) {
        let_expire = NULL;
    }
    if (let_expire) { 
    if(!cJSON_IsString(let_expire) && !cJSON_IsNull(let_expire))
    {
    goto end; //String
    }
    }

    // domain_all_info_attributes->auto_renew
    cJSON *auto_renew = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributesJSON, "auto_renew");
    if (cJSON_IsNull(auto_renew)) {
        auto_renew = NULL;
    }
    if (auto_renew) { 
    if(!cJSON_IsString(auto_renew) && !cJSON_IsNull(auto_renew))
    {
    goto end; //String
    }
    }

    // domain_all_info_attributes->sponsoring_rsp
    cJSON *sponsoring_rsp = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributesJSON, "sponsoring_rsp");
    if (cJSON_IsNull(sponsoring_rsp)) {
        sponsoring_rsp = NULL;
    }
    if (sponsoring_rsp) { 
    if(!cJSON_IsString(sponsoring_rsp) && !cJSON_IsNull(sponsoring_rsp))
    {
    goto end; //String
    }
    }

    // domain_all_info_attributes->gdpr_consent_status
    cJSON *gdpr_consent_status = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributesJSON, "gdpr_consent_status");
    if (cJSON_IsNull(gdpr_consent_status)) {
        gdpr_consent_status = NULL;
    }
    if (gdpr_consent_status) { 
    if(!cJSON_IsString(gdpr_consent_status) && !cJSON_IsNull(gdpr_consent_status))
    {
    goto end; //String
    }
    }

    // domain_all_info_attributes->nameserver_list
    cJSON *nameserver_list = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributesJSON, "nameserver_list");
    if (cJSON_IsNull(nameserver_list)) {
        nameserver_list = NULL;
    }
    if (nameserver_list) { 
    cJSON *nameserver_list_local_nonprimitive = NULL;
    if(!cJSON_IsArray(nameserver_list)){
        goto end; //nonprimitive container
    }

    nameserver_listList = list_createList();

    cJSON_ArrayForEach(nameserver_list_local_nonprimitive,nameserver_list )
    {
        if(!cJSON_IsObject(nameserver_list_local_nonprimitive)){
            goto end;
        }
        domain_name_server_t *nameserver_listItem = domain_name_server_parseFromJSON(nameserver_list_local_nonprimitive);

        list_addElement(nameserver_listList, nameserver_listItem);
    }
    }

    // domain_all_info_attributes->registry_updatedate
    cJSON *registry_updatedate = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributesJSON, "registry_updatedate");
    if (cJSON_IsNull(registry_updatedate)) {
        registry_updatedate = NULL;
    }
    if (registry_updatedate) { 
    if(!cJSON_IsString(registry_updatedate) && !cJSON_IsNull(registry_updatedate))
    {
    goto end; //String
    }
    }

    // domain_all_info_attributes->affiliate_id
    cJSON *affiliate_id = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributesJSON, "affiliate_id");
    if (cJSON_IsNull(affiliate_id)) {
        affiliate_id = NULL;
    }
    if (affiliate_id) { 
    if(!cJSON_IsString(affiliate_id) && !cJSON_IsNull(affiliate_id))
    {
    goto end; //String
    }
    }

    // domain_all_info_attributes->expiredate
    cJSON *expiredate = cJSON_GetObjectItemCaseSensitive(domain_all_info_attributesJSON, "expiredate");
    if (cJSON_IsNull(expiredate)) {
        expiredate = NULL;
    }
    if (expiredate) { 
    if(!cJSON_IsString(expiredate) && !cJSON_IsNull(expiredate))
    {
    goto end; //String
    }
    }


    if (registry_createdate && !cJSON_IsNull(registry_createdate)) registry_createdate_local_str = strdup(registry_createdate->valuestring);
    if (registry_expiredate && !cJSON_IsNull(registry_expiredate)) registry_expiredate_local_str = strdup(registry_expiredate->valuestring);
    if (tld_data && !cJSON_IsNull(tld_data)) tld_data_local_str = strdup(tld_data->valuestring);
    if (let_expire && !cJSON_IsNull(let_expire)) let_expire_local_str = strdup(let_expire->valuestring);
    if (auto_renew && !cJSON_IsNull(auto_renew)) auto_renew_local_str = strdup(auto_renew->valuestring);
    if (sponsoring_rsp && !cJSON_IsNull(sponsoring_rsp)) sponsoring_rsp_local_str = strdup(sponsoring_rsp->valuestring);
    if (gdpr_consent_status && !cJSON_IsNull(gdpr_consent_status)) gdpr_consent_status_local_str = strdup(gdpr_consent_status->valuestring);
    if (registry_updatedate && !cJSON_IsNull(registry_updatedate)) registry_updatedate_local_str = strdup(registry_updatedate->valuestring);
    if (affiliate_id && !cJSON_IsNull(affiliate_id)) affiliate_id_local_str = strdup(affiliate_id->valuestring);
    if (expiredate && !cJSON_IsNull(expiredate)) expiredate_local_str = strdup(expiredate->valuestring);

    domain_all_info_attributes_local_var = domain_all_info_attributes_create_internal (
        contact_set ? contact_set_local_nonprim : NULL,
        registry_createdate_local_str,
        registry_expiredate_local_str,
        tld_data_local_str,
        let_expire_local_str,
        auto_renew_local_str,
        sponsoring_rsp_local_str,
        gdpr_consent_status_local_str,
        nameserver_list ? nameserver_listList : NULL,
        registry_updatedate_local_str,
        affiliate_id_local_str,
        expiredate_local_str
        );

    if (!domain_all_info_attributes_local_var) {
        goto end;
    }

    return domain_all_info_attributes_local_var;
end:
    if (contact_set_local_nonprim) {
        domain_all_info_attributes_contact_set_free(contact_set_local_nonprim);
        contact_set_local_nonprim = NULL;
    }
    if (registry_createdate_local_str) {
        free(registry_createdate_local_str);
        registry_createdate_local_str = NULL;
    }
    if (registry_expiredate_local_str) {
        free(registry_expiredate_local_str);
        registry_expiredate_local_str = NULL;
    }
    if (tld_data_local_str) {
        free(tld_data_local_str);
        tld_data_local_str = NULL;
    }
    if (let_expire_local_str) {
        free(let_expire_local_str);
        let_expire_local_str = NULL;
    }
    if (auto_renew_local_str) {
        free(auto_renew_local_str);
        auto_renew_local_str = NULL;
    }
    if (sponsoring_rsp_local_str) {
        free(sponsoring_rsp_local_str);
        sponsoring_rsp_local_str = NULL;
    }
    if (gdpr_consent_status_local_str) {
        free(gdpr_consent_status_local_str);
        gdpr_consent_status_local_str = NULL;
    }
    if (nameserver_listList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, nameserver_listList) {
            domain_name_server_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(nameserver_listList);
        nameserver_listList = NULL;
    }
    if (registry_updatedate_local_str) {
        free(registry_updatedate_local_str);
        registry_updatedate_local_str = NULL;
    }
    if (affiliate_id_local_str) {
        free(affiliate_id_local_str);
        affiliate_id_local_str = NULL;
    }
    if (expiredate_local_str) {
        free(expiredate_local_str);
        expiredate_local_str = NULL;
    }
    return NULL;

}
