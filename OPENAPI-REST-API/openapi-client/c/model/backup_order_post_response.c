#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_order_post_response.h"



static backup_order_post_response_t *backup_order_post_response_create_internal(
    int *_continue,
    list_t *errors,
    char *total_cost,
    char *iid,
    list_t *iids,
    list_t *real_iids,
    int *service_id,
    char *invoice_description,
    backup_order_post_response_cj_params_t *cj_params
    ) {
    backup_order_post_response_t *backup_order_post_response_local_var = malloc(sizeof(backup_order_post_response_t));
    if (!backup_order_post_response_local_var) {
        return NULL;
    }
    memset(backup_order_post_response_local_var, 0, sizeof(backup_order_post_response_t));
    backup_order_post_response_local_var->_library_owned = 1;
    backup_order_post_response_local_var->_continue = _continue;
    backup_order_post_response_local_var->errors = errors;
    backup_order_post_response_local_var->total_cost = total_cost;
    backup_order_post_response_local_var->iid = iid;
    backup_order_post_response_local_var->iids = iids;
    backup_order_post_response_local_var->real_iids = real_iids;
    backup_order_post_response_local_var->service_id = service_id;
    backup_order_post_response_local_var->invoice_description = invoice_description;
    backup_order_post_response_local_var->cj_params = cj_params;
    return backup_order_post_response_local_var;
}

__attribute__((deprecated)) backup_order_post_response_t *backup_order_post_response_create(
    int *_continue,
    list_t *errors,
    char *total_cost,
    char *iid,
    list_t *iids,
    list_t *real_iids,
    int *service_id,
    char *invoice_description,
    backup_order_post_response_cj_params_t *cj_params
    ) {
    int *_continue_copy = NULL;
    if (_continue) {
        _continue_copy = malloc(sizeof(int));
        if (_continue_copy) *_continue_copy = *_continue;
    }
    int *service_id_copy = NULL;
    if (service_id) {
        service_id_copy = malloc(sizeof(int));
        if (service_id_copy) *service_id_copy = *service_id;
    }
    backup_order_post_response_t *result = backup_order_post_response_create_internal (
        _continue_copy,
        errors,
        total_cost,
        iid,
        iids,
        real_iids,
        service_id_copy,
        invoice_description,
        cj_params
        );
    if (!result) {
        free(_continue_copy);
        free(service_id_copy);
    }
    return result;
}

void backup_order_post_response_free(backup_order_post_response_t *backup_order_post_response) {
    if(NULL == backup_order_post_response){
        return ;
    }
    if(backup_order_post_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_order_post_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_order_post_response->_continue) {
        free(backup_order_post_response->_continue);
        backup_order_post_response->_continue = NULL;
    }
    if (backup_order_post_response->errors) {
        list_ForEach(listEntry, backup_order_post_response->errors) {
            free(listEntry->data);
        }
        list_freeList(backup_order_post_response->errors);
        backup_order_post_response->errors = NULL;
    }
    if (backup_order_post_response->total_cost) {
        free(backup_order_post_response->total_cost);
        backup_order_post_response->total_cost = NULL;
    }
    if (backup_order_post_response->iid) {
        free(backup_order_post_response->iid);
        backup_order_post_response->iid = NULL;
    }
    if (backup_order_post_response->iids) {
        list_ForEach(listEntry, backup_order_post_response->iids) {
            free(listEntry->data);
        }
        list_freeList(backup_order_post_response->iids);
        backup_order_post_response->iids = NULL;
    }
    if (backup_order_post_response->real_iids) {
        list_ForEach(listEntry, backup_order_post_response->real_iids) {
            free(listEntry->data);
        }
        list_freeList(backup_order_post_response->real_iids);
        backup_order_post_response->real_iids = NULL;
    }
    if (backup_order_post_response->service_id) {
        free(backup_order_post_response->service_id);
        backup_order_post_response->service_id = NULL;
    }
    if (backup_order_post_response->invoice_description) {
        free(backup_order_post_response->invoice_description);
        backup_order_post_response->invoice_description = NULL;
    }
    if (backup_order_post_response->cj_params) {
        backup_order_post_response_cj_params_free(backup_order_post_response->cj_params);
        backup_order_post_response->cj_params = NULL;
    }
    free(backup_order_post_response);
}

