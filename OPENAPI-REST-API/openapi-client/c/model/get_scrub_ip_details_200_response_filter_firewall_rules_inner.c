#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_scrub_ip_details_200_response_filter_firewall_rules_inner.h"



static get_scrub_ip_details_200_response_filter_firewall_rules_inner_t *get_scrub_ip_details_200_response_filter_firewall_rules_inner_create_internal(
    char *id,
    char *source_ip,
    char *destination_ip,
    char *protocol_id,
    char *source_port,
    char *destination_port,
    char *xdp_action,
    char *global_drop
    ) {
    get_scrub_ip_details_200_response_filter_firewall_rules_inner_t *get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var = malloc(sizeof(get_scrub_ip_details_200_response_filter_firewall_rules_inner_t));
    if (!get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var) {
        return NULL;
    }
    get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var->id = id;
    get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var->source_ip = source_ip;
    get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var->destination_ip = destination_ip;
    get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var->protocol_id = protocol_id;
    get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var->source_port = source_port;
    get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var->destination_port = destination_port;
    get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var->xdp_action = xdp_action;
    get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var->global_drop = global_drop;

    get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var->_library_owned = 1;
    return get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var;
}

__attribute__((deprecated)) get_scrub_ip_details_200_response_filter_firewall_rules_inner_t *get_scrub_ip_details_200_response_filter_firewall_rules_inner_create(
    char *id,
    char *source_ip,
    char *destination_ip,
    char *protocol_id,
    char *source_port,
    char *destination_port,
    char *xdp_action,
    char *global_drop
    ) {
    return get_scrub_ip_details_200_response_filter_firewall_rules_inner_create_internal (
        id,
        source_ip,
        destination_ip,
        protocol_id,
        source_port,
        destination_port,
        xdp_action,
        global_drop
        );
}

void get_scrub_ip_details_200_response_filter_firewall_rules_inner_free(get_scrub_ip_details_200_response_filter_firewall_rules_inner_t *get_scrub_ip_details_200_response_filter_firewall_rules_inner) {
    if(NULL == get_scrub_ip_details_200_response_filter_firewall_rules_inner){
        return ;
    }
    if(get_scrub_ip_details_200_response_filter_firewall_rules_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_scrub_ip_details_200_response_filter_firewall_rules_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_scrub_ip_details_200_response_filter_firewall_rules_inner->id) {
        free(get_scrub_ip_details_200_response_filter_firewall_rules_inner->id);
        get_scrub_ip_details_200_response_filter_firewall_rules_inner->id = NULL;
    }
    if (get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_ip) {
        free(get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_ip);
        get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_ip = NULL;
    }
    if (get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_ip) {
        free(get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_ip);
        get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_ip = NULL;
    }
    if (get_scrub_ip_details_200_response_filter_firewall_rules_inner->protocol_id) {
        free(get_scrub_ip_details_200_response_filter_firewall_rules_inner->protocol_id);
        get_scrub_ip_details_200_response_filter_firewall_rules_inner->protocol_id = NULL;
    }
    if (get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_port) {
        free(get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_port);
        get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_port = NULL;
    }
    if (get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_port) {
        free(get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_port);
        get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_port = NULL;
    }
    if (get_scrub_ip_details_200_response_filter_firewall_rules_inner->xdp_action) {
        free(get_scrub_ip_details_200_response_filter_firewall_rules_inner->xdp_action);
        get_scrub_ip_details_200_response_filter_firewall_rules_inner->xdp_action = NULL;
    }
    if (get_scrub_ip_details_200_response_filter_firewall_rules_inner->global_drop) {
        free(get_scrub_ip_details_200_response_filter_firewall_rules_inner->global_drop);
        get_scrub_ip_details_200_response_filter_firewall_rules_inner->global_drop = NULL;
    }
    free(get_scrub_ip_details_200_response_filter_firewall_rules_inner);
}

