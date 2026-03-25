#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_firewall_rule.h"


char* create_firewall_rule_protocol_id_ToString(interserver_management_api_create_firewall_rule_PROTOCOLID_e protocol_id) {
    char* protocol_idArray[] =  { "NULL", "1", "2" };
    return protocol_idArray[protocol_id];
}

interserver_management_api_create_firewall_rule_PROTOCOLID_e create_firewall_rule_protocol_id_FromString(char* protocol_id){
    int stringToReturn = 0;
    char *protocol_idArray[] =  { "NULL", "1", "2" };
    size_t sizeofArray = sizeof(protocol_idArray) / sizeof(protocol_idArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(protocol_id, protocol_idArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* create_firewall_rule_xdp_action_ToString(interserver_management_api_create_firewall_rule_XDPACTION_e xdp_action) {
    char* xdp_actionArray[] =  { "NULL", "0", "1" };
    return xdp_actionArray[xdp_action];
}

interserver_management_api_create_firewall_rule_XDPACTION_e create_firewall_rule_xdp_action_FromString(char* xdp_action){
    int stringToReturn = 0;
    char *xdp_actionArray[] =  { "NULL", "0", "1" };
    size_t sizeofArray = sizeof(xdp_actionArray) / sizeof(xdp_actionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(xdp_action, xdp_actionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static create_firewall_rule_t *create_firewall_rule_create_internal(
    int *protocol_id,
    int *xdp_action,
    int *destination_port,
    char *source_ip,
    int *source_port
    ) {
    create_firewall_rule_t *create_firewall_rule_local_var = malloc(sizeof(create_firewall_rule_t));
    if (!create_firewall_rule_local_var) {
        return NULL;
    }
    memset(create_firewall_rule_local_var, 0, sizeof(create_firewall_rule_t));
    create_firewall_rule_local_var->_library_owned = 1;
    create_firewall_rule_local_var->protocol_id = protocol_id;
    create_firewall_rule_local_var->xdp_action = xdp_action;
    create_firewall_rule_local_var->destination_port = destination_port;
    create_firewall_rule_local_var->source_ip = source_ip;
    create_firewall_rule_local_var->source_port = source_port;
    return create_firewall_rule_local_var;
}

__attribute__((deprecated)) create_firewall_rule_t *create_firewall_rule_create(
    int *protocol_id,
    int *xdp_action,
    int *destination_port,
    char *source_ip,
    int *source_port
    ) {
    int *protocol_id_copy = NULL;
    if (protocol_id) {
        protocol_id_copy = malloc(sizeof(int));
        if (protocol_id_copy) *protocol_id_copy = *protocol_id;
    }
    int *xdp_action_copy = NULL;
    if (xdp_action) {
        xdp_action_copy = malloc(sizeof(int));
        if (xdp_action_copy) *xdp_action_copy = *xdp_action;
    }
    int *destination_port_copy = NULL;
    if (destination_port) {
        destination_port_copy = malloc(sizeof(int));
        if (destination_port_copy) *destination_port_copy = *destination_port;
    }
    int *source_port_copy = NULL;
    if (source_port) {
        source_port_copy = malloc(sizeof(int));
        if (source_port_copy) *source_port_copy = *source_port;
    }
    create_firewall_rule_t *result = create_firewall_rule_create_internal (
        protocol_id_copy,
        xdp_action_copy,
        destination_port_copy,
        source_ip,
        source_port_copy
        );
    if (!result) {
        free(protocol_id_copy);
        free(xdp_action_copy);
        free(destination_port_copy);
        free(source_port_copy);
    }
    return result;
}

void create_firewall_rule_free(create_firewall_rule_t *create_firewall_rule) {
    if(NULL == create_firewall_rule){
        return ;
    }
    if(create_firewall_rule->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "create_firewall_rule_free");
        return ;
    }
    listEntry_t *listEntry;
    if (create_firewall_rule->protocol_id) {
        free(create_firewall_rule->protocol_id);
        create_firewall_rule->protocol_id = NULL;
    }
    if (create_firewall_rule->xdp_action) {
        free(create_firewall_rule->xdp_action);
        create_firewall_rule->xdp_action = NULL;
    }
    if (create_firewall_rule->destination_port) {
        free(create_firewall_rule->destination_port);
        create_firewall_rule->destination_port = NULL;
    }
    if (create_firewall_rule->source_ip) {
        free(create_firewall_rule->source_ip);
        create_firewall_rule->source_ip = NULL;
    }
    if (create_firewall_rule->source_port) {
        free(create_firewall_rule->source_port);
        create_firewall_rule->source_port = NULL;
    }
    free(create_firewall_rule);
}

cJSON *create_firewall_rule_convertToJSON(create_firewall_rule_t *create_firewall_rule) {
    cJSON *item = cJSON_CreateObject();

    // create_firewall_rule->protocol_id
    if (interserver_management_api_create_firewall_rule_PROTOCOLID_NULL == create_firewall_rule->protocol_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "protocol_id", *create_firewall_rule->protocol_id) == NULL) {
    goto fail; //Numeric
    }


    // create_firewall_rule->xdp_action
    if (interserver_management_api_create_firewall_rule_XDPACTION_NULL == create_firewall_rule->xdp_action) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "xdp_action", *create_firewall_rule->xdp_action) == NULL) {
    goto fail; //Numeric
    }


    // create_firewall_rule->destination_port
    if(create_firewall_rule->destination_port) {
    if(cJSON_AddNumberToObject(item, "destination_port", *create_firewall_rule->destination_port) == NULL) {
    goto fail; //Numeric
    }
    }


    // create_firewall_rule->source_ip
    if(create_firewall_rule->source_ip) {
    if(cJSON_AddStringToObject(item, "source_ip", create_firewall_rule->source_ip) == NULL) {
    goto fail; //String
    }
    }


    // create_firewall_rule->source_port
    if(create_firewall_rule->source_port) {
    if(cJSON_AddNumberToObject(item, "source_port", *create_firewall_rule->source_port) == NULL) {
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

create_firewall_rule_t *create_firewall_rule_parseFromJSON(cJSON *create_firewall_ruleJSON){

    create_firewall_rule_t *create_firewall_rule_local_var = NULL;

    // define the local variable for create_firewall_rule->protocol_id
    int *protocol_id_local_var = NULL;

    // define the local variable for create_firewall_rule->xdp_action
    int *xdp_action_local_var = NULL;

    // define the local variable for create_firewall_rule->destination_port
    int *destination_port_local_var = NULL;

    char *source_ip_local_str = NULL;

    // define the local variable for create_firewall_rule->source_port
    int *source_port_local_var = NULL;

    // create_firewall_rule->protocol_id
    cJSON *protocol_id = cJSON_GetObjectItemCaseSensitive(create_firewall_ruleJSON, "protocol_id");
    if (cJSON_IsNull(protocol_id)) {
        protocol_id = NULL;
    }
    if (!protocol_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(protocol_id))
    {
    goto end; //Numeric
    }
    protocol_id_local_var = malloc(sizeof(int));
    if(!protocol_id_local_var)
    {
        goto end;
    }
    *protocol_id_local_var = protocol_id->valuedouble;

    // create_firewall_rule->xdp_action
    cJSON *xdp_action = cJSON_GetObjectItemCaseSensitive(create_firewall_ruleJSON, "xdp_action");
    if (cJSON_IsNull(xdp_action)) {
        xdp_action = NULL;
    }
    if (!xdp_action) {
        goto end;
    }

    
    if(!cJSON_IsNumber(xdp_action))
    {
    goto end; //Numeric
    }
    xdp_action_local_var = malloc(sizeof(int));
    if(!xdp_action_local_var)
    {
        goto end;
    }
    *xdp_action_local_var = xdp_action->valuedouble;

    // create_firewall_rule->destination_port
    cJSON *destination_port = cJSON_GetObjectItemCaseSensitive(create_firewall_ruleJSON, "destination_port");
    if (cJSON_IsNull(destination_port)) {
        destination_port = NULL;
    }
    if (destination_port) { 
    if(!cJSON_IsNumber(destination_port))
    {
    goto end; //Numeric
    }
    destination_port_local_var = malloc(sizeof(int));
    if(!destination_port_local_var)
    {
        goto end;
    }
    *destination_port_local_var = destination_port->valuedouble;
    }

    // create_firewall_rule->source_ip
    cJSON *source_ip = cJSON_GetObjectItemCaseSensitive(create_firewall_ruleJSON, "source_ip");
    if (cJSON_IsNull(source_ip)) {
        source_ip = NULL;
    }
    if (source_ip) { 
    if(!cJSON_IsString(source_ip) && !cJSON_IsNull(source_ip))
    {
    goto end; //String
    }
    }

    // create_firewall_rule->source_port
    cJSON *source_port = cJSON_GetObjectItemCaseSensitive(create_firewall_ruleJSON, "source_port");
    if (cJSON_IsNull(source_port)) {
        source_port = NULL;
    }
    if (source_port) { 
    if(!cJSON_IsNumber(source_port))
    {
    goto end; //Numeric
    }
    source_port_local_var = malloc(sizeof(int));
    if(!source_port_local_var)
    {
        goto end;
    }
    *source_port_local_var = source_port->valuedouble;
    }


    if (source_ip && !cJSON_IsNull(source_ip)) source_ip_local_str = strdup(source_ip->valuestring);

    create_firewall_rule_local_var = create_firewall_rule_create_internal (
        protocol_id_local_var,
        xdp_action_local_var,
        destination_port_local_var,
        source_ip_local_str,
        source_port_local_var
        );

    if (!create_firewall_rule_local_var) {
        goto end;
    }

    return create_firewall_rule_local_var;
end:
    if (protocol_id_local_var) {
        free(protocol_id_local_var);
        protocol_id_local_var = NULL;
    }
    if (xdp_action_local_var) {
        free(xdp_action_local_var);
        xdp_action_local_var = NULL;
    }
    if (destination_port_local_var) {
        free(destination_port_local_var);
        destination_port_local_var = NULL;
    }
    if (source_ip_local_str) {
        free(source_ip_local_str);
        source_ip_local_str = NULL;
    }
    if (source_port_local_var) {
        free(source_port_local_var);
        source_port_local_var = NULL;
    }
    return NULL;

}
