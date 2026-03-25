#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_field_labels.h"



static server_order_field_labels_t *server_order_field_labels_create_internal(
    server_order_field_label_t *bandwidth,
    server_order_field_label_t *ips,
    server_order_field_label_t *os,
    server_order_field_label_t *cp,
    server_order_field_label_t *raid,
    server_order_field_label_t *memory,
    server_order_field_label_t *hd
    ) {
    server_order_field_labels_t *server_order_field_labels_local_var = malloc(sizeof(server_order_field_labels_t));
    if (!server_order_field_labels_local_var) {
        return NULL;
    }
    memset(server_order_field_labels_local_var, 0, sizeof(server_order_field_labels_t));
    server_order_field_labels_local_var->_library_owned = 1;
    server_order_field_labels_local_var->bandwidth = bandwidth;
    server_order_field_labels_local_var->ips = ips;
    server_order_field_labels_local_var->os = os;
    server_order_field_labels_local_var->cp = cp;
    server_order_field_labels_local_var->raid = raid;
    server_order_field_labels_local_var->memory = memory;
    server_order_field_labels_local_var->hd = hd;
    return server_order_field_labels_local_var;
}

__attribute__((deprecated)) server_order_field_labels_t *server_order_field_labels_create(
    server_order_field_label_t *bandwidth,
    server_order_field_label_t *ips,
    server_order_field_label_t *os,
    server_order_field_label_t *cp,
    server_order_field_label_t *raid,
    server_order_field_label_t *memory,
    server_order_field_label_t *hd
    ) {
    server_order_field_labels_t *result = server_order_field_labels_create_internal (
        bandwidth,
        ips,
        os,
        cp,
        raid,
        memory,
        hd
        );
    if (!result) {
    }
    return result;
}

void server_order_field_labels_free(server_order_field_labels_t *server_order_field_labels) {
    if(NULL == server_order_field_labels){
        return ;
    }
    if(server_order_field_labels->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_field_labels_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_field_labels->bandwidth) {
        server_order_field_label_free(server_order_field_labels->bandwidth);
        server_order_field_labels->bandwidth = NULL;
    }
    if (server_order_field_labels->ips) {
        server_order_field_label_free(server_order_field_labels->ips);
        server_order_field_labels->ips = NULL;
    }
    if (server_order_field_labels->os) {
        server_order_field_label_free(server_order_field_labels->os);
        server_order_field_labels->os = NULL;
    }
    if (server_order_field_labels->cp) {
        server_order_field_label_free(server_order_field_labels->cp);
        server_order_field_labels->cp = NULL;
    }
    if (server_order_field_labels->raid) {
        server_order_field_label_free(server_order_field_labels->raid);
        server_order_field_labels->raid = NULL;
    }
    if (server_order_field_labels->memory) {
        server_order_field_label_free(server_order_field_labels->memory);
        server_order_field_labels->memory = NULL;
    }
    if (server_order_field_labels->hd) {
        server_order_field_label_free(server_order_field_labels->hd);
        server_order_field_labels->hd = NULL;
    }
    free(server_order_field_labels);
}

