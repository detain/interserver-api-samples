#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "config_ids.h"



static config_ids_t *config_ids_create_internal(
    int *memory,
    int *hd,
    int *bandwidth,
    int *ips,
    int *os,
    int *cp,
    int *raid
    ) {
    config_ids_t *config_ids_local_var = malloc(sizeof(config_ids_t));
    if (!config_ids_local_var) {
        return NULL;
    }
    memset(config_ids_local_var, 0, sizeof(config_ids_t));
    config_ids_local_var->_library_owned = 1;
    config_ids_local_var->memory = memory;
    config_ids_local_var->hd = hd;
    config_ids_local_var->bandwidth = bandwidth;
    config_ids_local_var->ips = ips;
    config_ids_local_var->os = os;
    config_ids_local_var->cp = cp;
    config_ids_local_var->raid = raid;
    return config_ids_local_var;
}

__attribute__((deprecated)) config_ids_t *config_ids_create(
    int *memory,
    int *hd,
    int *bandwidth,
    int *ips,
    int *os,
    int *cp,
    int *raid
    ) {
    int *memory_copy = NULL;
    if (memory) {
        memory_copy = malloc(sizeof(int));
        if (memory_copy) *memory_copy = *memory;
    }
    int *hd_copy = NULL;
    if (hd) {
        hd_copy = malloc(sizeof(int));
        if (hd_copy) *hd_copy = *hd;
    }
    int *bandwidth_copy = NULL;
    if (bandwidth) {
        bandwidth_copy = malloc(sizeof(int));
        if (bandwidth_copy) *bandwidth_copy = *bandwidth;
    }
    int *ips_copy = NULL;
    if (ips) {
        ips_copy = malloc(sizeof(int));
        if (ips_copy) *ips_copy = *ips;
    }
    int *os_copy = NULL;
    if (os) {
        os_copy = malloc(sizeof(int));
        if (os_copy) *os_copy = *os;
    }
    int *cp_copy = NULL;
    if (cp) {
        cp_copy = malloc(sizeof(int));
        if (cp_copy) *cp_copy = *cp;
    }
    int *raid_copy = NULL;
    if (raid) {
        raid_copy = malloc(sizeof(int));
        if (raid_copy) *raid_copy = *raid;
    }
    config_ids_t *result = config_ids_create_internal (
        memory_copy,
        hd_copy,
        bandwidth_copy,
        ips_copy,
        os_copy,
        cp_copy,
        raid_copy
        );
    if (!result) {
        free(memory_copy);
        free(hd_copy);
        free(bandwidth_copy);
        free(ips_copy);
        free(os_copy);
        free(cp_copy);
        free(raid_copy);
    }
    return result;
}

void config_ids_free(config_ids_t *config_ids) {
    if(NULL == config_ids){
        return ;
    }
    if(config_ids->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "config_ids_free");
        return ;
    }
    listEntry_t *listEntry;
    if (config_ids->memory) {
        free(config_ids->memory);
        config_ids->memory = NULL;
    }
    if (config_ids->hd) {
        free(config_ids->hd);
        config_ids->hd = NULL;
    }
    if (config_ids->bandwidth) {
        free(config_ids->bandwidth);
        config_ids->bandwidth = NULL;
    }
    if (config_ids->ips) {
        free(config_ids->ips);
        config_ids->ips = NULL;
    }
    if (config_ids->os) {
        free(config_ids->os);
        config_ids->os = NULL;
    }
    if (config_ids->cp) {
        free(config_ids->cp);
        config_ids->cp = NULL;
    }
    if (config_ids->raid) {
        free(config_ids->raid);
        config_ids->raid = NULL;
    }
    free(config_ids);
}

