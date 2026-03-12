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
    int slices,
    interserver_management_api_vps_order_put_request_VPSPLATFORM_e vps_platform,
    int period,
    int location,
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

    vps_order_put_request_local_var->_library_owned = 1;
    return vps_order_put_request_local_var;
}

__attribute__((deprecated)) vps_order_put_request_t *vps_order_put_request_create(
    char *os_distro,
    int slices,
    interserver_management_api_vps_order_put_request_VPSPLATFORM_e vps_platform,
    int period,
    int location,
    char *os_version,
    char *hostname,
    char *rootpass,
    interserver_management_api_vps_order_put_request_CONTROLPANEL_e controlpanel,
    char *coupon,
    char *comment
    ) {
    return vps_order_put_request_create_internal (
        os_distro,
        slices,
        vps_platform,
        period,
        location,
        os_version,
        hostname,
        rootpass,
        controlpanel,
        coupon,
        comment
        );
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
    if(cJSON_AddNumberToObject(item, "slices", vps_order_put_request->slices) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "period", vps_order_put_request->period) == NULL) {
    goto fail; //Numeric
    }


    // vps_order_put_request->location
    if (!vps_order_put_request->location) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "location", vps_order_put_request->location) == NULL) {
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


    vps_order_put_request_local_var = vps_order_put_request_create_internal (
        strdup(os_distro->valuestring),
        slices->valuedouble,
        vps_platformVariable,
        period->valuedouble,
        location->valuedouble,
        strdup(os_version->valuestring),
        strdup(hostname->valuestring),
        strdup(rootpass->valuestring),
        controlpanel ? controlpanelVariable : interserver_management_api_vps_order_put_request_CONTROLPANEL_NULL,
        coupon && !cJSON_IsNull(coupon) ? strdup(coupon->valuestring) : NULL,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL
        );

    return vps_order_put_request_local_var;
end:
    return NULL;

}
