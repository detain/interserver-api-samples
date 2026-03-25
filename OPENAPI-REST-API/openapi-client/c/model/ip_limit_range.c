#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ip_limit_range.h"



static ip_limit_range_t *ip_limit_range_create_internal(
    char *start,
    char *end
    ) {
    ip_limit_range_t *ip_limit_range_local_var = malloc(sizeof(ip_limit_range_t));
    if (!ip_limit_range_local_var) {
        return NULL;
    }
    memset(ip_limit_range_local_var, 0, sizeof(ip_limit_range_t));
    ip_limit_range_local_var->_library_owned = 1;
    ip_limit_range_local_var->start = start;
    ip_limit_range_local_var->end = end;
    return ip_limit_range_local_var;
}

__attribute__((deprecated)) ip_limit_range_t *ip_limit_range_create(
    char *start,
    char *end
    ) {
    ip_limit_range_t *result = ip_limit_range_create_internal (
        start,
        end
        );
    if (!result) {
    }
    return result;
}

void ip_limit_range_free(ip_limit_range_t *ip_limit_range) {
    if(NULL == ip_limit_range){
        return ;
    }
    if(ip_limit_range->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ip_limit_range_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ip_limit_range->start) {
        free(ip_limit_range->start);
        ip_limit_range->start = NULL;
    }
    if (ip_limit_range->end) {
        free(ip_limit_range->end);
        ip_limit_range->end = NULL;
    }
    free(ip_limit_range);
}

cJSON *ip_limit_range_convertToJSON(ip_limit_range_t *ip_limit_range) {
    cJSON *item = cJSON_CreateObject();

    // ip_limit_range->start
    if (!ip_limit_range->start) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "start", ip_limit_range->start) == NULL) {
    goto fail; //String
    }


    // ip_limit_range->end
    if (!ip_limit_range->end) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "end", ip_limit_range->end) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ip_limit_range_t *ip_limit_range_parseFromJSON(cJSON *ip_limit_rangeJSON){

    ip_limit_range_t *ip_limit_range_local_var = NULL;

    char *start_local_str = NULL;

    char *end_local_str = NULL;

    // ip_limit_range->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(ip_limit_rangeJSON, "start");
    if (cJSON_IsNull(start)) {
        start = NULL;
    }
    if (!start) {
        goto end;
    }

    
    if(!cJSON_IsString(start))
    {
    goto end; //String
    }

    // ip_limit_range->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(ip_limit_rangeJSON, "end");
    if (cJSON_IsNull(end)) {
        end = NULL;
    }
    if (!end) {
        goto end;
    }

    
    if(!cJSON_IsString(end))
    {
    goto end; //String
    }


    if (start && !cJSON_IsNull(start)) start_local_str = strdup(start->valuestring);
    if (end && !cJSON_IsNull(end)) end_local_str = strdup(end->valuestring);

    ip_limit_range_local_var = ip_limit_range_create_internal (
        start_local_str,
        end_local_str
        );

    if (!ip_limit_range_local_var) {
        goto end;
    }

    return ip_limit_range_local_var;
end:
    if (start_local_str) {
        free(start_local_str);
        start_local_str = NULL;
    }
    if (end_local_str) {
        free(end_local_str);
        end_local_str = NULL;
    }
    return NULL;

}
