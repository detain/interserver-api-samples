#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_config_ids.h"



static server_order_config_ids_t *server_order_config_ids_create_internal(
    int memory,
    char *bandwidth,
    char *ips,
    char *os,
    int cp,
    char *raid,
    char *hd
    ) {
    server_order_config_ids_t *server_order_config_ids_local_var = malloc(sizeof(server_order_config_ids_t));
    if (!server_order_config_ids_local_var) {
        return NULL;
    }
    server_order_config_ids_local_var->memory = memory;
    server_order_config_ids_local_var->bandwidth = bandwidth;
    server_order_config_ids_local_var->ips = ips;
    server_order_config_ids_local_var->os = os;
    server_order_config_ids_local_var->cp = cp;
    server_order_config_ids_local_var->raid = raid;
    server_order_config_ids_local_var->hd = hd;

    server_order_config_ids_local_var->_library_owned = 1;
    return server_order_config_ids_local_var;
}

__attribute__((deprecated)) server_order_config_ids_t *server_order_config_ids_create(
    int memory,
    char *bandwidth,
    char *ips,
    char *os,
    int cp,
    char *raid,
    char *hd
    ) {
    return server_order_config_ids_create_internal (
        memory,
        bandwidth,
        ips,
        os,
        cp,
        raid,
        hd
        );
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
    if(cJSON_AddNumberToObject(item, "memory", server_order_config_ids->memory) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "cp", server_order_config_ids->cp) == NULL) {
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


    server_order_config_ids_local_var = server_order_config_ids_create_internal (
        memory ? memory->valuedouble : 0,
        bandwidth && !cJSON_IsNull(bandwidth) ? strdup(bandwidth->valuestring) : NULL,
        ips && !cJSON_IsNull(ips) ? strdup(ips->valuestring) : NULL,
        os && !cJSON_IsNull(os) ? strdup(os->valuestring) : NULL,
        cp ? cp->valuedouble : 0,
        raid && !cJSON_IsNull(raid) ? strdup(raid->valuestring) : NULL,
        hd && !cJSON_IsNull(hd) ? strdup(hd->valuestring) : NULL
        );

    return server_order_config_ids_local_var;
end:
    return NULL;

}
