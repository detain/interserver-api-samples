#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_order_put_request.h"



static backup_order_put_request_t *backup_order_put_request_create_internal(
    int *validate_only,
    int *service_type,
    char *coupon
    ) {
    backup_order_put_request_t *backup_order_put_request_local_var = malloc(sizeof(backup_order_put_request_t));
    if (!backup_order_put_request_local_var) {
        return NULL;
    }
    memset(backup_order_put_request_local_var, 0, sizeof(backup_order_put_request_t));
    backup_order_put_request_local_var->_library_owned = 1;
    backup_order_put_request_local_var->validate_only = validate_only;
    backup_order_put_request_local_var->service_type = service_type;
    backup_order_put_request_local_var->coupon = coupon;
    return backup_order_put_request_local_var;
}

__attribute__((deprecated)) backup_order_put_request_t *backup_order_put_request_create(
    int *validate_only,
    int *service_type,
    char *coupon
    ) {
    int *validate_only_copy = NULL;
    if (validate_only) {
        validate_only_copy = malloc(sizeof(int));
        if (validate_only_copy) *validate_only_copy = *validate_only;
    }
    int *service_type_copy = NULL;
    if (service_type) {
        service_type_copy = malloc(sizeof(int));
        if (service_type_copy) *service_type_copy = *service_type;
    }
    backup_order_put_request_t *result = backup_order_put_request_create_internal (
        validate_only_copy,
        service_type_copy,
        coupon
        );
    if (!result) {
        free(validate_only_copy);
        free(service_type_copy);
    }
    return result;
}

void backup_order_put_request_free(backup_order_put_request_t *backup_order_put_request) {
    if(NULL == backup_order_put_request){
        return ;
    }
    if(backup_order_put_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_order_put_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_order_put_request->validate_only) {
        free(backup_order_put_request->validate_only);
        backup_order_put_request->validate_only = NULL;
    }
    if (backup_order_put_request->service_type) {
        free(backup_order_put_request->service_type);
        backup_order_put_request->service_type = NULL;
    }
    if (backup_order_put_request->coupon) {
        free(backup_order_put_request->coupon);
        backup_order_put_request->coupon = NULL;
    }
    free(backup_order_put_request);
}

cJSON *backup_order_put_request_convertToJSON(backup_order_put_request_t *backup_order_put_request) {
    cJSON *item = cJSON_CreateObject();

    // backup_order_put_request->validate_only
    if(backup_order_put_request->validate_only) {
    if(cJSON_AddBoolToObject(item, "validateOnly", *backup_order_put_request->validate_only) == NULL) {
    goto fail; //Bool
    }
    }


    // backup_order_put_request->service_type
    if(backup_order_put_request->service_type) {
    if(cJSON_AddNumberToObject(item, "serviceType", *backup_order_put_request->service_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_order_put_request->coupon
    if(backup_order_put_request->coupon) {
    if(cJSON_AddStringToObject(item, "coupon", backup_order_put_request->coupon) == NULL) {
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

backup_order_put_request_t *backup_order_put_request_parseFromJSON(cJSON *backup_order_put_requestJSON){

    backup_order_put_request_t *backup_order_put_request_local_var = NULL;

    // define the local variable for backup_order_put_request->validate_only
    int *validate_only_local_var = NULL;

    // define the local variable for backup_order_put_request->service_type
    int *service_type_local_var = NULL;

    char *coupon_local_str = NULL;

    // backup_order_put_request->validate_only
    cJSON *validate_only = cJSON_GetObjectItemCaseSensitive(backup_order_put_requestJSON, "validateOnly");
    if (cJSON_IsNull(validate_only)) {
        validate_only = NULL;
    }
    if (validate_only) { 
    if(!cJSON_IsBool(validate_only))
    {
    goto end; //Bool
    }
    validate_only_local_var = malloc(sizeof(int));
    if(!validate_only_local_var)
    {
        goto end;
    }
    *validate_only_local_var = validate_only->valueint;
    }

    // backup_order_put_request->service_type
    cJSON *service_type = cJSON_GetObjectItemCaseSensitive(backup_order_put_requestJSON, "serviceType");
    if (cJSON_IsNull(service_type)) {
        service_type = NULL;
    }
    if (service_type) { 
    if(!cJSON_IsNumber(service_type))
    {
    goto end; //Numeric
    }
    service_type_local_var = malloc(sizeof(int));
    if(!service_type_local_var)
    {
        goto end;
    }
    *service_type_local_var = service_type->valuedouble;
    }

    // backup_order_put_request->coupon
    cJSON *coupon = cJSON_GetObjectItemCaseSensitive(backup_order_put_requestJSON, "coupon");
    if (cJSON_IsNull(coupon)) {
        coupon = NULL;
    }
    if (coupon) { 
    if(!cJSON_IsString(coupon) && !cJSON_IsNull(coupon))
    {
    goto end; //String
    }
    }


    if (coupon && !cJSON_IsNull(coupon)) coupon_local_str = strdup(coupon->valuestring);

    backup_order_put_request_local_var = backup_order_put_request_create_internal (
        validate_only_local_var,
        service_type_local_var,
        coupon_local_str
        );

    if (!backup_order_put_request_local_var) {
        goto end;
    }

    return backup_order_put_request_local_var;
end:
    if (validate_only_local_var) {
        free(validate_only_local_var);
        validate_only_local_var = NULL;
    }
    if (service_type_local_var) {
        free(service_type_local_var);
        service_type_local_var = NULL;
    }
    if (coupon_local_str) {
        free(coupon_local_str);
        coupon_local_str = NULL;
    }
    return NULL;

}