cJSON *get_scrub_ip_details_200_response_filter_firewall_rules_inner_convertToJSON(get_scrub_ip_details_200_response_filter_firewall_rules_inner_t *get_scrub_ip_details_200_response_filter_firewall_rules_inner) {
    cJSON *item = cJSON_CreateObject();

    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->id
    if(get_scrub_ip_details_200_response_filter_firewall_rules_inner->id) {
    if(cJSON_AddStringToObject(item, "id", get_scrub_ip_details_200_response_filter_firewall_rules_inner->id) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_ip
    if(get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_ip) {
    if(cJSON_AddStringToObject(item, "source_ip", get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_ip) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_ip
    if(get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_ip) {
    if(cJSON_AddStringToObject(item, "destination_ip", get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_ip) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->protocol_id
    if(get_scrub_ip_details_200_response_filter_firewall_rules_inner->protocol_id) {
    if(cJSON_AddStringToObject(item, "protocol_id", get_scrub_ip_details_200_response_filter_firewall_rules_inner->protocol_id) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_port
    if(get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_port) {
    if(cJSON_AddStringToObject(item, "source_port", get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_port) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_port
    if(get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_port) {
    if(cJSON_AddStringToObject(item, "destination_port", get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_port) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->xdp_action
    if(get_scrub_ip_details_200_response_filter_firewall_rules_inner->xdp_action) {
    if(cJSON_AddStringToObject(item, "xdp_action", get_scrub_ip_details_200_response_filter_firewall_rules_inner->xdp_action) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->global_drop
    if(get_scrub_ip_details_200_response_filter_firewall_rules_inner->global_drop) {
    if(cJSON_AddStringToObject(item, "global_drop", get_scrub_ip_details_200_response_filter_firewall_rules_inner->global_drop) == NULL) {
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

get_scrub_ip_details_200_response_filter_firewall_rules_inner_t *get_scrub_ip_details_200_response_filter_firewall_rules_inner_parseFromJSON(cJSON *get_scrub_ip_details_200_response_filter_firewall_rules_innerJSON){

    get_scrub_ip_details_200_response_filter_firewall_rules_inner_t *get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var = NULL;

    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_rules_innerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_ip
    cJSON *source_ip = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_rules_innerJSON, "source_ip");
    if (cJSON_IsNull(source_ip)) {
        source_ip = NULL;
    }
    if (source_ip) { 
    if(!cJSON_IsString(source_ip) && !cJSON_IsNull(source_ip))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_ip
    cJSON *destination_ip = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_rules_innerJSON, "destination_ip");
    if (cJSON_IsNull(destination_ip)) {
        destination_ip = NULL;
    }
    if (destination_ip) { 
    if(!cJSON_IsString(destination_ip) && !cJSON_IsNull(destination_ip))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->protocol_id
    cJSON *protocol_id = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_rules_innerJSON, "protocol_id");
    if (cJSON_IsNull(protocol_id)) {
        protocol_id = NULL;
    }
    if (protocol_id) { 
    if(!cJSON_IsString(protocol_id) && !cJSON_IsNull(protocol_id))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->source_port
    cJSON *source_port = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_rules_innerJSON, "source_port");
    if (cJSON_IsNull(source_port)) {
        source_port = NULL;
    }
    if (source_port) { 
    if(!cJSON_IsString(source_port) && !cJSON_IsNull(source_port))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->destination_port
    cJSON *destination_port = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_rules_innerJSON, "destination_port");
    if (cJSON_IsNull(destination_port)) {
        destination_port = NULL;
    }
    if (destination_port) { 
    if(!cJSON_IsString(destination_port) && !cJSON_IsNull(destination_port))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->xdp_action
    cJSON *xdp_action = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_rules_innerJSON, "xdp_action");
    if (cJSON_IsNull(xdp_action)) {
        xdp_action = NULL;
    }
    if (xdp_action) { 
    if(!cJSON_IsString(xdp_action) && !cJSON_IsNull(xdp_action))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall_rules_inner->global_drop
    cJSON *global_drop = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_rules_innerJSON, "global_drop");
    if (cJSON_IsNull(global_drop)) {
        global_drop = NULL;
    }
    if (global_drop) { 
    if(!cJSON_IsString(global_drop) && !cJSON_IsNull(global_drop))
    {
    goto end; //String
    }
    }


    get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var = get_scrub_ip_details_200_response_filter_firewall_rules_inner_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        source_ip && !cJSON_IsNull(source_ip) ? strdup(source_ip->valuestring) : NULL,
        destination_ip && !cJSON_IsNull(destination_ip) ? strdup(destination_ip->valuestring) : NULL,
        protocol_id && !cJSON_IsNull(protocol_id) ? strdup(protocol_id->valuestring) : NULL,
        source_port && !cJSON_IsNull(source_port) ? strdup(source_port->valuestring) : NULL,
        destination_port && !cJSON_IsNull(destination_port) ? strdup(destination_port->valuestring) : NULL,
        xdp_action && !cJSON_IsNull(xdp_action) ? strdup(xdp_action->valuestring) : NULL,
        global_drop && !cJSON_IsNull(global_drop) ? strdup(global_drop->valuestring) : NULL
        );

    return get_scrub_ip_details_200_response_filter_firewall_rules_inner_local_var;
end:
    return NULL;

}
