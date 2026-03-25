#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_put_response.h"



static vps_order_put_response_t *vps_order_put_response_create_internal(
    int *_continue,
    list_t *errors,
    int *coupon_code,
    int *service_cost,
    int *slice_cost,
    int *service_type,
    int *repeat_slice_cost,
    int *original_slice_cost,
    int *original_cost,
    int *repeat_service_cost,
    int *monthly_service_cost,
    char *custid,
    char *os,
    char *slices,
    char *platform,
    char *controlpanel,
    int *period,
    int *location,
    char *version,
    char *hostname,
    char *coupon,
    char *rootpass
    ) {
    vps_order_put_response_t *vps_order_put_response_local_var = malloc(sizeof(vps_order_put_response_t));
    if (!vps_order_put_response_local_var) {
        return NULL;
    }
    memset(vps_order_put_response_local_var, 0, sizeof(vps_order_put_response_t));
    vps_order_put_response_local_var->_library_owned = 1;
    vps_order_put_response_local_var->_continue = _continue;
    vps_order_put_response_local_var->errors = errors;
    vps_order_put_response_local_var->coupon_code = coupon_code;
    vps_order_put_response_local_var->service_cost = service_cost;
    vps_order_put_response_local_var->slice_cost = slice_cost;
    vps_order_put_response_local_var->service_type = service_type;
    vps_order_put_response_local_var->repeat_slice_cost = repeat_slice_cost;
    vps_order_put_response_local_var->original_slice_cost = original_slice_cost;
    vps_order_put_response_local_var->original_cost = original_cost;
    vps_order_put_response_local_var->repeat_service_cost = repeat_service_cost;
    vps_order_put_response_local_var->monthly_service_cost = monthly_service_cost;
    vps_order_put_response_local_var->custid = custid;
    vps_order_put_response_local_var->os = os;
    vps_order_put_response_local_var->slices = slices;
    vps_order_put_response_local_var->platform = platform;
    vps_order_put_response_local_var->controlpanel = controlpanel;
    vps_order_put_response_local_var->period = period;
    vps_order_put_response_local_var->location = location;
    vps_order_put_response_local_var->version = version;
    vps_order_put_response_local_var->hostname = hostname;
    vps_order_put_response_local_var->coupon = coupon;
    vps_order_put_response_local_var->rootpass = rootpass;
    return vps_order_put_response_local_var;
}

