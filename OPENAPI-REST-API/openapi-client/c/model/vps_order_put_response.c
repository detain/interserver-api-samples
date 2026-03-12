#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_put_response.h"



static vps_order_put_response_t *vps_order_put_response_create_internal(
    int _continue,
    list_t *errors,
    int coupon_code,
    int service_cost,
    int slice_cost,
    int service_type,
    int repeat_slice_cost,
    int original_slice_cost,
    int original_cost,
    int repeat_service_cost,
    int monthly_service_cost,
    char *custid,
    char *os,
    char *slices,
    char *platform,
    char *controlpanel,
    int period,
    int location,
    char *version,
    char *hostname,
    char *coupon,
    char *rootpass
    ) {
    vps_order_put_response_t *vps_order_put_response_local_var = malloc(sizeof(vps_order_put_response_t));
    if (!vps_order_put_response_local_var) {
        return NULL;
    }
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

    vps_order_put_response_local_var->_library_owned = 1;
    return vps_order_put_response_local_var;
}

__attribute__((deprecated)) vps_order_put_response_t *vps_order_put_response_create(
    int _continue,
    list_t *errors,
    int coupon_code,
    int service_cost,
    int slice_cost,
    int service_type,
    int repeat_slice_cost,
    int original_slice_cost,
    int original_cost,
    int repeat_service_cost,
    int monthly_service_cost,
    char *custid,
    char *os,
    char *slices,
    char *platform,
    char *controlpanel,
    int period,
    int location,
    char *version,
    char *hostname,
    char *coupon,
    char *rootpass
    ) {
    return vps_order_put_response_create_internal (
        _continue,
        errors,
        coupon_code,
        service_cost,
        slice_cost,
        service_type,
        repeat_slice_cost,
        original_slice_cost,
        original_cost,
        repeat_service_cost,
        monthly_service_cost,
        custid,
        os,
        slices,
        platform,
        controlpanel,
        period,
        location,
        version,
        hostname,
        coupon,
        rootpass
        );
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
    if (vps_order_put_response->errors) {
        list_ForEach(listEntry, vps_order_put_response->errors) {
            any_type_free(listEntry->data);
        }
        list_freeList(vps_order_put_response->errors);
        vps_order_put_response->errors = NULL;
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
    if(cJSON_AddBoolToObject(item, "continue", vps_order_put_response->_continue) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "coupon_code", vps_order_put_response->coupon_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->service_cost
    if(vps_order_put_response->service_cost) {
    if(cJSON_AddNumberToObject(item, "service_cost", vps_order_put_response->service_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->slice_cost
    if(vps_order_put_response->slice_cost) {
    if(cJSON_AddNumberToObject(item, "slice_cost", vps_order_put_response->slice_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->service_type
    if(vps_order_put_response->service_type) {
    if(cJSON_AddNumberToObject(item, "service_type", vps_order_put_response->service_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->repeat_slice_cost
    if(vps_order_put_response->repeat_slice_cost) {
    if(cJSON_AddNumberToObject(item, "repeat_slice_cost", vps_order_put_response->repeat_slice_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->original_slice_cost
    if(vps_order_put_response->original_slice_cost) {
    if(cJSON_AddNumberToObject(item, "original_slice_cost", vps_order_put_response->original_slice_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->original_cost
    if(vps_order_put_response->original_cost) {
    if(cJSON_AddNumberToObject(item, "original_cost", vps_order_put_response->original_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->repeat_service_cost
    if(vps_order_put_response->repeat_service_cost) {
    if(cJSON_AddNumberToObject(item, "repeat_service_cost", vps_order_put_response->repeat_service_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->monthly_service_cost
    if(vps_order_put_response->monthly_service_cost) {
    if(cJSON_AddNumberToObject(item, "monthly_service_cost", vps_order_put_response->monthly_service_cost) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "period", vps_order_put_response->period) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_order_put_response->location
    if(vps_order_put_response->location) {
    if(cJSON_AddNumberToObject(item, "location", vps_order_put_response->location) == NULL) {
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

    // define the local list for vps_order_put_response->errors
    list_t *errorsList = NULL;

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


    vps_order_put_response_local_var = vps_order_put_response_create_internal (
        _continue ? _continue->valueint : 0,
        errors ? errorsList : NULL,
        coupon_code ? coupon_code->valuedouble : 0,
        service_cost ? service_cost->valuedouble : 0,
        slice_cost ? slice_cost->valuedouble : 0,
        service_type ? service_type->valuedouble : 0,
        repeat_slice_cost ? repeat_slice_cost->valuedouble : 0,
        original_slice_cost ? original_slice_cost->valuedouble : 0,
        original_cost ? original_cost->valuedouble : 0,
        repeat_service_cost ? repeat_service_cost->valuedouble : 0,
        monthly_service_cost ? monthly_service_cost->valuedouble : 0,
        custid && !cJSON_IsNull(custid) ? strdup(custid->valuestring) : NULL,
        os && !cJSON_IsNull(os) ? strdup(os->valuestring) : NULL,
        slices && !cJSON_IsNull(slices) ? strdup(slices->valuestring) : NULL,
        platform && !cJSON_IsNull(platform) ? strdup(platform->valuestring) : NULL,
        controlpanel && !cJSON_IsNull(controlpanel) ? strdup(controlpanel->valuestring) : NULL,
        period ? period->valuedouble : 0,
        location ? location->valuedouble : 0,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL,
        hostname && !cJSON_IsNull(hostname) ? strdup(hostname->valuestring) : NULL,
        coupon && !cJSON_IsNull(coupon) ? strdup(coupon->valuestring) : NULL,
        rootpass && !cJSON_IsNull(rootpass) ? strdup(rootpass->valuestring) : NULL
        );

    return vps_order_put_response_local_var;
end:
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            any_type_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    return NULL;

}
