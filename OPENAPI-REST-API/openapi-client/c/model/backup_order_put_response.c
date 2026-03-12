#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_order_put_response.h"



static backup_order_put_response_t *backup_order_put_response_create_internal(
    int _continue,
    list_t *errors,
    int service_type,
    char *service_cost,
    char *original_cost,
    char *repeat_service_cost,
    char *hostname,
    char *password,
    char *coupon,
    int coupon_code
    ) {
    backup_order_put_response_t *backup_order_put_response_local_var = malloc(sizeof(backup_order_put_response_t));
    if (!backup_order_put_response_local_var) {
        return NULL;
    }
    backup_order_put_response_local_var->_continue = _continue;
    backup_order_put_response_local_var->errors = errors;
    backup_order_put_response_local_var->service_type = service_type;
    backup_order_put_response_local_var->service_cost = service_cost;
    backup_order_put_response_local_var->original_cost = original_cost;
    backup_order_put_response_local_var->repeat_service_cost = repeat_service_cost;
    backup_order_put_response_local_var->hostname = hostname;
    backup_order_put_response_local_var->password = password;
    backup_order_put_response_local_var->coupon = coupon;
    backup_order_put_response_local_var->coupon_code = coupon_code;

    backup_order_put_response_local_var->_library_owned = 1;
    return backup_order_put_response_local_var;
}

__attribute__((deprecated)) backup_order_put_response_t *backup_order_put_response_create(
    int _continue,
    list_t *errors,
    int service_type,
    char *service_cost,
    char *original_cost,
    char *repeat_service_cost,
    char *hostname,
    char *password,
    char *coupon,
    int coupon_code
    ) {
    return backup_order_put_response_create_internal (
        _continue,
        errors,
        service_type,
        service_cost,
        original_cost,
        repeat_service_cost,
        hostname,
        password,
        coupon,
        coupon_code
        );
}

void backup_order_put_response_free(backup_order_put_response_t *backup_order_put_response) {
    if(NULL == backup_order_put_response){
        return ;
    }
    if(backup_order_put_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_order_put_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_order_put_response->errors) {
        list_ForEach(listEntry, backup_order_put_response->errors) {
            free(listEntry->data);
        }
        list_freeList(backup_order_put_response->errors);
        backup_order_put_response->errors = NULL;
    }
    if (backup_order_put_response->service_cost) {
        free(backup_order_put_response->service_cost);
        backup_order_put_response->service_cost = NULL;
    }
    if (backup_order_put_response->original_cost) {
        free(backup_order_put_response->original_cost);
        backup_order_put_response->original_cost = NULL;
    }
    if (backup_order_put_response->repeat_service_cost) {
        free(backup_order_put_response->repeat_service_cost);
        backup_order_put_response->repeat_service_cost = NULL;
    }
    if (backup_order_put_response->hostname) {
        free(backup_order_put_response->hostname);
        backup_order_put_response->hostname = NULL;
    }
    if (backup_order_put_response->password) {
        free(backup_order_put_response->password);
        backup_order_put_response->password = NULL;
    }
    if (backup_order_put_response->coupon) {
        free(backup_order_put_response->coupon);
        backup_order_put_response->coupon = NULL;
    }
    free(backup_order_put_response);
}