cJSON *backup_order_post_response_convertToJSON(backup_order_post_response_t *backup_order_post_response) {
    cJSON *item = cJSON_CreateObject();

    // backup_order_post_response->_continue
    if(backup_order_post_response->_continue) {
    if(cJSON_AddBoolToObject(item, "continue", *backup_order_post_response->_continue) == NULL) {
    goto fail; //Bool
    }
    }


    // backup_order_post_response->errors
    if(backup_order_post_response->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *errorsListEntry;
    list_ForEach(errorsListEntry, backup_order_post_response->errors) {
    if(cJSON_AddStringToObject(errors, "", errorsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // backup_order_post_response->total_cost
    if(backup_order_post_response->total_cost) {
    if(cJSON_AddStringToObject(item, "total_cost", backup_order_post_response->total_cost) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_post_response->iid
    if(backup_order_post_response->iid) {
    if(cJSON_AddStringToObject(item, "iid", backup_order_post_response->iid) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_post_response->iids
    if(backup_order_post_response->iids) {
    cJSON *iids = cJSON_AddArrayToObject(item, "iids");
    if(iids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *iidsListEntry;
    list_ForEach(iidsListEntry, backup_order_post_response->iids) {
    if(cJSON_AddStringToObject(iids, "", iidsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // backup_order_post_response->real_iids
    if(backup_order_post_response->real_iids) {
    cJSON *real_iids = cJSON_AddArrayToObject(item, "real_iids");
    if(real_iids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *real_iidsListEntry;
    list_ForEach(real_iidsListEntry, backup_order_post_response->real_iids) {
    if(cJSON_AddStringToObject(real_iids, "", real_iidsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // backup_order_post_response->service_id
    if(backup_order_post_response->service_id) {
    if(cJSON_AddNumberToObject(item, "serviceId", *backup_order_post_response->service_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_order_post_response->invoice_description
    if(backup_order_post_response->invoice_description) {
    if(cJSON_AddStringToObject(item, "invoice_description", backup_order_post_response->invoice_description) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_post_response->cj_params
    if(backup_order_post_response->cj_params) {
    cJSON *cj_params_local_JSON = backup_order_post_response_cj_params_convertToJSON(backup_order_post_response->cj_params);
    if(cj_params_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cj_params", cj_params_local_JSON);
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

backup_order_post_response_t *backup_order_post_response_parseFromJSON(cJSON *backup_order_post_responseJSON){

    backup_order_post_response_t *backup_order_post_response_local_var = NULL;

    // define the local variable for backup_order_post_response->_continue
    int *_continue_local_var = NULL;

    // define the local list for backup_order_post_response->errors
    list_t *errorsList = NULL;

    char *total_cost_local_str = NULL;

    char *iid_local_str = NULL;

    // define the local list for backup_order_post_response->iids
    list_t *iidsList = NULL;

    // define the local list for backup_order_post_response->real_iids
    list_t *real_iidsList = NULL;

    // define the local variable for backup_order_post_response->service_id
    int *service_id_local_var = NULL;

    char *invoice_description_local_str = NULL;

    // define the local variable for backup_order_post_response->cj_params
    backup_order_post_response_cj_params_t *cj_params_local_nonprim = NULL;

    // backup_order_post_response->_continue
    cJSON *_continue = cJSON_GetObjectItemCaseSensitive(backup_order_post_responseJSON, "continue");
    if (cJSON_IsNull(_continue)) {
        _continue = NULL;
    }
    if (_continue) { 
    if(!cJSON_IsBool(_continue))
    {
    goto end; //Bool
    }
    _continue_local_var = malloc(sizeof(int));
    if(!_continue_local_var)
    {
        goto end;
    }
    *_continue_local_var = _continue->valueint;
    }

    // backup_order_post_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(backup_order_post_responseJSON, "errors");
    if (cJSON_IsNull(errors)) {
        errors = NULL;
    }
    if (errors) { 
    cJSON *errors_local = NULL;
    if(!cJSON_IsArray(errors)) {
        goto end;//primitive container
    }
    errorsList = list_createList();

    cJSON_ArrayForEach(errors_local, errors)
    {
        if(!cJSON_IsString(errors_local))
        {
            goto end;
        }
        list_addElement(errorsList , strdup(errors_local->valuestring));
    }
    }

    // backup_order_post_response->total_cost
    cJSON *total_cost = cJSON_GetObjectItemCaseSensitive(backup_order_post_responseJSON, "total_cost");
    if (cJSON_IsNull(total_cost)) {
        total_cost = NULL;
    }
    if (total_cost) { 
    if(!cJSON_IsString(total_cost) && !cJSON_IsNull(total_cost))
    {
    goto end; //String
    }
    }

    // backup_order_post_response->iid
    cJSON *iid = cJSON_GetObjectItemCaseSensitive(backup_order_post_responseJSON, "iid");
    if (cJSON_IsNull(iid)) {
        iid = NULL;
    }
    if (iid) { 
    if(!cJSON_IsString(iid) && !cJSON_IsNull(iid))
    {
    goto end; //String
    }
    }

    // backup_order_post_response->iids
    cJSON *iids = cJSON_GetObjectItemCaseSensitive(backup_order_post_responseJSON, "iids");
    if (cJSON_IsNull(iids)) {
        iids = NULL;
    }
    if (iids) { 
    cJSON *iids_local = NULL;
    if(!cJSON_IsArray(iids)) {
        goto end;//primitive container
    }
    iidsList = list_createList();

    cJSON_ArrayForEach(iids_local, iids)
    {
        if(!cJSON_IsString(iids_local))
        {
            goto end;
        }
        list_addElement(iidsList , strdup(iids_local->valuestring));
    }
    }

    // backup_order_post_response->real_iids
    cJSON *real_iids = cJSON_GetObjectItemCaseSensitive(backup_order_post_responseJSON, "real_iids");
    if (cJSON_IsNull(real_iids)) {
        real_iids = NULL;
    }
    if (real_iids) { 
    cJSON *real_iids_local = NULL;
    if(!cJSON_IsArray(real_iids)) {
        goto end;//primitive container
    }
    real_iidsList = list_createList();

    cJSON_ArrayForEach(real_iids_local, real_iids)
    {
        if(!cJSON_IsString(real_iids_local))
        {
            goto end;
        }
        list_addElement(real_iidsList , strdup(real_iids_local->valuestring));
    }
    }

    // backup_order_post_response->service_id
    cJSON *service_id = cJSON_GetObjectItemCaseSensitive(backup_order_post_responseJSON, "serviceId");
    if (cJSON_IsNull(service_id)) {
        service_id = NULL;
    }
    if (service_id) { 
    if(!cJSON_IsNumber(service_id))
    {
    goto end; //Numeric
    }
    service_id_local_var = malloc(sizeof(int));
    if(!service_id_local_var)
    {
        goto end;
    }
    *service_id_local_var = service_id->valuedouble;
    }

    // backup_order_post_response->invoice_description
    cJSON *invoice_description = cJSON_GetObjectItemCaseSensitive(backup_order_post_responseJSON, "invoice_description");
    if (cJSON_IsNull(invoice_description)) {
        invoice_description = NULL;
    }
    if (invoice_description) { 
    if(!cJSON_IsString(invoice_description) && !cJSON_IsNull(invoice_description))
    {
    goto end; //String
    }
    }

    // backup_order_post_response->cj_params
    cJSON *cj_params = cJSON_GetObjectItemCaseSensitive(backup_order_post_responseJSON, "cj_params");
    if (cJSON_IsNull(cj_params)) {
        cj_params = NULL;
    }
    if (cj_params) { 
    cj_params_local_nonprim = backup_order_post_response_cj_params_parseFromJSON(cj_params); //nonprimitive
    }


    if (total_cost && !cJSON_IsNull(total_cost)) total_cost_local_str = strdup(total_cost->valuestring);
    if (iid && !cJSON_IsNull(iid)) iid_local_str = strdup(iid->valuestring);
    if (invoice_description && !cJSON_IsNull(invoice_description)) invoice_description_local_str = strdup(invoice_description->valuestring);

    backup_order_post_response_local_var = backup_order_post_response_create_internal (
        _continue_local_var,
        errors ? errorsList : NULL,
        total_cost_local_str,
        iid_local_str,
        iids ? iidsList : NULL,
        real_iids ? real_iidsList : NULL,
        service_id_local_var,
        invoice_description_local_str,
        cj_params ? cj_params_local_nonprim : NULL
        );

    if (!backup_order_post_response_local_var) {
        goto end;
    }

    return backup_order_post_response_local_var;
end:
    if (_continue_local_var) {
        free(_continue_local_var);
        _continue_local_var = NULL;
    }
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (total_cost_local_str) {
        free(total_cost_local_str);
        total_cost_local_str = NULL;
    }
    if (iid_local_str) {
        free(iid_local_str);
        iid_local_str = NULL;
    }
    if (iidsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, iidsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(iidsList);
        iidsList = NULL;
    }
    if (real_iidsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, real_iidsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(real_iidsList);
        real_iidsList = NULL;
    }
    if (service_id_local_var) {
        free(service_id_local_var);
        service_id_local_var = NULL;
    }
    if (invoice_description_local_str) {
        free(invoice_description_local_str);
        invoice_description_local_str = NULL;
    }
    if (cj_params_local_nonprim) {
        backup_order_post_response_cj_params_free(cj_params_local_nonprim);
        cj_params_local_nonprim = NULL;
    }
    return NULL;

}
