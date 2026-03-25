#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "delete_geo_firewall_rule.h"



static delete_geo_firewall_rule_t *delete_geo_firewall_rule_create_internal(
    int *rule_id
    ) {
    delete_geo_firewall_rule_t *delete_geo_firewall_rule_local_var = malloc(sizeof(delete_geo_firewall_rule_t));
    if (!delete_geo_firewall_rule_local_var) {
        return NULL;
    }
    memset(delete_geo_firewall_rule_local_var, 0, sizeof(delete_geo_firewall_rule_t));
    delete_geo_firewall_rule_local_var->_library_owned = 1;
    delete_geo_firewall_rule_local_var->rule_id = rule_id;
    return delete_geo_firewall_rule_local_var;
}

__attribute__((deprecated)) delete_geo_firewall_rule_t *delete_geo_firewall_rule_create(
    int *rule_id
    ) {
    int *rule_id_copy = NULL;
    if (rule_id) {
        rule_id_copy = malloc(sizeof(int));
        if (rule_id_copy) *rule_id_copy = *rule_id;
    }
    delete_geo_firewall_rule_t *result = delete_geo_firewall_rule_create_internal (
        rule_id_copy
        );
    if (!result) {
        free(rule_id_copy);
    }
    return result;
}

void delete_geo_firewall_rule_free(delete_geo_firewall_rule_t *delete_geo_firewall_rule) {
    if(NULL == delete_geo_firewall_rule){
        return ;
    }
    if(delete_geo_firewall_rule->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "delete_geo_firewall_rule_free");
        return ;
    }
    listEntry_t *listEntry;
    if (delete_geo_firewall_rule->rule_id) {
        free(delete_geo_firewall_rule->rule_id);
        delete_geo_firewall_rule->rule_id = NULL;
    }
    free(delete_geo_firewall_rule);
}

cJSON *delete_geo_firewall_rule_convertToJSON(delete_geo_firewall_rule_t *delete_geo_firewall_rule) {
    cJSON *item = cJSON_CreateObject();

    // delete_geo_firewall_rule->rule_id
    if (!delete_geo_firewall_rule->rule_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "rule_id", *delete_geo_firewall_rule->rule_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

delete_geo_firewall_rule_t *delete_geo_firewall_rule_parseFromJSON(cJSON *delete_geo_firewall_ruleJSON){

    delete_geo_firewall_rule_t *delete_geo_firewall_rule_local_var = NULL;

    // define the local variable for delete_geo_firewall_rule->rule_id
    int *rule_id_local_var = NULL;

    // delete_geo_firewall_rule->rule_id
    cJSON *rule_id = cJSON_GetObjectItemCaseSensitive(delete_geo_firewall_ruleJSON, "rule_id");
    if (cJSON_IsNull(rule_id)) {
        rule_id = NULL;
    }
    if (!rule_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(rule_id))
    {
    goto end; //Numeric
    }
    rule_id_local_var = malloc(sizeof(int));
    if(!rule_id_local_var)
    {
        goto end;
    }
    *rule_id_local_var = rule_id->valuedouble;



    delete_geo_firewall_rule_local_var = delete_geo_firewall_rule_create_internal (
        rule_id_local_var
        );

    if (!delete_geo_firewall_rule_local_var) {
        goto end;
    }

    return delete_geo_firewall_rule_local_var;
end:
    if (rule_id_local_var) {
        free(rule_id_local_var);
        rule_id_local_var = NULL;
    }
    return NULL;

}
