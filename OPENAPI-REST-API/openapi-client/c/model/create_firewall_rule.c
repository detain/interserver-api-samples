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
    int protocol_id,
    int xdp_action,
    int destination_port,
    char *source_ip,
    int source_port
    ) {
    create_firewall_rule_t *create_firewall_rule_local_var = malloc(sizeof(create_firewall_rule_t));
    if (!create_firewall_rule_local_var) {
        return NULL;
    }
    create_firewall_rule_local_var->protocol_id = protocol_id;
    create_firewall_rule_local_var->xdp_action = xdp_action;
    create_firewall_rule_local_var->destination_port = destination_port;
    create_firewall_rule_local_var->source_ip = source_ip;
    create_firewall_rule_local_var->source_port = source_port;

    create_firewall_rule_local_var->_library_owned = 1;
    return create_firewall_rule_local_var;
}

__attribute__((deprecated)) create_firewall_rule_t *create_firewall_rule_create(
    int protocol_id,
    int xdp_action,
    int destination_port,
    char *source_ip,
    int source_port
    ) {
    return create_firewall_rule_create_internal (
        protocol_id,
        xdp_action,
        destination_port,
        source_ip,
        source_port
        );
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
    if (create_firewall_rule->source_ip) {
        free(create_firewall_rule->source_ip);
        create_firewall_rule->source_ip = NULL;
    }
    free(create_firewall_rule);
}

cJSON *create_firewall_rule_convertToJSON(create_firewall_rule_t *create_firewall_rule) {
    cJSON *item = cJSON_CreateObject();

    // create_firewall_rule->protocol_id
    if (interserver_management_api_create_firewall_rule_PROTOCOLID_NULL == create_firewall_rule->protocol_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "protocol_id", create_firewall_rule->protocol_id) == NULL) {
    goto fail; //Numeric
    }


    // create_firewall_rule->xdp_action
    if (interserver_management_api_create_firewall_rule_XDPACTION_NULL == create_firewall_rule->xdp_action) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "xdp_action", create_firewall_rule->xdp_action) == NULL) {
    goto fail; //Numeric
    }


    // create_firewall_rule->destination_port
    if(create_firewall_rule->destination_port) {
    if(cJSON_AddNumberToObject(item, "destination_port", create_firewall_rule->destination_port) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "source_port", create_firewall_rule->source_port) == NULL) {
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
    }


    create_firewall_rule_local_var = create_firewall_rule_create_internal (
        protocol_id->valuedouble,
        xdp_action->valuedouble,
        destination_port ? destination_port->valuedouble : 0,
        source_ip && !cJSON_IsNull(source_ip) ? strdup(source_ip->valuestring) : NULL,
        source_port ? source_port->valuedouble : 0
        );

    return create_firewall_rule_local_var;
end:
    return NULL;

}
