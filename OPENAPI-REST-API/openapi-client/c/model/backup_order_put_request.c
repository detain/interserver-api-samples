#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_order_put_request.h"



static backup_order_put_request_t *backup_order_put_request_create_internal(
    int validate_only,
    int service_type,
    char *coupon
    ) {
    backup_order_put_request_t *backup_order_put_request_local_var = malloc(sizeof(backup_order_put_request_t));
    if (!backup_order_put_request_local_var) {
        return NULL;
    }
    backup_order_put_request_local_var->validate_only = validate_only;
    backup_order_put_request_local_var->service_type = service_type;
    backup_order_put_request_local_var->coupon = coupon;

    backup_order_put_request_local_var->_library_owned = 1;
    return backup_order_put_request_local_var;
}

__attribute__((deprecated)) backup_order_put_request_t *backup_order_put_request_create(
    int validate_only,
    int service_type,
    char *coupon
    ) {
    return backup_order_put_request_create_internal (
        validate_only,
        service_type,
        coupon
        );
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
    if(cJSON_AddBoolToObject(item, "validateOnly", backup_order_put_request->validate_only) == NULL) {
    goto fail; //Bool
    }
    }


    // backup_order_put_request->service_type
    if(backup_order_put_request->service_type) {
    if(cJSON_AddNumberToObject(item, "serviceType", backup_order_put_request->service_type) == NULL) {
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


    backup_order_put_request_local_var = backup_order_put_request_create_internal (
        validate_only ? validate_only->valueint : 0,
        service_type ? service_type->valuedouble : 0,
        coupon && !cJSON_IsNull(coupon) ? strdup(coupon->valuestring) : NULL
        );

    return backup_order_put_request_local_var;
end:
    return NULL;

}