__attribute__((deprecated)) vps_order_put_response_t *vps_order_put_response_create(
    int *_continue,
    list_t *errors,
    int *coupon_code,
    int *service_cost,
    int *slice_cost,
    int *service_type,
    int *repeat_slice_cost,
    int *original_slice_cost,
    int *original_cost,
    int *repeat_service_cost,
    int *monthly_service_cost,
    char *custid,
    char *os,
    char *slices,
    char *platform,
    char *controlpanel,
    int *period,
    int *location,
    char *version,
    char *hostname,
    char *coupon,
    char *rootpass
    ) {
    int *_continue_copy = NULL;
    if (_continue) {
        _continue_copy = malloc(sizeof(int));
        if (_continue_copy) *_continue_copy = *_continue;
    }
    int *coupon_code_copy = NULL;
    if (coupon_code) {
        coupon_code_copy = malloc(sizeof(int));
        if (coupon_code_copy) *coupon_code_copy = *coupon_code;
    }
    int *service_cost_copy = NULL;
    if (service_cost) {
        service_cost_copy = malloc(sizeof(int));
        if (service_cost_copy) *service_cost_copy = *service_cost;
    }
    int *slice_cost_copy = NULL;
    if (slice_cost) {
        slice_cost_copy = malloc(sizeof(int));
        if (slice_cost_copy) *slice_cost_copy = *slice_cost;
    }
    int *service_type_copy = NULL;
    if (service_type) {
        service_type_copy = malloc(sizeof(int));
        if (service_type_copy) *service_type_copy = *service_type;
    }
    int *repeat_slice_cost_copy = NULL;
    if (repeat_slice_cost) {
        repeat_slice_cost_copy = malloc(sizeof(int));
        if (repeat_slice_cost_copy) *repeat_slice_cost_copy = *repeat_slice_cost;
    }
    int *original_slice_cost_copy = NULL;
    if (original_slice_cost) {
        original_slice_cost_copy = malloc(sizeof(int));
        if (original_slice_cost_copy) *original_slice_cost_copy = *original_slice_cost;
    }
    int *original_cost_copy = NULL;
    if (original_cost) {
        original_cost_copy = malloc(sizeof(int));
        if (original_cost_copy) *original_cost_copy = *original_cost;
    }
    int *repeat_service_cost_copy = NULL;
    if (repeat_service_cost) {
        repeat_service_cost_copy = malloc(sizeof(int));
        if (repeat_service_cost_copy) *repeat_service_cost_copy = *repeat_service_cost;
    }
    int *monthly_service_cost_copy = NULL;
    if (monthly_service_cost) {
        monthly_service_cost_copy = malloc(sizeof(int));
        if (monthly_service_cost_copy) *monthly_service_cost_copy = *monthly_service_cost;
    }
    int *period_copy = NULL;
    if (period) {
        period_copy = malloc(sizeof(int));
        if (period_copy) *period_copy = *period;
    }
    int *location_copy = NULL;
    if (location) {
        location_copy = malloc(sizeof(int));
        if (location_copy) *location_copy = *location;
    }
    vps_order_put_response_t *result = vps_order_put_response_create_internal (
        _continue_copy,
        errors,
        coupon_code_copy,
        service_cost_copy,
        slice_cost_copy,
        service_type_copy,
        repeat_slice_cost_copy,
        original_slice_cost_copy,
        original_cost_copy,
        repeat_service_cost_copy,
        monthly_service_cost_copy,
        custid,
        os,
        slices,
        platform,
        controlpanel,
        period_copy,
        location_copy,
        version,
        hostname,
        coupon,
        rootpass
        );
    if (!result) {
        free(_continue_copy);
        free(coupon_code_copy);
        free(service_cost_copy);
        free(slice_cost_copy);
        free(service_type_copy);
        free(repeat_slice_cost_copy);
        free(original_slice_cost_copy);
        free(original_cost_copy);
        free(repeat_service_cost_copy);
        free(monthly_service_cost_copy);
        free(period_copy);
        free(location_copy);
    }
    return result;
}

