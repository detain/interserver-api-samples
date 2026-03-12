#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "config_ids.h"



static config_ids_t *config_ids_create_internal(
    int memory,
    int hd,
    int bandwidth,
    int ips,
    int os,
    int cp,
    int raid
    ) {
    config_ids_t *config_ids_local_var = malloc(sizeof(config_ids_t));
    if (!config_ids_local_var) {
        return NULL;
    }
    config_ids_local_var->memory = memory;
    config_ids_local_var->hd = hd;
    config_ids_local_var->bandwidth = bandwidth;
    config_ids_local_var->ips = ips;
    config_ids_local_var->os = os;
    config_ids_local_var->cp = cp;
    config_ids_local_var->raid = raid;

    config_ids_local_var->_library_owned = 1;
    return config_ids_local_var;
}

__attribute__((deprecated)) config_ids_t *config_ids_create(
    int memory,
    int hd,
    int bandwidth,
    int ips,
    int os,
    int cp,
    int raid
    ) {
    return config_ids_create_internal (
        memory,
        hd,
        bandwidth,
        ips,
        os,
        cp,
        raid
        );
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
    free(config_ids);
}

cJSON *config_ids_convertToJSON(config_ids_t *config_ids) {
    cJSON *item = cJSON_CreateObject();

    // config_ids->memory
    if(config_ids->memory) {
    if(cJSON_AddNumberToObject(item, "memory", config_ids->memory) == NULL) {
    goto fail; //Numeric
    }
    }


    // config_ids->hd
    if(config_ids->hd) {
    if(cJSON_AddNumberToObject(item, "hd", config_ids->hd) == NULL) {
    goto fail; //Numeric
    }
    }


    // config_ids->bandwidth
    if(config_ids->bandwidth) {
    if(cJSON_AddNumberToObject(item, "bandwidth", config_ids->bandwidth) == NULL) {
    goto fail; //Numeric
    }
    }


    // config_ids->ips
    if(config_ids->ips) {
    if(cJSON_AddNumberToObject(item, "ips", config_ids->ips) == NULL) {
    goto fail; //Numeric
    }
    }


    // config_ids->os
    if(config_ids->os) {
    if(cJSON_AddNumberToObject(item, "os", config_ids->os) == NULL) {
    goto fail; //Numeric
    }
    }


    // config_ids->cp
    if(config_ids->cp) {
    if(cJSON_AddNumberToObject(item, "cp", config_ids->cp) == NULL) {
    goto fail; //Numeric
    }
    }


    // config_ids->raid
    if(config_ids->raid) {
    if(cJSON_AddNumberToObject(item, "raid", config_ids->raid) == NULL) {
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
    }


    config_ids_local_var = config_ids_create_internal (
        memory ? memory->valuedouble : 0,
        hd ? hd->valuedouble : 0,
        bandwidth ? bandwidth->valuedouble : 0,
        ips ? ips->valuedouble : 0,
        os ? os->valuedouble : 0,
        cp ? cp->valuedouble : 0,
        raid ? raid->valuedouble : 0
        );

    return config_ids_local_var;
end:
    return NULL;

}