cJSON *server_order_field_labels_convertToJSON(server_order_field_labels_t *server_order_field_labels) {
    cJSON *item = cJSON_CreateObject();

    // server_order_field_labels->bandwidth
    if(server_order_field_labels->bandwidth) {
    cJSON *bandwidth_local_JSON = server_order_field_label_convertToJSON(server_order_field_labels->bandwidth);
    if(bandwidth_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "bandwidth", bandwidth_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order_field_labels->ips
    if(server_order_field_labels->ips) {
    cJSON *ips_local_JSON = server_order_field_label_convertToJSON(server_order_field_labels->ips);
    if(ips_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ips", ips_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order_field_labels->os
    if(server_order_field_labels->os) {
    cJSON *os_local_JSON = server_order_field_label_convertToJSON(server_order_field_labels->os);
    if(os_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "os", os_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order_field_labels->cp
    if(server_order_field_labels->cp) {
    cJSON *cp_local_JSON = server_order_field_label_convertToJSON(server_order_field_labels->cp);
    if(cp_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cp", cp_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order_field_labels->raid
    if(server_order_field_labels->raid) {
    cJSON *raid_local_JSON = server_order_field_label_convertToJSON(server_order_field_labels->raid);
    if(raid_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "raid", raid_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order_field_labels->memory
    if(server_order_field_labels->memory) {
    cJSON *memory_local_JSON = server_order_field_label_convertToJSON(server_order_field_labels->memory);
    if(memory_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "memory", memory_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // server_order_field_labels->hd
    if(server_order_field_labels->hd) {
    cJSON *hd_local_JSON = server_order_field_label_convertToJSON(server_order_field_labels->hd);
    if(hd_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "hd", hd_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

server_order_field_labels_t *server_order_field_labels_parseFromJSON(cJSON *server_order_field_labelsJSON){

    server_order_field_labels_t *server_order_field_labels_local_var = NULL;

    // define the local variable for server_order_field_labels->bandwidth
    server_order_field_label_t *bandwidth_local_nonprim = NULL;

    // define the local variable for server_order_field_labels->ips
    server_order_field_label_t *ips_local_nonprim = NULL;

    // define the local variable for server_order_field_labels->os
    server_order_field_label_t *os_local_nonprim = NULL;

    // define the local variable for server_order_field_labels->cp
    server_order_field_label_t *cp_local_nonprim = NULL;

    // define the local variable for server_order_field_labels->raid
    server_order_field_label_t *raid_local_nonprim = NULL;

    // define the local variable for server_order_field_labels->memory
    server_order_field_label_t *memory_local_nonprim = NULL;

    // define the local variable for server_order_field_labels->hd
    server_order_field_label_t *hd_local_nonprim = NULL;

    // server_order_field_labels->bandwidth
    cJSON *bandwidth = cJSON_GetObjectItemCaseSensitive(server_order_field_labelsJSON, "bandwidth");
    if (cJSON_IsNull(bandwidth)) {
        bandwidth = NULL;
    }
    if (bandwidth) { 
    bandwidth_local_nonprim = server_order_field_label_parseFromJSON(bandwidth); //nonprimitive
    }

    // server_order_field_labels->ips
    cJSON *ips = cJSON_GetObjectItemCaseSensitive(server_order_field_labelsJSON, "ips");
    if (cJSON_IsNull(ips)) {
        ips = NULL;
    }
    if (ips) { 
    ips_local_nonprim = server_order_field_label_parseFromJSON(ips); //nonprimitive
    }

    // server_order_field_labels->os
    cJSON *os = cJSON_GetObjectItemCaseSensitive(server_order_field_labelsJSON, "os");
    if (cJSON_IsNull(os)) {
        os = NULL;
    }
    if (os) { 
    os_local_nonprim = server_order_field_label_parseFromJSON(os); //nonprimitive
    }

    // server_order_field_labels->cp
    cJSON *cp = cJSON_GetObjectItemCaseSensitive(server_order_field_labelsJSON, "cp");
    if (cJSON_IsNull(cp)) {
        cp = NULL;
    }
    if (cp) { 
    cp_local_nonprim = server_order_field_label_parseFromJSON(cp); //nonprimitive
    }

    // server_order_field_labels->raid
    cJSON *raid = cJSON_GetObjectItemCaseSensitive(server_order_field_labelsJSON, "raid");
    if (cJSON_IsNull(raid)) {
        raid = NULL;
    }
    if (raid) { 
    raid_local_nonprim = server_order_field_label_parseFromJSON(raid); //nonprimitive
    }

    // server_order_field_labels->memory
    cJSON *memory = cJSON_GetObjectItemCaseSensitive(server_order_field_labelsJSON, "memory");
    if (cJSON_IsNull(memory)) {
        memory = NULL;
    }
    if (memory) { 
    memory_local_nonprim = server_order_field_label_parseFromJSON(memory); //nonprimitive
    }

    // server_order_field_labels->hd
    cJSON *hd = cJSON_GetObjectItemCaseSensitive(server_order_field_labelsJSON, "hd");
    if (cJSON_IsNull(hd)) {
        hd = NULL;
    }
    if (hd) { 
    hd_local_nonprim = server_order_field_label_parseFromJSON(hd); //nonprimitive
    }



    server_order_field_labels_local_var = server_order_field_labels_create_internal (
        bandwidth ? bandwidth_local_nonprim : NULL,
        ips ? ips_local_nonprim : NULL,
        os ? os_local_nonprim : NULL,
        cp ? cp_local_nonprim : NULL,
        raid ? raid_local_nonprim : NULL,
        memory ? memory_local_nonprim : NULL,
        hd ? hd_local_nonprim : NULL
        );

    if (!server_order_field_labels_local_var) {
        goto end;
    }

    return server_order_field_labels_local_var;
end:
    if (bandwidth_local_nonprim) {
        server_order_field_label_free(bandwidth_local_nonprim);
        bandwidth_local_nonprim = NULL;
    }
    if (ips_local_nonprim) {
        server_order_field_label_free(ips_local_nonprim);
        ips_local_nonprim = NULL;
    }
    if (os_local_nonprim) {
        server_order_field_label_free(os_local_nonprim);
        os_local_nonprim = NULL;
    }
    if (cp_local_nonprim) {
        server_order_field_label_free(cp_local_nonprim);
        cp_local_nonprim = NULL;
    }
    if (raid_local_nonprim) {
        server_order_field_label_free(raid_local_nonprim);
        raid_local_nonprim = NULL;
    }
    if (memory_local_nonprim) {
        server_order_field_label_free(memory_local_nonprim);
        memory_local_nonprim = NULL;
    }
    if (hd_local_nonprim) {
        server_order_field_label_free(hd_local_nonprim);
        hd_local_nonprim = NULL;
    }
    return NULL;

}