cJSON *backup_order_put_response_convertToJSON(backup_order_put_response_t *backup_order_put_response) {
    cJSON *item = cJSON_CreateObject();

    // backup_order_put_response->_continue
    if(backup_order_put_response->_continue) {
    if(cJSON_AddBoolToObject(item, "continue", backup_order_put_response->_continue) == NULL) {
    goto fail; //Bool
    }
    }


    // backup_order_put_response->errors
    if(backup_order_put_response->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *errorsListEntry;
    list_ForEach(errorsListEntry, backup_order_put_response->errors) {
    if(cJSON_AddStringToObject(errors, "", errorsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // backup_order_put_response->service_type
    if(backup_order_put_response->service_type) {
    if(cJSON_AddNumberToObject(item, "serviceType", backup_order_put_response->service_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_order_put_response->service_cost
    if(backup_order_put_response->service_cost) {
    if(cJSON_AddStringToObject(item, "serviceCost", backup_order_put_response->service_cost) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_put_response->original_cost
    if(backup_order_put_response->original_cost) {
    if(cJSON_AddStringToObject(item, "originalCost", backup_order_put_response->original_cost) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_put_response->repeat_service_cost
    if(backup_order_put_response->repeat_service_cost) {
    if(cJSON_AddStringToObject(item, "repeatServiceCost", backup_order_put_response->repeat_service_cost) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_put_response->hostname
    if(backup_order_put_response->hostname) {
    if(cJSON_AddStringToObject(item, "hostname", backup_order_put_response->hostname) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_put_response->password
    if(backup_order_put_response->password) {
    if(cJSON_AddStringToObject(item, "password", backup_order_put_response->password) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_put_response->coupon
    if(backup_order_put_response->coupon) {
    if(cJSON_AddStringToObject(item, "coupon", backup_order_put_response->coupon) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_put_response->coupon_code
    if(backup_order_put_response->coupon_code) {
    if(cJSON_AddNumberToObject(item, "couponCode", backup_order_put_response->coupon_code) == NULL) {
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

backup_order_put_response_t *backup_order_put_response_parseFromJSON(cJSON *backup_order_put_responseJSON){

    backup_order_put_response_t *backup_order_put_response_local_var = NULL;

    // define the local list for backup_order_put_response->errors
    list_t *errorsList = NULL;

    // backup_order_put_response->_continue
    cJSON *_continue = cJSON_GetObjectItemCaseSensitive(backup_order_put_responseJSON, "continue");
    if (cJSON_IsNull(_continue)) {
        _continue = NULL;
    }
    if (_continue) { 
    if(!cJSON_IsBool(_continue))
    {
    goto end; //Bool
    }
    }

    // backup_order_put_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(backup_order_put_responseJSON, "errors");
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

    // backup_order_put_response->service_type
    cJSON *service_type = cJSON_GetObjectItemCaseSensitive(backup_order_put_responseJSON, "serviceType");
    if (cJSON_IsNull(service_type)) {
        service_type = NULL;
    }
    if (service_type) { 
    if(!cJSON_IsNumber(service_type))
    {
    goto end; //Numeric
    }
    }

    // backup_order_put_response->service_cost
    cJSON *service_cost = cJSON_GetObjectItemCaseSensitive(backup_order_put_responseJSON, "serviceCost");
    if (cJSON_IsNull(service_cost)) {
        service_cost = NULL;
    }
    if (service_cost) { 
    if(!cJSON_IsString(service_cost) && !cJSON_IsNull(service_cost))
    {
    goto end; //String
    }
    }

    // backup_order_put_response->original_cost
    cJSON *original_cost = cJSON_GetObjectItemCaseSensitive(backup_order_put_responseJSON, "originalCost");
    if (cJSON_IsNull(original_cost)) {
        original_cost = NULL;
    }
    if (original_cost) { 
    if(!cJSON_IsString(original_cost) && !cJSON_IsNull(original_cost))
    {
    goto end; //String
    }
    }

    // backup_order_put_response->repeat_service_cost
    cJSON *repeat_service_cost = cJSON_GetObjectItemCaseSensitive(backup_order_put_responseJSON, "repeatServiceCost");
    if (cJSON_IsNull(repeat_service_cost)) {
        repeat_service_cost = NULL;
    }
    if (repeat_service_cost) { 
    if(!cJSON_IsString(repeat_service_cost) && !cJSON_IsNull(repeat_service_cost))
    {
    goto end; //String
    }
    }

    // backup_order_put_response->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(backup_order_put_responseJSON, "hostname");
    if (cJSON_IsNull(hostname)) {
        hostname = NULL;
    }
    if (hostname) { 
    if(!cJSON_IsString(hostname) && !cJSON_IsNull(hostname))
    {
    goto end; //String
    }
    }

    // backup_order_put_response->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(backup_order_put_responseJSON, "password");
    if (cJSON_IsNull(password)) {
        password = NULL;
    }
    if (password) { 
    if(!cJSON_IsString(password) && !cJSON_IsNull(password))
    {
    goto end; //String
    }
    }

    // backup_order_put_response->coupon
    cJSON *coupon = cJSON_GetObjectItemCaseSensitive(backup_order_put_responseJSON, "coupon");
    if (cJSON_IsNull(coupon)) {
        coupon = NULL;
    }
    if (coupon) { 
    if(!cJSON_IsString(coupon) && !cJSON_IsNull(coupon))
    {
    goto end; //String
    }
    }

    // backup_order_put_response->coupon_code
    cJSON *coupon_code = cJSON_GetObjectItemCaseSensitive(backup_order_put_responseJSON, "couponCode");
    if (cJSON_IsNull(coupon_code)) {
        coupon_code = NULL;
    }
    if (coupon_code) { 
    if(!cJSON_IsNumber(coupon_code))
    {
    goto end; //Numeric
    }
    }


    backup_order_put_response_local_var = backup_order_put_response_create_internal (
        _continue ? _continue->valueint : 0,
        errors ? errorsList : NULL,
        service_type ? service_type->valuedouble : 0,
        service_cost && !cJSON_IsNull(service_cost) ? strdup(service_cost->valuestring) : NULL,
        original_cost && !cJSON_IsNull(original_cost) ? strdup(original_cost->valuestring) : NULL,
        repeat_service_cost && !cJSON_IsNull(repeat_service_cost) ? strdup(repeat_service_cost->valuestring) : NULL,
        hostname && !cJSON_IsNull(hostname) ? strdup(hostname->valuestring) : NULL,
        password && !cJSON_IsNull(password) ? strdup(password->valuestring) : NULL,
        coupon && !cJSON_IsNull(coupon) ? strdup(coupon->valuestring) : NULL,
        coupon_code ? coupon_code->valuedouble : 0
        );

    return backup_order_put_response_local_var;
end:
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    return NULL;

}
