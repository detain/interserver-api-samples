#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "service_order_post_response.h"



static service_order_post_response_t *service_order_post_response_create_internal(
    int *_continue,
    list_t *errors,
    char *total_cost,
    char *iid,
    list_t *iids,
    list_t *real_iids,
    int *service_id,
    char *invoice_description
    ) {
    service_order_post_response_t *service_order_post_response_local_var = malloc(sizeof(service_order_post_response_t));
    if (!service_order_post_response_local_var) {
        return NULL;
    }
    memset(service_order_post_response_local_var, 0, sizeof(service_order_post_response_t));
    service_order_post_response_local_var->_library_owned = 1;
    service_order_post_response_local_var->_continue = _continue;
    service_order_post_response_local_var->errors = errors;
    service_order_post_response_local_var->total_cost = total_cost;
    service_order_post_response_local_var->iid = iid;
    service_order_post_response_local_var->iids = iids;
    service_order_post_response_local_var->real_iids = real_iids;
    service_order_post_response_local_var->service_id = service_id;
    service_order_post_response_local_var->invoice_description = invoice_description;
    return service_order_post_response_local_var;
}

__attribute__((deprecated)) service_order_post_response_t *service_order_post_response_create(
    int *_continue,
    list_t *errors,
    char *total_cost,
    char *iid,
    list_t *iids,
    list_t *real_iids,
    int *service_id,
    char *invoice_description
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
    service_order_post_response_t *result = service_order_post_response_create_internal (
        _continue_copy,
        errors,
        total_cost,
        iid,
        iids,
        real_iids,
        service_id_copy,
        invoice_description
        );
    if (!result) {
        free(_continue_copy);
        free(service_id_copy);
    }
    return result;
}

void service_order_post_response_free(service_order_post_response_t *service_order_post_response) {
    if(NULL == service_order_post_response){
        return ;
    }
    if(service_order_post_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "service_order_post_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (service_order_post_response->_continue) {
        free(service_order_post_response->_continue);
        service_order_post_response->_continue = NULL;
    }
    if (service_order_post_response->errors) {
        list_ForEach(listEntry, service_order_post_response->errors) {
            free(listEntry->data);
        }
        list_freeList(service_order_post_response->errors);
        service_order_post_response->errors = NULL;
    }
    if (service_order_post_response->total_cost) {
        free(service_order_post_response->total_cost);
        service_order_post_response->total_cost = NULL;
    }
    if (service_order_post_response->iid) {
        free(service_order_post_response->iid);
        service_order_post_response->iid = NULL;
    }
    if (service_order_post_response->iids) {
        list_ForEach(listEntry, service_order_post_response->iids) {
            free(listEntry->data);
        }
        list_freeList(service_order_post_response->iids);
        service_order_post_response->iids = NULL;
    }
    if (service_order_post_response->real_iids) {
        list_ForEach(listEntry, service_order_post_response->real_iids) {
            free(listEntry->data);
        }
        list_freeList(service_order_post_response->real_iids);
        service_order_post_response->real_iids = NULL;
    }
    if (service_order_post_response->service_id) {
        free(service_order_post_response->service_id);
        service_order_post_response->service_id = NULL;
    }
    if (service_order_post_response->invoice_description) {
        free(service_order_post_response->invoice_description);
        service_order_post_response->invoice_description = NULL;
    }
    free(service_order_post_response);
}

