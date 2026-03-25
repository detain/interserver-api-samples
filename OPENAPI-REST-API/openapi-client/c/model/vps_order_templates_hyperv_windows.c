#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_templates_hyperv_windows.h"



static vps_order_templates_hyperv_windows_t *vps_order_templates_hyperv_windows_create_internal(
    char *windows2019_standard,
    char *windows2022
    ) {
    vps_order_templates_hyperv_windows_t *vps_order_templates_hyperv_windows_local_var = malloc(sizeof(vps_order_templates_hyperv_windows_t));
    if (!vps_order_templates_hyperv_windows_local_var) {
        return NULL;
    }
    memset(vps_order_templates_hyperv_windows_local_var, 0, sizeof(vps_order_templates_hyperv_windows_t));
    vps_order_templates_hyperv_windows_local_var->_library_owned = 1;
    vps_order_templates_hyperv_windows_local_var->windows2019_standard = windows2019_standard;
    vps_order_templates_hyperv_windows_local_var->windows2022 = windows2022;
    return vps_order_templates_hyperv_windows_local_var;
}

__attribute__((deprecated)) vps_order_templates_hyperv_windows_t *vps_order_templates_hyperv_windows_create(
    char *windows2019_standard,
    char *windows2022
    ) {
    vps_order_templates_hyperv_windows_t *result = vps_order_templates_hyperv_windows_create_internal (
        windows2019_standard,
        windows2022
        );
    if (!result) {
    }
    return result;
}

void vps_order_templates_hyperv_windows_free(vps_order_templates_hyperv_windows_t *vps_order_templates_hyperv_windows) {
    if(NULL == vps_order_templates_hyperv_windows){
        return ;
    }
    if(vps_order_templates_hyperv_windows->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_templates_hyperv_windows_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order_templates_hyperv_windows->windows2019_standard) {
        free(vps_order_templates_hyperv_windows->windows2019_standard);
        vps_order_templates_hyperv_windows->windows2019_standard = NULL;
    }
    if (vps_order_templates_hyperv_windows->windows2022) {
        free(vps_order_templates_hyperv_windows->windows2022);
        vps_order_templates_hyperv_windows->windows2022 = NULL;
    }
    free(vps_order_templates_hyperv_windows);
}

cJSON *vps_order_templates_hyperv_windows_convertToJSON(vps_order_templates_hyperv_windows_t *vps_order_templates_hyperv_windows) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_templates_hyperv_windows->windows2019_standard
    if(vps_order_templates_hyperv_windows->windows2019_standard) {
    if(cJSON_AddStringToObject(item, "Windows2019Standard", vps_order_templates_hyperv_windows->windows2019_standard) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_templates_hyperv_windows->windows2022
    if(vps_order_templates_hyperv_windows->windows2022) {
    if(cJSON_AddStringToObject(item, "Windows2022", vps_order_templates_hyperv_windows->windows2022) == NULL) {
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

vps_order_templates_hyperv_windows_t *vps_order_templates_hyperv_windows_parseFromJSON(cJSON *vps_order_templates_hyperv_windowsJSON){

    vps_order_templates_hyperv_windows_t *vps_order_templates_hyperv_windows_local_var = NULL;

    char *windows2019_standard_local_str = NULL;

    char *windows2022_local_str = NULL;

    // vps_order_templates_hyperv_windows->windows2019_standard
    cJSON *windows2019_standard = cJSON_GetObjectItemCaseSensitive(vps_order_templates_hyperv_windowsJSON, "Windows2019Standard");
    if (cJSON_IsNull(windows2019_standard)) {
        windows2019_standard = NULL;
    }
    if (windows2019_standard) { 
    if(!cJSON_IsString(windows2019_standard) && !cJSON_IsNull(windows2019_standard))
    {
    goto end; //String
    }
    }

    // vps_order_templates_hyperv_windows->windows2022
    cJSON *windows2022 = cJSON_GetObjectItemCaseSensitive(vps_order_templates_hyperv_windowsJSON, "Windows2022");
    if (cJSON_IsNull(windows2022)) {
        windows2022 = NULL;
    }
    if (windows2022) { 
    if(!cJSON_IsString(windows2022) && !cJSON_IsNull(windows2022))
    {
    goto end; //String
    }
    }


    if (windows2019_standard && !cJSON_IsNull(windows2019_standard)) windows2019_standard_local_str = strdup(windows2019_standard->valuestring);
    if (windows2022 && !cJSON_IsNull(windows2022)) windows2022_local_str = strdup(windows2022->valuestring);

    vps_order_templates_hyperv_windows_local_var = vps_order_templates_hyperv_windows_create_internal (
        windows2019_standard_local_str,
        windows2022_local_str
        );

    if (!vps_order_templates_hyperv_windows_local_var) {
        goto end;
    }

    return vps_order_templates_hyperv_windows_local_var;
end:
    if (windows2019_standard_local_str) {
        free(windows2019_standard_local_str);
        windows2019_standard_local_str = NULL;
    }
    if (windows2022_local_str) {
        free(windows2022_local_str);
        windows2022_local_str = NULL;
    }
    return NULL;

}