cJSON *config_ids_convertToJSON(config_ids_t *config_ids) {
    cJSON *item = cJSON_CreateObject();

    // config_ids->memory
    if(config_ids->memory) {
    if(cJSON_AddNumberToObject(item, "memory", *config_ids->memory) == NULL) {
    goto fail; //Numeric
    }
    }


    // config_ids->hd
    if(config_ids->hd) {
    if(cJSON_AddNumberToObject(item, "hd", *config_ids->hd) == NULL) {
    goto fail; //Numeric
    }
    }


    // config_ids->bandwidth
    if(config_ids->bandwidth) {
    if(cJSON_AddNumberToObject(item, "bandwidth", *config_ids->bandwidth) == NULL) {
    goto fail; //Numeric
    }
    }


    // config_ids->ips
    if(config_ids->ips) {
    if(cJSON_AddNumberToObject(item, "ips", *config_ids->ips) == NULL) {
    goto fail; //Numeric
    }
    }


    // config_ids->os
    if(config_ids->os) {
    if(cJSON_AddNumberToObject(item, "os", *config_ids->os) == NULL) {
    goto fail; //Numeric
    }
    }


    // config_ids->cp
    if(config_ids->cp) {
    if(cJSON_AddNumberToObject(item, "cp", *config_ids->cp) == NULL) {
    goto fail; //Numeric
    }
    }


    // config_ids->raid
    if(config_ids->raid) {
    if(cJSON_AddNumberToObject(item, "raid", *config_ids->raid) == NULL) {
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

config_ids_t *config_ids_parseFromJSON(cJSON *config_idsJSON){

    config_ids_t *config_ids_local_var = NULL;

    // define the local variable for config_ids->memory
    int *memory_local_var = NULL;

    // define the local variable for config_ids->hd
    int *hd_local_var = NULL;

    // define the local variable for config_ids->bandwidth
    int *bandwidth_local_var = NULL;

    // define the local variable for config_ids->ips
    int *ips_local_var = NULL;

    // define the local variable for config_ids->os
    int *os_local_var = NULL;

    // define the local variable for config_ids->cp
    int *cp_local_var = NULL;

    // define the local variable for config_ids->raid
    int *raid_local_var = NULL;

    // config_ids->memory
    cJSON *memory = cJSON_GetObjectItemCaseSensitive(config_idsJSON, "memory");
    if (cJSON_IsNull(memory)) {
        memory = NULL;
    }
    if (memory) { 
    if(!cJSON_IsNumber(memory))
    {
    goto end; //Numeric
    }
    memory_local_var = malloc(sizeof(int));
    if(!memory_local_var)
    {
        goto end;
    }
    *memory_local_var = memory->valuedouble;
    }

    // config_ids->hd
    cJSON *hd = cJSON_GetObjectItemCaseSensitive(config_idsJSON, "hd");
    if (cJSON_IsNull(hd)) {
        hd = NULL;
    }
    if (hd) { 
    if(!cJSON_IsNumber(hd))
    {
    goto end; //Numeric
    }
    hd_local_var = malloc(sizeof(int));
    if(!hd_local_var)
    {
        goto end;
    }
    *hd_local_var = hd->valuedouble;
    }

    // config_ids->bandwidth
    cJSON *bandwidth = cJSON_GetObjectItemCaseSensitive(config_idsJSON, "bandwidth");
    if (cJSON_IsNull(bandwidth)) {
        bandwidth = NULL;
    }
    if (bandwidth) { 
    if(!cJSON_IsNumber(bandwidth))
    {
    goto end; //Numeric
    }
    bandwidth_local_var = malloc(sizeof(int));
    if(!bandwidth_local_var)
    {
        goto end;
    }
    *bandwidth_local_var = bandwidth->valuedouble;
    }

    // config_ids->ips
    cJSON *ips = cJSON_GetObjectItemCaseSensitive(config_idsJSON, "ips");
    if (cJSON_IsNull(ips)) {
        ips = NULL;
    }
    if (ips) { 
    if(!cJSON_IsNumber(ips))
    {
    goto end; //Numeric
    }
    ips_local_var = malloc(sizeof(int));
    if(!ips_local_var)
    {
        goto end;
    }
    *ips_local_var = ips->valuedouble;
    }

    // config_ids->os
    cJSON *os = cJSON_GetObjectItemCaseSensitive(config_idsJSON, "os");
    if (cJSON_IsNull(os)) {
        os = NULL;
    }
    if (os) { 
    if(!cJSON_IsNumber(os))
    {
    goto end; //Numeric
    }
    os_local_var = malloc(sizeof(int));
    if(!os_local_var)
    {
        goto end;
    }
    *os_local_var = os->valuedouble;
    }

    // config_ids->cp
    cJSON *cp = cJSON_GetObjectItemCaseSensitive(config_idsJSON, "cp");
    if (cJSON_IsNull(cp)) {
        cp = NULL;
    }
    if (cp) { 
    if(!cJSON_IsNumber(cp))
    {
    goto end; //Numeric
    }
    cp_local_var = malloc(sizeof(int));
    if(!cp_local_var)
    {
        goto end;
    }
    *cp_local_var = cp->valuedouble;
    }

    // config_ids->raid
    cJSON *raid = cJSON_GetObjectItemCaseSensitive(config_idsJSON, "raid");
    if (cJSON_IsNull(raid)) {
        raid = NULL;
    }
    if (raid) { 
    if(!cJSON_IsNumber(raid))
    {
    goto end; //Numeric
    }
    raid_local_var = malloc(sizeof(int));
    if(!raid_local_var)
    {
        goto end;
    }
    *raid_local_var = raid->valuedouble;
    }



    config_ids_local_var = config_ids_create_internal (
        memory_local_var,
        hd_local_var,
        bandwidth_local_var,
        ips_local_var,
        os_local_var,
        cp_local_var,
        raid_local_var
        );

    if (!config_ids_local_var) {
        goto end;
    }

    return config_ids_local_var;
end:
    if (memory_local_var) {
        free(memory_local_var);
        memory_local_var = NULL;
    }
    if (hd_local_var) {
        free(hd_local_var);
        hd_local_var = NULL;
    }
    if (bandwidth_local_var) {
        free(bandwidth_local_var);
        bandwidth_local_var = NULL;
    }
    if (ips_local_var) {
        free(ips_local_var);
        ips_local_var = NULL;
    }
    if (os_local_var) {
        free(os_local_var);
        os_local_var = NULL;
    }
    if (cp_local_var) {
        free(cp_local_var);
        cp_local_var = NULL;
    }
    if (raid_local_var) {
        free(raid_local_var);
        raid_local_var = NULL;
    }
    return NULL;

}
