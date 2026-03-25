#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_order_post_response_cj_params.h"



static backup_order_post_response_cj_params_t *backup_order_post_response_cj_params_create_internal(
    char *container_tag_id,
    char *cid,
    char *oid,
    char *type,
    char *item1,
    char *amt1,
    int *qty1,
    char *currency
    ) {
    backup_order_post_response_cj_params_t *backup_order_post_response_cj_params_local_var = malloc(sizeof(backup_order_post_response_cj_params_t));
    if (!backup_order_post_response_cj_params_local_var) {
        return NULL;
    }
    memset(backup_order_post_response_cj_params_local_var, 0, sizeof(backup_order_post_response_cj_params_t));
    backup_order_post_response_cj_params_local_var->_library_owned = 1;
    backup_order_post_response_cj_params_local_var->container_tag_id = container_tag_id;
    backup_order_post_response_cj_params_local_var->cid = cid;
    backup_order_post_response_cj_params_local_var->oid = oid;
    backup_order_post_response_cj_params_local_var->type = type;
    backup_order_post_response_cj_params_local_var->item1 = item1;
    backup_order_post_response_cj_params_local_var->amt1 = amt1;
    backup_order_post_response_cj_params_local_var->qty1 = qty1;
    backup_order_post_response_cj_params_local_var->currency = currency;
    return backup_order_post_response_cj_params_local_var;
}

__attribute__((deprecated)) backup_order_post_response_cj_params_t *backup_order_post_response_cj_params_create(
    char *container_tag_id,
    char *cid,
    char *oid,
    char *type,
    char *item1,
    char *amt1,
    int *qty1,
    char *currency
    ) {
    int *qty1_copy = NULL;
    if (qty1) {
        qty1_copy = malloc(sizeof(int));
        if (qty1_copy) *qty1_copy = *qty1;
    }
    backup_order_post_response_cj_params_t *result = backup_order_post_response_cj_params_create_internal (
        container_tag_id,
        cid,
        oid,
        type,
        item1,
        amt1,
        qty1_copy,
        currency
        );
    if (!result) {
        free(qty1_copy);
    }
    return result;
}

void backup_order_post_response_cj_params_free(backup_order_post_response_cj_params_t *backup_order_post_response_cj_params) {
    if(NULL == backup_order_post_response_cj_params){
        return ;
    }
    if(backup_order_post_response_cj_params->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_order_post_response_cj_params_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_order_post_response_cj_params->container_tag_id) {
        free(backup_order_post_response_cj_params->container_tag_id);
        backup_order_post_response_cj_params->container_tag_id = NULL;
    }
    if (backup_order_post_response_cj_params->cid) {
        free(backup_order_post_response_cj_params->cid);
        backup_order_post_response_cj_params->cid = NULL;
    }
    if (backup_order_post_response_cj_params->oid) {
        free(backup_order_post_response_cj_params->oid);
        backup_order_post_response_cj_params->oid = NULL;
    }
    if (backup_order_post_response_cj_params->type) {
        free(backup_order_post_response_cj_params->type);
        backup_order_post_response_cj_params->type = NULL;
    }
    if (backup_order_post_response_cj_params->item1) {
        free(backup_order_post_response_cj_params->item1);
        backup_order_post_response_cj_params->item1 = NULL;
    }
    if (backup_order_post_response_cj_params->amt1) {
        free(backup_order_post_response_cj_params->amt1);
        backup_order_post_response_cj_params->amt1 = NULL;
    }
    if (backup_order_post_response_cj_params->qty1) {
        free(backup_order_post_response_cj_params->qty1);
        backup_order_post_response_cj_params->qty1 = NULL;
    }
    if (backup_order_post_response_cj_params->currency) {
        free(backup_order_post_response_cj_params->currency);
        backup_order_post_response_cj_params->currency = NULL;
    }
    free(backup_order_post_response_cj_params);
}

