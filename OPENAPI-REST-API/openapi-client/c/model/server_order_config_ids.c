#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_config_ids.h"



static server_order_config_ids_t *server_order_config_ids_create_internal(
    int *memory,
    char *bandwidth,
    char *ips,
    char *os,
    int *cp,
    char *raid,
    char *hd
    ) {
    server_order_config_ids_t *server_order_config_ids_local_var = malloc(sizeof(server_order_config_ids_t));
    if (!server_order_config_ids_local_var) {
        return NULL;
    }
    memset(server_order_config_ids_local_var, 0, sizeof(server_order_config_ids_t));
    server_order_config_ids_local_var->_library_owned = 1;
    server_order_config_ids_local_var->memory = memory;
    server_order_config_ids_local_var->bandwidth = bandwidth;
    server_order_config_ids_local_var->ips = ips;
    server_order_config_ids_local_var->os = os;
    server_order_config_ids_local_var->cp = cp;
    server_order_config_ids_local_var->raid = raid;
    server_order_config_ids_local_var->hd = hd;
    return server_order_config_ids_local_var;
}

__attribute__((deprecated)) server_order_config_ids_t *server_order_config_ids_create(
    int *memory,
    char *bandwidth,
    char *ips,
    char *os,
    int *cp,
    char *raid,
    char *hd
    ) {
    int *memory_copy = NULL;
    if (memory) {
        memory_copy = malloc(sizeof(int));
        if (memory_copy) *memory_copy = *memory;
    }
    int *cp_copy = NULL;
    if (cp) {
        cp_copy = malloc(sizeof(int));
        if (cp_copy) *cp_copy = *cp;
    }
    server_order_config_ids_t *result = server_order_config_ids_create_internal (
        memory_copy,
        bandwidth,
        ips,
        os,
        cp_copy,
        raid,
        hd
        );
    if (!result) {
        free(memory_copy);
        free(cp_copy);
    }
    return result;
}

void server_order_config_ids_free(server_order_config_ids_t *server_order_config_ids) {
    if(NULL == server_order_config_ids){
        return ;
    }
    if(server_order_config_ids->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_config_ids_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_config_ids->memory) {
        free(server_order_config_ids->memory);
        server_order_config_ids->memory = NULL;
    }
    if (server_order_config_ids->bandwidth) {
        free(server_order_config_ids->bandwidth);
        server_order_config_ids->bandwidth = NULL;
    }
    if (server_order_config_ids->ips) {
        free(server_order_config_ids->ips);
        server_order_config_ids->ips = NULL;
    }
    if (server_order_config_ids->os) {
        free(server_order_config_ids->os);
        server_order_config_ids->os = NULL;
    }
    if (server_order_config_ids->cp) {
        free(server_order_config_ids->cp);
        server_order_config_ids->cp = NULL;
    }
    if (server_order_config_ids->raid) {
        free(server_order_config_ids->raid);
        server_order_config_ids->raid = NULL;
    }
    if (server_order_config_ids->hd) {
        free(server_order_config_ids->hd);
        server_order_config_ids->hd = NULL;
    }
    free(server_order_config_ids);
}

