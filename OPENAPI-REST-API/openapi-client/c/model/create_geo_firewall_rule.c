#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_geo_firewall_rule.h"


char* create_geo_firewall_rule_xdp_action_ToString(interserver_management_api_create_geo_firewall_rule_XDPACTION_e xdp_action) {
    char* xdp_actionArray[] =  { "NULL", "0", "1" };
    return xdp_actionArray[xdp_action];
}

interserver_management_api_create_geo_firewall_rule_XDPACTION_e create_geo_firewall_rule_xdp_action_FromString(char* xdp_action){
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

static create_geo_firewall_rule_t *create_geo_firewall_rule_create_internal(
    int xdp_action,
    int destination_port,
    int country_code,
    int asn
    ) {
    create_geo_firewall_rule_t *create_geo_firewall_rule_local_var = malloc(sizeof(create_geo_firewall_rule_t));
    if (!create_geo_firewall_rule_local_var) {
        return NULL;
    }
    create_geo_firewall_rule_local_var->xdp_action = xdp_action;
    create_geo_firewall_rule_local_var->destination_port = destination_port;
    create_geo_firewall_rule_local_var->country_code = country_code;
    create_geo_firewall_rule_local_var->asn = asn;

    create_geo_firewall_rule_local_var->_library_owned = 1;
    return create_geo_firewall_rule_local_var;
}

__attribute__((deprecated)) create_geo_firewall_rule_t *create_geo_firewall_rule_create(
    int xdp_action,
    int destination_port,
    int country_code,
    int asn
    ) {
    return create_geo_firewall_rule_create_internal (
        xdp_action,
        destination_port,
        country_code,
        asn
        );
}

void create_geo_firewall_rule_free(create_geo_firewall_rule_t *create_geo_firewall_rule) {
    if(NULL == create_geo_firewall_rule){
        return ;
    }
    if(create_geo_firewall_rule->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "create_geo_firewall_rule_free");
        return ;
    }
    listEntry_t *listEntry;
    free(create_geo_firewall_rule);
}

cJSON *create_geo_firewall_rule_convertToJSON(create_geo_firewall_rule_t *create_geo_firewall_rule) {
    cJSON *item = cJSON_CreateObject();

    // create_geo_firewall_rule->xdp_action
    if (interserver_management_api_create_geo_firewall_rule_XDPACTION_NULL == create_geo_firewall_rule->xdp_action) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "xdp_action", create_geo_firewall_rule->xdp_action) == NULL) {
    goto fail; //Numeric
    }


    // create_geo_firewall_rule->destination_port
    if(create_geo_firewall_rule->destination_port) {
    if(cJSON_AddNumberToObject(item, "destination_port", create_geo_firewall_rule->destination_port) == NULL) {
    goto fail; //Numeric
    }
    }


    // create_geo_firewall_rule->country_code
    if(create_geo_firewall_rule->country_code) {
    if(cJSON_AddNumberToObject(item, "country_code", create_geo_firewall_rule->country_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // create_geo_firewall_rule->asn
    if(create_geo_firewall_rule->asn) {
    if(cJSON_AddNumberToObject(item, "asn", create_geo_firewall_rule->asn) == NULL) {
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

create_geo_firewall_rule_t *create_geo_firewall_rule_parseFromJSON(cJSON *create_geo_firewall_ruleJSON){

    create_geo_firewall_rule_t *create_geo_firewall_rule_local_var = NULL;

    // create_geo_firewall_rule->xdp_action
    cJSON *xdp_action = cJSON_GetObjectItemCaseSensitive(create_geo_firewall_ruleJSON, "xdp_action");
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

    // create_geo_firewall_rule->destination_port
    cJSON *destination_port = cJSON_GetObjectItemCaseSensitive(create_geo_firewall_ruleJSON, "destination_port");
    if (cJSON_IsNull(destination_port)) {
        destination_port = NULL;
    }
    if (destination_port) { 
    if(!cJSON_IsNumber(destination_port))
    {
    goto end; //Numeric
    }
    }

    // create_geo_firewall_rule->country_code
    cJSON *country_code = cJSON_GetObjectItemCaseSensitive(create_geo_firewall_ruleJSON, "country_code");
    if (cJSON_IsNull(country_code)) {
        country_code = NULL;
    }
    if (country_code) { 
    if(!cJSON_IsNumber(country_code))
    {
    goto end; //Numeric
    }
    }

    // create_geo_firewall_rule->asn
    cJSON *asn = cJSON_GetObjectItemCaseSensitive(create_geo_firewall_ruleJSON, "asn");
    if (cJSON_IsNull(asn)) {
        asn = NULL;
    }
    if (asn) { 
    if(!cJSON_IsNumber(asn))
    {
    goto end; //Numeric
    }
    }


    create_geo_firewall_rule_local_var = create_geo_firewall_rule_create_internal (
        xdp_action->valuedouble,
        destination_port ? destination_port->valuedouble : 0,
        country_code ? country_code->valuedouble : 0,
        asn ? asn->valuedouble : 0
        );

    return create_geo_firewall_rule_local_var;
end:
    return NULL;

}