cJSON *backup_order_post_response_cj_params_convertToJSON(backup_order_post_response_cj_params_t *backup_order_post_response_cj_params) {
    cJSON *item = cJSON_CreateObject();

    // backup_order_post_response_cj_params->container_tag_id
    if(backup_order_post_response_cj_params->container_tag_id) {
    if(cJSON_AddStringToObject(item, "containerTagId", backup_order_post_response_cj_params->container_tag_id) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_post_response_cj_params->cid
    if(backup_order_post_response_cj_params->cid) {
    if(cJSON_AddStringToObject(item, "CID", backup_order_post_response_cj_params->cid) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_post_response_cj_params->oid
    if(backup_order_post_response_cj_params->oid) {
    if(cJSON_AddStringToObject(item, "OID", backup_order_post_response_cj_params->oid) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_post_response_cj_params->type
    if(backup_order_post_response_cj_params->type) {
    if(cJSON_AddStringToObject(item, "TYPE", backup_order_post_response_cj_params->type) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_post_response_cj_params->item1
    if(backup_order_post_response_cj_params->item1) {
    if(cJSON_AddStringToObject(item, "ITEM1", backup_order_post_response_cj_params->item1) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_post_response_cj_params->amt1
    if(backup_order_post_response_cj_params->amt1) {
    if(cJSON_AddStringToObject(item, "AMT1", backup_order_post_response_cj_params->amt1) == NULL) {
    goto fail; //String
    }
    }


    // backup_order_post_response_cj_params->qty1
    if(backup_order_post_response_cj_params->qty1) {
    if(cJSON_AddNumberToObject(item, "QTY1", *backup_order_post_response_cj_params->qty1) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_order_post_response_cj_params->currency
    if(backup_order_post_response_cj_params->currency) {
    if(cJSON_AddStringToObject(item, "CURRENCY", backup_order_post_response_cj_params->currency) == NULL) {
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

backup_order_post_response_cj_params_t *backup_order_post_response_cj_params_parseFromJSON(cJSON *backup_order_post_response_cj_paramsJSON){

    backup_order_post_response_cj_params_t *backup_order_post_response_cj_params_local_var = NULL;

    char *container_tag_id_local_str = NULL;

    char *cid_local_str = NULL;

    char *oid_local_str = NULL;

    char *type_local_str = NULL;

    char *item1_local_str = NULL;

    char *amt1_local_str = NULL;

    // define the local variable for backup_order_post_response_cj_params->qty1
    int *qty1_local_var = NULL;

    char *currency_local_str = NULL;

    // backup_order_post_response_cj_params->container_tag_id
    cJSON *container_tag_id = cJSON_GetObjectItemCaseSensitive(backup_order_post_response_cj_paramsJSON, "containerTagId");
    if (cJSON_IsNull(container_tag_id)) {
        container_tag_id = NULL;
    }
    if (container_tag_id) { 
    if(!cJSON_IsString(container_tag_id) && !cJSON_IsNull(container_tag_id))
    {
    goto end; //String
    }
    }

    // backup_order_post_response_cj_params->cid
    cJSON *cid = cJSON_GetObjectItemCaseSensitive(backup_order_post_response_cj_paramsJSON, "CID");
    if (cJSON_IsNull(cid)) {
        cid = NULL;
    }
    if (cid) { 
    if(!cJSON_IsString(cid) && !cJSON_IsNull(cid))
    {
    goto end; //String
    }
    }

    // backup_order_post_response_cj_params->oid
    cJSON *oid = cJSON_GetObjectItemCaseSensitive(backup_order_post_response_cj_paramsJSON, "OID");
    if (cJSON_IsNull(oid)) {
        oid = NULL;
    }
    if (oid) { 
    if(!cJSON_IsString(oid) && !cJSON_IsNull(oid))
    {
    goto end; //String
    }
    }

    // backup_order_post_response_cj_params->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(backup_order_post_response_cj_paramsJSON, "TYPE");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // backup_order_post_response_cj_params->item1
    cJSON *item1 = cJSON_GetObjectItemCaseSensitive(backup_order_post_response_cj_paramsJSON, "ITEM1");
    if (cJSON_IsNull(item1)) {
        item1 = NULL;
    }
    if (item1) { 
    if(!cJSON_IsString(item1) && !cJSON_IsNull(item1))
    {
    goto end; //String
    }
    }

    // backup_order_post_response_cj_params->amt1
    cJSON *amt1 = cJSON_GetObjectItemCaseSensitive(backup_order_post_response_cj_paramsJSON, "AMT1");
    if (cJSON_IsNull(amt1)) {
        amt1 = NULL;
    }
    if (amt1) { 
    if(!cJSON_IsString(amt1) && !cJSON_IsNull(amt1))
    {
    goto end; //String
    }
    }

    // backup_order_post_response_cj_params->qty1
    cJSON *qty1 = cJSON_GetObjectItemCaseSensitive(backup_order_post_response_cj_paramsJSON, "QTY1");
    if (cJSON_IsNull(qty1)) {
        qty1 = NULL;
    }
    if (qty1) { 
    if(!cJSON_IsNumber(qty1))
    {
    goto end; //Numeric
    }
    qty1_local_var = malloc(sizeof(int));
    if(!qty1_local_var)
    {
        goto end;
    }
    *qty1_local_var = qty1->valuedouble;
    }

    // backup_order_post_response_cj_params->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(backup_order_post_response_cj_paramsJSON, "CURRENCY");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (currency) { 
    if(!cJSON_IsString(currency) && !cJSON_IsNull(currency))
    {
    goto end; //String
    }
    }


    if (container_tag_id && !cJSON_IsNull(container_tag_id)) container_tag_id_local_str = strdup(container_tag_id->valuestring);
    if (cid && !cJSON_IsNull(cid)) cid_local_str = strdup(cid->valuestring);
    if (oid && !cJSON_IsNull(oid)) oid_local_str = strdup(oid->valuestring);
    if (type && !cJSON_IsNull(type)) type_local_str = strdup(type->valuestring);
    if (item1 && !cJSON_IsNull(item1)) item1_local_str = strdup(item1->valuestring);
    if (amt1 && !cJSON_IsNull(amt1)) amt1_local_str = strdup(amt1->valuestring);
    if (currency && !cJSON_IsNull(currency)) currency_local_str = strdup(currency->valuestring);

    backup_order_post_response_cj_params_local_var = backup_order_post_response_cj_params_create_internal (
        container_tag_id_local_str,
        cid_local_str,
        oid_local_str,
        type_local_str,
        item1_local_str,
        amt1_local_str,
        qty1_local_var,
        currency_local_str
        );

    if (!backup_order_post_response_cj_params_local_var) {
        goto end;
    }

    return backup_order_post_response_cj_params_local_var;
end:
    if (container_tag_id_local_str) {
        free(container_tag_id_local_str);
        container_tag_id_local_str = NULL;
    }
    if (cid_local_str) {
        free(cid_local_str);
        cid_local_str = NULL;
    }
    if (oid_local_str) {
        free(oid_local_str);
        oid_local_str = NULL;
    }
    if (type_local_str) {
        free(type_local_str);
        type_local_str = NULL;
    }
    if (item1_local_str) {
        free(item1_local_str);
        item1_local_str = NULL;
    }
    if (amt1_local_str) {
        free(amt1_local_str);
        amt1_local_str = NULL;
    }
    if (qty1_local_var) {
        free(qty1_local_var);
        qty1_local_var = NULL;
    }
    if (currency_local_str) {
        free(currency_local_str);
        currency_local_str = NULL;
    }
    return NULL;

}