cJSON *server_order_config_ids_convertToJSON(server_order_config_ids_t *server_order_config_ids) {
    cJSON *item = cJSON_CreateObject();

    // server_order_config_ids->memory
    if(server_order_config_ids->memory) {
    if(cJSON_AddNumberToObject(item, "memory", *server_order_config_ids->memory) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order_config_ids->bandwidth
    if(server_order_config_ids->bandwidth) {
    if(cJSON_AddStringToObject(item, "bandwidth", server_order_config_ids->bandwidth) == NULL) {
    goto fail; //String
    }
    }


    // server_order_config_ids->ips
    if(server_order_config_ids->ips) {
    if(cJSON_AddStringToObject(item, "ips", server_order_config_ids->ips) == NULL) {
    goto fail; //String
    }
    }


    // server_order_config_ids->os
    if(server_order_config_ids->os) {
    if(cJSON_AddStringToObject(item, "os", server_order_config_ids->os) == NULL) {
    goto fail; //String
    }
    }


    // server_order_config_ids->cp
    if(server_order_config_ids->cp) {
    if(cJSON_AddNumberToObject(item, "cp", *server_order_config_ids->cp) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order_config_ids->raid
    if(server_order_config_ids->raid) {
    if(cJSON_AddStringToObject(item, "raid", server_order_config_ids->raid) == NULL) {
    goto fail; //String
    }
    }


    // server_order_config_ids->hd
    if(server_order_config_ids->hd) {
    if(cJSON_AddStringToObject(item, "hd", server_order_config_ids->hd) == NULL) {
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

server_order_config_ids_t *server_order_config_ids_parseFromJSON(cJSON *server_order_config_idsJSON){

    server_order_config_ids_t *server_order_config_ids_local_var = NULL;

    // define the local variable for server_order_config_ids->memory
    int *memory_local_var = NULL;

    char *bandwidth_local_str = NULL;

    char *ips_local_str = NULL;

    char *os_local_str = NULL;

    // define the local variable for server_order_config_ids->cp
    int *cp_local_var = NULL;

    char *raid_local_str = NULL;

    char *hd_local_str = NULL;

    // server_order_config_ids->memory
    cJSON *memory = cJSON_GetObjectItemCaseSensitive(server_order_config_idsJSON, "memory");
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

    // server_order_config_ids->bandwidth
    cJSON *bandwidth = cJSON_GetObjectItemCaseSensitive(server_order_config_idsJSON, "bandwidth");
    if (cJSON_IsNull(bandwidth)) {
        bandwidth = NULL;
    }
    if (bandwidth) { 
    if(!cJSON_IsString(bandwidth) && !cJSON_IsNull(bandwidth))
    {
    goto end; //String
    }
    }

    // server_order_config_ids->ips
    cJSON *ips = cJSON_GetObjectItemCaseSensitive(server_order_config_idsJSON, "ips");
    if (cJSON_IsNull(ips)) {
        ips = NULL;
    }
    if (ips) { 
    if(!cJSON_IsString(ips) && !cJSON_IsNull(ips))
    {
    goto end; //String
    }
    }

    // server_order_config_ids->os
    cJSON *os = cJSON_GetObjectItemCaseSensitive(server_order_config_idsJSON, "os");
    if (cJSON_IsNull(os)) {
        os = NULL;
    }
    if (os) { 
    if(!cJSON_IsString(os) && !cJSON_IsNull(os))
    {
    goto end; //String
    }
    }

    // server_order_config_ids->cp
    cJSON *cp = cJSON_GetObjectItemCaseSensitive(server_order_config_idsJSON, "cp");
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

    // server_order_config_ids->raid
    cJSON *raid = cJSON_GetObjectItemCaseSensitive(server_order_config_idsJSON, "raid");
    if (cJSON_IsNull(raid)) {
        raid = NULL;
    }
    if (raid) { 
    if(!cJSON_IsString(raid) && !cJSON_IsNull(raid))
    {
    goto end; //String
    }
    }

    // server_order_config_ids->hd
    cJSON *hd = cJSON_GetObjectItemCaseSensitive(server_order_config_idsJSON, "hd");
    if (cJSON_IsNull(hd)) {
        hd = NULL;
    }
    if (hd) { 
    if(!cJSON_IsString(hd) && !cJSON_IsNull(hd))
    {
    goto end; //String
    }
    }


    if (bandwidth && !cJSON_IsNull(bandwidth)) bandwidth_local_str = strdup(bandwidth->valuestring);
    if (ips && !cJSON_IsNull(ips)) ips_local_str = strdup(ips->valuestring);
    if (os && !cJSON_IsNull(os)) os_local_str = strdup(os->valuestring);
    if (raid && !cJSON_IsNull(raid)) raid_local_str = strdup(raid->valuestring);
    if (hd && !cJSON_IsNull(hd)) hd_local_str = strdup(hd->valuestring);

    server_order_config_ids_local_var = server_order_config_ids_create_internal (
        memory_local_var,
        bandwidth_local_str,
        ips_local_str,
        os_local_str,
        cp_local_var,
        raid_local_str,
        hd_local_str
        );

    if (!server_order_config_ids_local_var) {
        goto end;
    }

    return server_order_config_ids_local_var;
end:
    if (memory_local_var) {
        free(memory_local_var);
        memory_local_var = NULL;
    }
    if (bandwidth_local_str) {
        free(bandwidth_local_str);
        bandwidth_local_str = NULL;
    }
    if (ips_local_str) {
        free(ips_local_str);
        ips_local_str = NULL;
    }
    if (os_local_str) {
        free(os_local_str);
        os_local_str = NULL;
    }
    if (cp_local_var) {
        free(cp_local_var);
        cp_local_var = NULL;
    }
    if (raid_local_str) {
        free(raid_local_str);
        raid_local_str = NULL;
    }
    if (hd_local_str) {
        free(hd_local_str);
        hd_local_str = NULL;
    }
    return NULL;

}