void vps_order_put_response_free(vps_order_put_response_t *vps_order_put_response) {
    if(NULL == vps_order_put_response){
        return ;
    }
    if(vps_order_put_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_put_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order_put_response->_continue) {
        free(vps_order_put_response->_continue);
        vps_order_put_response->_continue = NULL;
    }
    if (vps_order_put_response->errors) {
        list_ForEach(listEntry, vps_order_put_response->errors) {
            any_type_free(listEntry->data);
        }
        list_freeList(vps_order_put_response->errors);
        vps_order_put_response->errors = NULL;
    }
    if (vps_order_put_response->coupon_code) {
        free(vps_order_put_response->coupon_code);
        vps_order_put_response->coupon_code = NULL;
    }
    if (vps_order_put_response->service_cost) {
        free(vps_order_put_response->service_cost);
        vps_order_put_response->service_cost = NULL;
    }
    if (vps_order_put_response->slice_cost) {
        free(vps_order_put_response->slice_cost);
        vps_order_put_response->slice_cost = NULL;
    }
    if (vps_order_put_response->service_type) {
        free(vps_order_put_response->service_type);
        vps_order_put_response->service_type = NULL;
    }
    if (vps_order_put_response->repeat_slice_cost) {
        free(vps_order_put_response->repeat_slice_cost);
        vps_order_put_response->repeat_slice_cost = NULL;
    }
    if (vps_order_put_response->original_slice_cost) {
        free(vps_order_put_response->original_slice_cost);
        vps_order_put_response->original_slice_cost = NULL;
    }
    if (vps_order_put_response->original_cost) {
        free(vps_order_put_response->original_cost);
        vps_order_put_response->original_cost = NULL;
    }
    if (vps_order_put_response->repeat_service_cost) {
        free(vps_order_put_response->repeat_service_cost);
        vps_order_put_response->repeat_service_cost = NULL;
    }
    if (vps_order_put_response->monthly_service_cost) {
        free(vps_order_put_response->monthly_service_cost);
        vps_order_put_response->monthly_service_cost = NULL;
    }
    if (vps_order_put_response->custid) {
        free(vps_order_put_response->custid);
        vps_order_put_response->custid = NULL;
    }
    if (vps_order_put_response->os) {
        free(vps_order_put_response->os);
        vps_order_put_response->os = NULL;
    }
    if (vps_order_put_response->slices) {
        free(vps_order_put_response->slices);
        vps_order_put_response->slices = NULL;
    }
    if (vps_order_put_response->platform) {
        free(vps_order_put_response->platform);
        vps_order_put_response->platform = NULL;
    }
    if (vps_order_put_response->controlpanel) {
        free(vps_order_put_response->controlpanel);
        vps_order_put_response->controlpanel = NULL;
    }
    if (vps_order_put_response->period) {
        free(vps_order_put_response->period);
        vps_order_put_response->period = NULL;
    }
    if (vps_order_put_response->location) {
        free(vps_order_put_response->location);
        vps_order_put_response->location = NULL;
    }
    if (vps_order_put_response->version) {
        free(vps_order_put_response->version);
        vps_order_put_response->version = NULL;
    }
    if (vps_order_put_response->hostname) {
        free(vps_order_put_response->hostname);
        vps_order_put_response->hostname = NULL;
    }
    if (vps_order_put_response->coupon) {
        free(vps_order_put_response->coupon);
        vps_order_put_response->coupon = NULL;
    }
    if (vps_order_put_response->rootpass) {
        free(vps_order_put_response->rootpass);
        vps_order_put_response->rootpass = NULL;
    }
    free(vps_order_put_response);
}