cJSON *service_order_post_response_convertToJSON(service_order_post_response_t *service_order_post_response) {
    cJSON *item = cJSON_CreateObject();

    // service_order_post_response->_continue
    if(service_order_post_response->_continue) {
    if(cJSON_AddBoolToObject(item, "continue", *service_order_post_response->_continue) == NULL) {
    goto fail; //Bool
    }
    }


    // service_order_post_response->errors
    if(service_order_post_response->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *errorsListEntry;
    list_ForEach(errorsListEntry, service_order_post_response->errors) {
    if(cJSON_AddStringToObject(errors, "", errorsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // service_order_post_response->total_cost
    if(service_order_post_response->total_cost) {
    if(cJSON_AddStringToObject(item, "total_cost", service_order_post_response->total_cost) == NULL) {
    goto fail; //String
    }
    }


    // service_order_post_response->iid
    if(service_order_post_response->iid) {
    if(cJSON_AddStringToObject(item, "iid", service_order_post_response->iid) == NULL) {
    goto fail; //String
    }
    }


    // service_order_post_response->iids
    if(service_order_post_response->iids) {
    cJSON *iids = cJSON_AddArrayToObject(item, "iids");
    if(iids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *iidsListEntry;
    list_ForEach(iidsListEntry, service_order_post_response->iids) {
    if(cJSON_AddStringToObject(iids, "", iidsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // service_order_post_response->real_iids
    if(service_order_post_response->real_iids) {
    cJSON *real_iids = cJSON_AddArrayToObject(item, "real_iids");
    if(real_iids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *real_iidsListEntry;
    list_ForEach(real_iidsListEntry, service_order_post_response->real_iids) {
    if(cJSON_AddStringToObject(real_iids, "", real_iidsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // service_order_post_response->service_id
    if(service_order_post_response->service_id) {
    if(cJSON_AddNumberToObject(item, "serviceId", *service_order_post_response->service_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // service_order_post_response->invoice_description
    if(service_order_post_response->invoice_description) {
    if(cJSON_AddStringToObject(item, "invoice_description", service_order_post_response->invoice_description) == NULL) {
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

service_order_post_response_t *service_order_post_response_parseFromJSON(cJSON *service_order_post_responseJSON){

    service_order_post_response_t *service_order_post_response_local_var = NULL;

    // define the local variable for service_order_post_response->_continue
    int *_continue_local_var = NULL;

    // define the local list for service_order_post_response->errors
    list_t *errorsList = NULL;

    char *total_cost_local_str = NULL;

    char *iid_local_str = NULL;

    // define the local list for service_order_post_response->iids
    list_t *iidsList = NULL;

    // define the local list for service_order_post_response->real_iids
    list_t *real_iidsList = NULL;

    // define the local variable for service_order_post_response->service_id
    int *service_id_local_var = NULL;

    char *invoice_description_local_str = NULL;

    // service_order_post_response->_continue
    cJSON *_continue = cJSON_GetObjectItemCaseSensitive(service_order_post_responseJSON, "continue");
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

    // service_order_post_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(service_order_post_responseJSON, "errors");
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

    // service_order_post_response->total_cost
    cJSON *total_cost = cJSON_GetObjectItemCaseSensitive(service_order_post_responseJSON, "total_cost");
    if (cJSON_IsNull(total_cost)) {
        total_cost = NULL;
    }
    if (total_cost) { 
    if(!cJSON_IsString(total_cost) && !cJSON_IsNull(total_cost))
    {
    goto end; //String
    }
    }

    // service_order_post_response->iid
    cJSON *iid = cJSON_GetObjectItemCaseSensitive(service_order_post_responseJSON, "iid");
    if (cJSON_IsNull(iid)) {
        iid = NULL;
    }
    if (iid) { 
    if(!cJSON_IsString(iid) && !cJSON_IsNull(iid))
    {
    goto end; //String
    }
    }

    // service_order_post_response->iids
    cJSON *iids = cJSON_GetObjectItemCaseSensitive(service_order_post_responseJSON, "iids");
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

    // service_order_post_response->real_iids
    cJSON *real_iids = cJSON_GetObjectItemCaseSensitive(service_order_post_responseJSON, "real_iids");
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

    // service_order_post_response->service_id
    cJSON *service_id = cJSON_GetObjectItemCaseSensitive(service_order_post_responseJSON, "serviceId");
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

    // service_order_post_response->invoice_description
    cJSON *invoice_description = cJSON_GetObjectItemCaseSensitive(service_order_post_responseJSON, "invoice_description");
    if (cJSON_IsNull(invoice_description)) {
        invoice_description = NULL;
    }
    if (invoice_description) { 
    if(!cJSON_IsString(invoice_description) && !cJSON_IsNull(invoice_description))
    {
    goto end; //String
    }
    }


    if (total_cost && !cJSON_IsNull(total_cost)) total_cost_local_str = strdup(total_cost->valuestring);
    if (iid && !cJSON_IsNull(iid)) iid_local_str = strdup(iid->valuestring);
    if (invoice_description && !cJSON_IsNull(invoice_description)) invoice_description_local_str = strdup(invoice_description->valuestring);

    service_order_post_response_local_var = service_order_post_response_create_internal (
        _continue_local_var,
        errors ? errorsList : NULL,
        total_cost_local_str,
        iid_local_str,
        iids ? iidsList : NULL,
        real_iids ? real_iidsList : NULL,
        service_id_local_var,
        invoice_description_local_str
        );

    if (!service_order_post_response_local_var) {
        goto end;
    }

    return service_order_post_response_local_var;
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
    return NULL;

}
