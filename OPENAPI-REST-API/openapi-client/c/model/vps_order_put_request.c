#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_put_request.h"


char* vps_order_put_request_vps_platform_ToString(interserver_management_api_vps_order_put_request_VPSPLATFORM_e vps_platform) {
    char* vps_platformArray[] =  { "NULL", "kvm", "hyperv", "kvmstorage" };
    return vps_platformArray[vps_platform];
}

interserver_management_api_vps_order_put_request_VPSPLATFORM_e vps_order_put_request_vps_platform_FromString(char* vps_platform){
    int stringToReturn = 0;
    char *vps_platformArray[] =  { "NULL", "kvm", "hyperv", "kvmstorage" };
    size_t sizeofArray = sizeof(vps_platformArray) / sizeof(vps_platformArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(vps_platform, vps_platformArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* vps_order_put_request_controlpanel_ToString(interserver_management_api_vps_order_put_request_CONTROLPANEL_e controlpanel) {
    char* controlpanelArray[] =  { "NULL", "none", "cpanel", "da" };
    return controlpanelArray[controlpanel];
}

interserver_management_api_vps_order_put_request_CONTROLPANEL_e vps_order_put_request_controlpanel_FromString(char* controlpanel){
    int stringToReturn = 0;
    char *controlpanelArray[] =  { "NULL", "none", "cpanel", "da" };
    size_t sizeofArray = sizeof(controlpanelArray) / sizeof(controlpanelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(controlpanel, controlpanelArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static vps_order_put_request_t *vps_order_put_request_create_internal(
    char *os_distro,
    int *slices,
    interserver_management_api_vps_order_put_request_VPSPLATFORM_e vps_platform,
    int *period,
    int *location,
    char *os_version,
    char *hostname,
    char *rootpass,
    interserver_management_api_vps_order_put_request_CONTROLPANEL_e controlpanel,
    char *coupon,
    char *comment
    ) {
    vps_order_put_request_t *vps_order_put_request_local_var = malloc(sizeof(vps_order_put_request_t));
    if (!vps_order_put_request_local_var) {
        return NULL;
    }
    memset(vps_order_put_request_local_var, 0, sizeof(vps_order_put_request_t));
    vps_order_put_request_local_var->_library_owned = 1;
    vps_order_put_request_local_var->os_distro = os_distro;
    vps_order_put_request_local_var->slices = slices;
    vps_order_put_request_local_var->vps_platform = vps_platform;
    vps_order_put_request_local_var->period = period;
    vps_order_put_request_local_var->location = location;
    vps_order_put_request_local_var->os_version = os_version;
    vps_order_put_request_local_var->hostname = hostname;
    vps_order_put_request_local_var->rootpass = rootpass;
    vps_order_put_request_local_var->controlpanel = controlpanel;
    vps_order_put_request_local_var->coupon = coupon;
    vps_order_put_request_local_var->comment = comment;
    return vps_order_put_request_local_var;
}

__attribute__((deprecated)) vps_order_put_request_t *vps_order_put_request_create(
    char *os_distro,
    int *slices,
    interserver_management_api_vps_order_put_request_VPSPLATFORM_e vps_platform,
    int *period,
    int *location,
    char *os_version,
    char *hostname,
    char *rootpass,
    interserver_management_api_vps_order_put_request_CONTROLPANEL_e controlpanel,
    char *coupon,
    char *comment
    ) {
    int *slices_copy = NULL;
    if (slices) {
        slices_copy = malloc(sizeof(int));
        if (slices_copy) *slices_copy = *slices;
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
    vps_order_put_request_t *result = vps_order_put_request_create_internal (
        os_distro,
        slices_copy,
        vps_platform,
        period_copy,
        location_copy,
        os_version,
        hostname,
        rootpass,
        controlpanel,
        coupon,
        comment
        );
    if (!result) {
        free(slices_copy);
        free(period_copy);
        free(location_copy);
    }
    return result;
}

void vps_order_put_request_free(vps_order_put_request_t *vps_order_put_request) {
    if(NULL == vps_order_put_request){
        return ;
    }
    if(vps_order_put_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_put_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order_put_request->os_distro) {
        free(vps_order_put_request->os_distro);
        vps_order_put_request->os_distro = NULL;
    }
    if (vps_order_put_request->slices) {
        free(vps_order_put_request->slices);
        vps_order_put_request->slices = NULL;
    }
    if (vps_order_put_request->period) {
        free(vps_order_put_request->period);
        vps_order_put_request->period = NULL;
    }
    if (vps_order_put_request->location) {
        free(vps_order_put_request->location);
        vps_order_put_request->location = NULL;
    }
    if (vps_order_put_request->os_version) {
        free(vps_order_put_request->os_version);
        vps_order_put_request->os_version = NULL;
    }
    if (vps_order_put_request->hostname) {
        free(vps_order_put_request->hostname);
        vps_order_put_request->hostname = NULL;
    }
    if (vps_order_put_request->rootpass) {
        free(vps_order_put_request->rootpass);
        vps_order_put_request->rootpass = NULL;
    }
    if (vps_order_put_request->coupon) {
        free(vps_order_put_request->coupon);
        vps_order_put_request->coupon = NULL;
    }
    if (vps_order_put_request->comment) {
        free(vps_order_put_request->comment);
        vps_order_put_request->comment = NULL;
    }
    free(vps_order_put_request);
}

cJSON *vps_order_put_request_convertToJSON(vps_order_put_request_t *vps_order_put_request) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_put_request->os_distro
    if (!vps_order_put_request->os_distro) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "osDistro", vps_order_put_request->os_distro) == NULL) {
    goto fail; //String
    }


    // vps_order_put_request->slices
    if (!vps_order_put_request->slices) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "slices", *vps_order_put_request->slices) == NULL) {
    goto fail; //Numeric
    }


    // vps_order_put_request->vps_platform
    if (interserver_management_api_vps_order_put_request_VPSPLATFORM_NULL == vps_order_put_request->vps_platform) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "vpsPlatform", vps_order_put_request_vps_platform_ToString(vps_order_put_request->vps_platform)) == NULL)
    {
    goto fail; //Enum
    }


    // vps_order_put_request->period
    if (!vps_order_put_request->period) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "period", *vps_order_put_request->period) == NULL) {
    goto fail; //Numeric
    }


    // vps_order_put_request->location
    if (!vps_order_put_request->location) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "location", *vps_order_put_request->location) == NULL) {
    goto fail; //Numeric
    }


    // vps_order_put_request->os_version
    if (!vps_order_put_request->os_version) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "osVersion", vps_order_put_request->os_version) == NULL) {
    goto fail; //String
    }


    // vps_order_put_request->hostname
    if (!vps_order_put_request->hostname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "hostname", vps_order_put_request->hostname) == NULL) {
    goto fail; //String
    }


    // vps_order_put_request->rootpass
    if (!vps_order_put_request->rootpass) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "rootpass", vps_order_put_request->rootpass) == NULL) {
    goto fail; //String
    }


    // vps_order_put_request->controlpanel
    if(vps_order_put_request->controlpanel != interserver_management_api_vps_order_put_request_CONTROLPANEL_NULL) {
    if(cJSON_AddStringToObject(item, "controlpanel", vps_order_put_request_controlpanel_ToString(vps_order_put_request->controlpanel)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // vps_order_put_request->coupon
    if(vps_order_put_request->coupon) {
    if(cJSON_AddStringToObject(item, "coupon", vps_order_put_request->coupon) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_put_request->comment
    if(vps_order_put_request->comment) {
    if(cJSON_AddStringToObject(item, "comment", vps_order_put_request->comment) == NULL) {
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

vps_order_put_request_t *vps_order_put_request_parseFromJSON(cJSON *vps_order_put_requestJSON){

    vps_order_put_request_t *vps_order_put_request_local_var = NULL;

    char *os_distro_local_str = NULL;

    // define the local variable for vps_order_put_request->slices
    int *slices_local_var = NULL;

    // define the local variable for vps_order_put_request->period
    int *period_local_var = NULL;

    // define the local variable for vps_order_put_request->location
    int *location_local_var = NULL;

    char *os_version_local_str = NULL;

    char *hostname_local_str = NULL;

    char *rootpass_local_str = NULL;

    char *coupon_local_str = NULL;

    char *comment_local_str = NULL;

    // vps_order_put_request->os_distro
    cJSON *os_distro = cJSON_GetObjectItemCaseSensitive(vps_order_put_requestJSON, "osDistro");
    if (cJSON_IsNull(os_distro)) {
        os_distro = NULL;
    }
    if (!os_distro) {
        goto end;
    }

    
    if(!cJSON_IsString(os_distro))
    {
    goto end; //String
    }

    // vps_order_put_request->slices
    cJSON *slices = cJSON_GetObjectItemCaseSensitive(vps_order_put_requestJSON, "slices");
    if (cJSON_IsNull(slices)) {
        slices = NULL;
    }
    if (!slices) {
        goto end;
    }

    
    if(!cJSON_IsNumber(slices))
    {
    goto end; //Numeric
    }
    slices_local_var = malloc(sizeof(int));
    if(!slices_local_var)
    {
        goto end;
    }
    *slices_local_var = slices->valuedouble;

    // vps_order_put_request->vps_platform
    cJSON *vps_platform = cJSON_GetObjectItemCaseSensitive(vps_order_put_requestJSON, "vpsPlatform");
    if (cJSON_IsNull(vps_platform)) {
        vps_platform = NULL;
    }
    if (!vps_platform) {
        goto end;
    }

    interserver_management_api_vps_order_put_request_VPSPLATFORM_e vps_platformVariable;
    
    if(!cJSON_IsString(vps_platform))
    {
    goto end; //Enum
    }
    vps_platformVariable = vps_order_put_request_vps_platform_FromString(vps_platform->valuestring);

    // vps_order_put_request->period
    cJSON *period = cJSON_GetObjectItemCaseSensitive(vps_order_put_requestJSON, "period");
    if (cJSON_IsNull(period)) {
        period = NULL;
    }
    if (!period) {
        goto end;
    }

    
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

    // vps_order_put_request->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(vps_order_put_requestJSON, "location");
    if (cJSON_IsNull(location)) {
        location = NULL;
    }
    if (!location) {
        goto end;
    }

    
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

    // vps_order_put_request->os_version
    cJSON *os_version = cJSON_GetObjectItemCaseSensitive(vps_order_put_requestJSON, "osVersion");
    if (cJSON_IsNull(os_version)) {
        os_version = NULL;
    }
    if (!os_version) {
        goto end;
    }

    
    if(!cJSON_IsString(os_version))
    {
    goto end; //String
    }

    // vps_order_put_request->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(vps_order_put_requestJSON, "hostname");
    if (cJSON_IsNull(hostname)) {
        hostname = NULL;
    }
    if (!hostname) {
        goto end;
    }

    
    if(!cJSON_IsString(hostname))
    {
    goto end; //String
    }

    // vps_order_put_request->rootpass
    cJSON *rootpass = cJSON_GetObjectItemCaseSensitive(vps_order_put_requestJSON, "rootpass");
    if (cJSON_IsNull(rootpass)) {
        rootpass = NULL;
    }
    if (!rootpass) {
        goto end;
    }

    
    if(!cJSON_IsString(rootpass))
    {
    goto end; //String
    }

    // vps_order_put_request->controlpanel
    cJSON *controlpanel = cJSON_GetObjectItemCaseSensitive(vps_order_put_requestJSON, "controlpanel");
    if (cJSON_IsNull(controlpanel)) {
        controlpanel = NULL;
    }
    interserver_management_api_vps_order_put_request_CONTROLPANEL_e controlpanelVariable;
    if (controlpanel) { 
    if(!cJSON_IsString(controlpanel))
    {
    goto end; //Enum
    }
    controlpanelVariable = vps_order_put_request_controlpanel_FromString(controlpanel->valuestring);
    }

    // vps_order_put_request->coupon
    cJSON *coupon = cJSON_GetObjectItemCaseSensitive(vps_order_put_requestJSON, "coupon");
    if (cJSON_IsNull(coupon)) {
        coupon = NULL;
    }
    if (coupon) { 
    if(!cJSON_IsString(coupon) && !cJSON_IsNull(coupon))
    {
    goto end; //String
    }
    }

    // vps_order_put_request->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(vps_order_put_requestJSON, "comment");
    if (cJSON_IsNull(comment)) {
        comment = NULL;
    }
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }


    if (os_distro && !cJSON_IsNull(os_distro)) os_distro_local_str = strdup(os_distro->valuestring);
    if (os_version && !cJSON_IsNull(os_version)) os_version_local_str = strdup(os_version->valuestring);
    if (hostname && !cJSON_IsNull(hostname)) hostname_local_str = strdup(hostname->valuestring);
    if (rootpass && !cJSON_IsNull(rootpass)) rootpass_local_str = strdup(rootpass->valuestring);
    if (coupon && !cJSON_IsNull(coupon)) coupon_local_str = strdup(coupon->valuestring);
    if (comment && !cJSON_IsNull(comment)) comment_local_str = strdup(comment->valuestring);

    vps_order_put_request_local_var = vps_order_put_request_create_internal (
        os_distro_local_str,
        slices_local_var,
        vps_platformVariable,
        period_local_var,
        location_local_var,
        os_version_local_str,
        hostname_local_str,
        rootpass_local_str,
        controlpanel ? controlpanelVariable : interserver_management_api_vps_order_put_request_CONTROLPANEL_NULL,
        coupon_local_str,
        comment_local_str
        );

    if (!vps_order_put_request_local_var) {
        goto end;
    }

    return vps_order_put_request_local_var;
end:
    if (os_distro_local_str) {
        free(os_distro_local_str);
        os_distro_local_str = NULL;
    }
    if (slices_local_var) {
        free(slices_local_var);
        slices_local_var = NULL;
    }
    if (period_local_var) {
        free(period_local_var);
        period_local_var = NULL;
    }
    if (location_local_var) {
        free(location_local_var);
        location_local_var = NULL;
    }
    if (os_version_local_str) {
        free(os_version_local_str);
        os_version_local_str = NULL;
    }
    if (hostname_local_str) {
        free(hostname_local_str);
        hostname_local_str = NULL;
    }
    if (rootpass_local_str) {
        free(rootpass_local_str);
        rootpass_local_str = NULL;
    }
    if (coupon_local_str) {
        free(coupon_local_str);
        coupon_local_str = NULL;
    }
    if (comment_local_str) {
        free(comment_local_str);
        comment_local_str = NULL;
    }
    return NULL;

}