cJSON *vps_order_put_response_convertToJSON(vps_order_put_response_t *vps_order_put_response) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_put_response->_continue
    if(vps_order_put_response->_continue) {
    if(cJSON_AddBoolToObject(item, "continue", *vps_order_put_response->_continue) == NULL) {
    goto fail; //Bool
    }
    }


    // vps_order_put_response->errors
    if(vps_order_put_response->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (vps_order_put_response->errors) {
    list_ForEach(errorsListEntry, vps_order_put_response->errors) {
    cJSON *itemLocal = any_type_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // vps_order_put_response->coupon_code
    if(vps_order_put_response->coupon_code) {
    if(cJSON_AddNumberToObject(item, "coupon_code", *vps_order_put_response->coupon_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->service_cost
    if(vps_order_put_response->service_cost) {
    if(cJSON_AddNumberToObject(item, "service_cost", *vps_order_put_response->service_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->slice_cost
    if(vps_order_put_response->slice_cost) {
    if(cJSON_AddNumberToObject(item, "slice_cost", *vps_order_put_response->slice_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->service_type
    if(vps_order_put_response->service_type) {
    if(cJSON_AddNumberToObject(item, "service_type", *vps_order_put_response->service_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->repeat_slice_cost
    if(vps_order_put_response->repeat_slice_cost) {
    if(cJSON_AddNumberToObject(item, "repeat_slice_cost", *vps_order_put_response->repeat_slice_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->original_slice_cost
    if(vps_order_put_response->original_slice_cost) {
    if(cJSON_AddNumberToObject(item, "original_slice_cost", *vps_order_put_response->original_slice_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->original_cost
    if(vps_order_put_response->original_cost) {
    if(cJSON_AddNumberToObject(item, "original_cost", *vps_order_put_response->original_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->repeat_service_cost
    if(vps_order_put_response->repeat_service_cost) {
    if(cJSON_AddNumberToObject(item, "repeat_service_cost", *vps_order_put_response->repeat_service_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->monthly_service_cost
    if(vps_order_put_response->monthly_service_cost) {
    if(cJSON_AddNumberToObject(item, "monthly_service_cost", *vps_order_put_response->monthly_service_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->custid
    if(vps_order_put_response->custid) {
    if(cJSON_AddStringToObject(item, "custid", vps_order_put_response->custid) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_put_response->os
    if(vps_order_put_response->os) {
    if(cJSON_AddStringToObject(item, "os", vps_order_put_response->os) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_put_response->slices
    if(vps_order_put_response->slices) {
    if(cJSON_AddStringToObject(item, "slices", vps_order_put_response->slices) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_put_response->platform
    if(vps_order_put_response->platform) {
    if(cJSON_AddStringToObject(item, "platform", vps_order_put_response->platform) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_put_response->controlpanel
    if(vps_order_put_response->controlpanel) {
    if(cJSON_AddStringToObject(item, "controlpanel", vps_order_put_response->controlpanel) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_put_response->period
    if(vps_order_put_response->period) {
    if(cJSON_AddNumberToObject(item, "period", *vps_order_put_response->period) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->location
    if(vps_order_put_response->location) {
    if(cJSON_AddNumberToObject(item, "location", *vps_order_put_response->location) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->version
    if(vps_order_put_response->version) {
    if(cJSON_AddStringToObject(item, "version", vps_order_put_response->version) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_put_response->hostname
    if(vps_order_put_response->hostname) {
    if(cJSON_AddStringToObject(item, "hostname", vps_order_put_response->hostname) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_put_response->coupon
    if(vps_order_put_response->coupon) {
    if(cJSON_AddStringToObject(item, "coupon", vps_order_put_response->coupon) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_put_response->rootpass
    if(vps_order_put_response->rootpass) {
    if(cJSON_AddStringToObject(item, "rootpass", vps_order_put_response->rootpass) == NULL) {
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

vps_order_put_response_t *vps_order_put_response_parseFromJSON(cJSON *vps_order_put_responseJSON){

    vps_order_put_response_t *vps_order_put_response_local_var = NULL;

    // define the local variable for vps_order_put_response->_continue
    int *_continue_local_var = NULL;

    // define the local list for vps_order_put_response->errors
    list_t *errorsList = NULL;

    // define the local variable for vps_order_put_response->coupon_code
    int *coupon_code_local_var = NULL;

    // define the local variable for vps_order_put_response->service_cost
    int *service_cost_local_var = NULL;

    // define the local variable for vps_order_put_response->slice_cost
    int *slice_cost_local_var = NULL;

    // define the local variable for vps_order_put_response->service_type
    int *service_type_local_var = NULL;

    // define the local variable for vps_order_put_response->repeat_slice_cost
    int *repeat_slice_cost_local_var = NULL;

    // define the local variable for vps_order_put_response->original_slice_cost
    int *original_slice_cost_local_var = NULL;

    // define the local variable for vps_order_put_response->original_cost
    int *original_cost_local_var = NULL;

    // define the local variable for vps_order_put_response->repeat_service_cost
    int *repeat_service_cost_local_var = NULL;

    // define the local variable for vps_order_put_response->monthly_service_cost
    int *monthly_service_cost_local_var = NULL;

    char *custid_local_str = NULL;

    char *os_local_str = NULL;

    char *slices_local_str = NULL;

    char *platform_local_str = NULL;

    char *controlpanel_local_str = NULL;

    // define the local variable for vps_order_put_response->period
    int *period_local_var = NULL;

    // define the local variable for vps_order_put_response->location
    int *location_local_var = NULL;

    char *version_local_str = NULL;

    char *hostname_local_str = NULL;

    char *coupon_local_str = NULL;

    char *rootpass_local_str = NULL;

    // vps_order_put_response->_continue
    cJSON *_continue = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "continue");
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

    // vps_order_put_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "errors");
    if (cJSON_IsNull(errors)) {
        errors = NULL;
    }
    if (errors) { 
    cJSON *errors_local_nonprimitive = NULL;
    if(!cJSON_IsArray(errors)){
        goto end; //nonprimitive container
    }

    errorsList = list_createList();

    cJSON_ArrayForEach(errors_local_nonprimitive,errors )
    {
        if(!cJSON_IsObject(errors_local_nonprimitive)){
            goto end;
        }
        any_type_t *errorsItem = any_type_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // vps_order_put_response->coupon_code
    cJSON *coupon_code = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "coupon_code");
    if (cJSON_IsNull(coupon_code)) {
        coupon_code = NULL;
    }
    if (coupon_code) { 
    if(!cJSON_IsNumber(coupon_code))
    {
    goto end; //Numeric
    }
    coupon_code_local_var = malloc(sizeof(int));
    if(!coupon_code_local_var)
    {
        goto end;
    }
    *coupon_code_local_var = coupon_code->valuedouble;
    }

    // vps_order_put_response->service_cost
    cJSON *service_cost = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "service_cost");
    if (cJSON_IsNull(service_cost)) {
        service_cost = NULL;
    }
    if (service_cost) { 
    if(!cJSON_IsNumber(service_cost))
    {
    goto end; //Numeric
    }
    service_cost_local_var = malloc(sizeof(int));
    if(!service_cost_local_var)
    {
        goto end;
    }
    *service_cost_local_var = service_cost->valuedouble;
    }

    // vps_order_put_response->slice_cost
    cJSON *slice_cost = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "slice_cost");
    if (cJSON_IsNull(slice_cost)) {
        slice_cost = NULL;
    }
    if (slice_cost) { 
    if(!cJSON_IsNumber(slice_cost))
    {
    goto end; //Numeric
    }
    slice_cost_local_var = malloc(sizeof(int));
    if(!slice_cost_local_var)
    {
        goto end;
    }
    *slice_cost_local_var = slice_cost->valuedouble;
    }

    // vps_order_put_response->service_type
    cJSON *service_type = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "service_type");
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

    // vps_order_put_response->repeat_slice_cost
    cJSON *repeat_slice_cost = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "repeat_slice_cost");
    if (cJSON_IsNull(repeat_slice_cost)) {
        repeat_slice_cost = NULL;
    }
    if (repeat_slice_cost) { 
    if(!cJSON_IsNumber(repeat_slice_cost))
    {
    goto end; //Numeric
    }
    repeat_slice_cost_local_var = malloc(sizeof(int));
    if(!repeat_slice_cost_local_var)
    {
        goto end;
    }
    *repeat_slice_cost_local_var = repeat_slice_cost->valuedouble;
    }

    // vps_order_put_response->original_slice_cost
    cJSON *original_slice_cost = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "original_slice_cost");
    if (cJSON_IsNull(original_slice_cost)) {
        original_slice_cost = NULL;
    }
    if (original_slice_cost) { 
    if(!cJSON_IsNumber(original_slice_cost))
    {
    goto end; //Numeric
    }
    original_slice_cost_local_var = malloc(sizeof(int));
    if(!original_slice_cost_local_var)
    {
        goto end;
    }
    *original_slice_cost_local_var = original_slice_cost->valuedouble;
    }

    // vps_order_put_response->original_cost
    cJSON *original_cost = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "original_cost");
    if (cJSON_IsNull(original_cost)) {
        original_cost = NULL;
    }
    if (original_cost) { 
    if(!cJSON_IsNumber(original_cost))
    {
    goto end; //Numeric
    }
    original_cost_local_var = malloc(sizeof(int));
    if(!original_cost_local_var)
    {
        goto end;
    }
    *original_cost_local_var = original_cost->valuedouble;
    }

    // vps_order_put_response->repeat_service_cost
    cJSON *repeat_service_cost = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "repeat_service_cost");
    if (cJSON_IsNull(repeat_service_cost)) {
        repeat_service_cost = NULL;
    }
    if (repeat_service_cost) { 
    if(!cJSON_IsNumber(repeat_service_cost))
    {
    goto end; //Numeric
    }
    repeat_service_cost_local_var = malloc(sizeof(int));
    if(!repeat_service_cost_local_var)
    {
        goto end;
    }
    *repeat_service_cost_local_var = repeat_service_cost->valuedouble;
    }

    // vps_order_put_response->monthly_service_cost
    cJSON *monthly_service_cost = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "monthly_service_cost");
    if (cJSON_IsNull(monthly_service_cost)) {
        monthly_service_cost = NULL;
    }
    if (monthly_service_cost) { 
    if(!cJSON_IsNumber(monthly_service_cost))
    {
    goto end; //Numeric
    }
    monthly_service_cost_local_var = malloc(sizeof(int));
    if(!monthly_service_cost_local_var)
    {
        goto end;
    }
    *monthly_service_cost_local_var = monthly_service_cost->valuedouble;
    }

    // vps_order_put_response->custid
    cJSON *custid = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "custid");
    if (cJSON_IsNull(custid)) {
        custid = NULL;
    }
    if (custid) { 
    if(!cJSON_IsString(custid) && !cJSON_IsNull(custid))
    {
    goto end; //String
    }
    }

    // vps_order_put_response->os
    cJSON *os = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "os");
    if (cJSON_IsNull(os)) {
        os = NULL;
    }
    if (os) { 
    if(!cJSON_IsString(os) && !cJSON_IsNull(os))
    {
    goto end; //String
    }
    }

    // vps_order_put_response->slices
    cJSON *slices = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "slices");
    if (cJSON_IsNull(slices)) {
        slices = NULL;
    }
    if (slices) { 
    if(!cJSON_IsString(slices) && !cJSON_IsNull(slices))
    {
    goto end; //String
    }
    }

    // vps_order_put_response->platform
    cJSON *platform = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "platform");
    if (cJSON_IsNull(platform)) {
        platform = NULL;
    }
    if (platform) { 
    if(!cJSON_IsString(platform) && !cJSON_IsNull(platform))
    {
    goto end; //String
    }
    }

    // vps_order_put_response->controlpanel
    cJSON *controlpanel = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "controlpanel");
    if (cJSON_IsNull(controlpanel)) {
        controlpanel = NULL;
    }
    if (controlpanel) { 
    if(!cJSON_IsString(controlpanel) && !cJSON_IsNull(controlpanel))
    {
    goto end; //String
    }
    }

    // vps_order_put_response->period
    cJSON *period = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "period");
    if (cJSON_IsNull(period)) {
        period = NULL;
    }
    if (period) { 
    if(!cJSON_IsNumber(period))
    {
    goto end; //Numeric
    }
    period_local_var = malloc(sizeof(int));
    if(!period_local_var)
    {
        goto end;
    }
    *period_local_var = period->valuedouble;
    }

    // vps_order_put_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "location");
    if (cJSON_IsNull(location)) {
        location = NULL;
    }
    if (location) { 
    if(!cJSON_IsNumber(location))
    {
    goto end; //Numeric
    }
    location_local_var = malloc(sizeof(int));
    if(!location_local_var)
    {
        goto end;
    }
    *location_local_var = location->valuedouble;
    }

    // vps_order_put_response->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "version");
    if (cJSON_IsNull(version)) {
        version = NULL;
    }
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }

    // vps_order_put_response->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "hostname");
    if (cJSON_IsNull(hostname)) {
        hostname = NULL;
    }
    if (hostname) { 
    if(!cJSON_IsString(hostname) && !cJSON_IsNull(hostname))
    {
    goto end; //String
    }
    }

    // vps_order_put_response->coupon
    cJSON *coupon = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "coupon");
    if (cJSON_IsNull(coupon)) {
        coupon = NULL;
    }
    if (coupon) { 
    if(!cJSON_IsString(coupon) && !cJSON_IsNull(coupon))
    {
    goto end; //String
    }
    }

    // vps_order_put_response->rootpass
    cJSON *rootpass = cJSON_GetObjectItemCaseSensitive(vps_order_put_responseJSON, "rootpass");
    if (cJSON_IsNull(rootpass)) {
        rootpass = NULL;
    }
    if (rootpass) { 
    if(!cJSON_IsString(rootpass) && !cJSON_IsNull(rootpass))
    {
    goto end; //String
    }
    }


    if (custid && !cJSON_IsNull(custid)) custid_local_str = strdup(custid->valuestring);
    if (os && !cJSON_IsNull(os)) os_local_str = strdup(os->valuestring);
    if (slices && !cJSON_IsNull(slices)) slices_local_str = strdup(slices->valuestring);
    if (platform && !cJSON_IsNull(platform)) platform_local_str = strdup(platform->valuestring);
    if (controlpanel && !cJSON_IsNull(controlpanel)) controlpanel_local_str = strdup(controlpanel->valuestring);
    if (version && !cJSON_IsNull(version)) version_local_str = strdup(version->valuestring);
    if (hostname && !cJSON_IsNull(hostname)) hostname_local_str = strdup(hostname->valuestring);
    if (coupon && !cJSON_IsNull(coupon)) coupon_local_str = strdup(coupon->valuestring);
    if (rootpass && !cJSON_IsNull(rootpass)) rootpass_local_str = strdup(rootpass->valuestring);

    vps_order_put_response_local_var = vps_order_put_response_create_internal (
        _continue_local_var,
        errors ? errorsList : NULL,
        coupon_code_local_var,
        service_cost_local_var,
        slice_cost_local_var,
        service_type_local_var,
        repeat_slice_cost_local_var,
        original_slice_cost_local_var,
        original_cost_local_var,
        repeat_service_cost_local_var,
        monthly_service_cost_local_var,
        custid_local_str,
        os_local_str,
        slices_local_str,
        platform_local_str,
        controlpanel_local_str,
        period_local_var,
        location_local_var,
        version_local_str,
        hostname_local_str,
        coupon_local_str,
        rootpass_local_str
        );

    if (!vps_order_put_response_local_var) {
        goto end;
    }

    return vps_order_put_response_local_var;
end:
    if (_continue_local_var) {
        free(_continue_local_var);
        _continue_local_var = NULL;
    }
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            any_type_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (coupon_code_local_var) {
        free(coupon_code_local_var);
        coupon_code_local_var = NULL;
    }
    if (service_cost_local_var) {
        free(service_cost_local_var);
        service_cost_local_var = NULL;
    }
    if (slice_cost_local_var) {
        free(slice_cost_local_var);
        slice_cost_local_var = NULL;
    }
    if (service_type_local_var) {
        free(service_type_local_var);
        service_type_local_var = NULL;
    }
    if (repeat_slice_cost_local_var) {
        free(repeat_slice_cost_local_var);
        repeat_slice_cost_local_var = NULL;
    }
    if (original_slice_cost_local_var) {
        free(original_slice_cost_local_var);
        original_slice_cost_local_var = NULL;
    }
    if (original_cost_local_var) {
        free(original_cost_local_var);
        original_cost_local_var = NULL;
    }
    if (repeat_service_cost_local_var) {
        free(repeat_service_cost_local_var);
        repeat_service_cost_local_var = NULL;
    }
    if (monthly_service_cost_local_var) {
        free(monthly_service_cost_local_var);
        monthly_service_cost_local_var = NULL;
    }
    if (custid_local_str) {
        free(custid_local_str);
        custid_local_str = NULL;
    }
    if (os_local_str) {
        free(os_local_str);
        os_local_str = NULL;
    }
    if (slices_local_str) {
        free(slices_local_str);
        slices_local_str = NULL;
    }
    if (platform_local_str) {
        free(platform_local_str);
        platform_local_str = NULL;
    }
    if (controlpanel_local_str) {
        free(controlpanel_local_str);
        controlpanel_local_str = NULL;
    }
    if (period_local_var) {
        free(period_local_var);
        period_local_var = NULL;
    }
    if (location_local_var) {
        free(location_local_var);
        location_local_var = NULL;
    }
    if (version_local_str) {
        free(version_local_str);
        version_local_str = NULL;
    }
    if (hostname_local_str) {
        free(hostname_local_str);
        hostname_local_str = NULL;
    }
    if (coupon_local_str) {
        free(coupon_local_str);
        coupon_local_str = NULL;
    }
    if (rootpass_local_str) {
        free(rootpass_local_str);
        rootpass_local_str = NULL;
    }
    return NULL;

}
