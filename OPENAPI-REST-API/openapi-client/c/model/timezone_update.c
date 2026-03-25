#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "timezone_update.h"



static timezone_update_t *timezone_update_create_internal(
    char *timezone
    ) {
    timezone_update_t *timezone_update_local_var = malloc(sizeof(timezone_update_t));
    if (!timezone_update_local_var) {
        return NULL;
    }
    memset(timezone_update_local_var, 0, sizeof(timezone_update_t));
    timezone_update_local_var->_library_owned = 1;
    timezone_update_local_var->timezone = timezone;
    return timezone_update_local_var;
}

__attribute__((deprecated)) timezone_update_t *timezone_update_create(
    char *timezone
    ) {
    timezone_update_t *result = timezone_update_create_internal (
        timezone
        );
    if (!result) {
    }
    return result;
}

void timezone_update_free(timezone_update_t *timezone_update) {
    if(NULL == timezone_update){
        return ;
    }
    if(timezone_update->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "timezone_update_free");
        return ;
    }
    listEntry_t *listEntry;
    if (timezone_update->timezone) {
        free(timezone_update->timezone);
        timezone_update->timezone = NULL;
    }
    free(timezone_update);
}

cJSON *timezone_update_convertToJSON(timezone_update_t *timezone_update) {
    cJSON *item = cJSON_CreateObject();

    // timezone_update->timezone
    if (!timezone_update->timezone) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "timezone", timezone_update->timezone) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

timezone_update_t *timezone_update_parseFromJSON(cJSON *timezone_updateJSON){

    timezone_update_t *timezone_update_local_var = NULL;

    char *timezone_local_str = NULL;

    // timezone_update->timezone
    cJSON *timezone = cJSON_GetObjectItemCaseSensitive(timezone_updateJSON, "timezone");
    if (cJSON_IsNull(timezone)) {
        timezone = NULL;
    }
    if (!timezone) {
        goto end;
    }

    
    if(!cJSON_IsString(timezone))
    {
    goto end; //String
    }


    if (timezone && !cJSON_IsNull(timezone)) timezone_local_str = strdup(timezone->valuestring);

    timezone_update_local_var = timezone_update_create_internal (
        timezone_local_str
        );

    if (!timezone_update_local_var) {
        goto end;
    }

    return timezone_update_local_var;
end:
    if (timezone_local_str) {
        free(timezone_local_str);
        timezone_local_str = NULL;
    }
    return NULL;

}
