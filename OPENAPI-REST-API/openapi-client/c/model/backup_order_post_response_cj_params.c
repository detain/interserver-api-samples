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
    int qty1,
    char *currency
    ) {
    backup_order_post_response_cj_params_t *backup_order_post_response_cj_params_local_var = malloc(sizeof(backup_order_post_response_cj_params_t));
    if (!backup_order_post_response_cj_params_local_var) {
        return NULL;
    }
    backup_order_post_response_cj_params_local_var->container_tag_id = container_tag_id;
    backup_order_post_response_cj_params_local_var->cid = cid;
    backup_order_post_response_cj_params_local_var->oid = oid;
    backup_order_post_response_cj_params_local_var->type = type;
    backup_order_post_response_cj_params_local_var->item1 = item1;
    backup_order_post_response_cj_params_local_var->amt1 = amt1;
    backup_order_post_response_cj_params_local_var->qty1 = qty1;
    backup_order_post_response_cj_params_local_var->currency = currency;

    backup_order_post_response_cj_params_local_var->_library_owned = 1;
    return backup_order_post_response_cj_params_local_var;
}

__attribute__((deprecated)) backup_order_post_response_cj_params_t *backup_order_post_response_cj_params_create(
    char *container_tag_id,
    char *cid,
    char *oid,
    char *type,
    char *item1,
    char *amt1,
    int qty1,
    char *currency
    ) {
    return backup_order_post_response_cj_params_create_internal (
        container_tag_id,
        cid,
        oid,
        type,
        item1,
        amt1,
        qty1,
        currency
        );
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
    if(cJSON_AddNumberToObject(item, "QTY1", backup_order_post_response_cj_params->qty1) == NULL) {
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


    backup_order_post_response_cj_params_local_var = backup_order_post_response_cj_params_create_internal (
        container_tag_id && !cJSON_IsNull(container_tag_id) ? strdup(container_tag_id->valuestring) : NULL,
        cid && !cJSON_IsNull(cid) ? strdup(cid->valuestring) : NULL,
        oid && !cJSON_IsNull(oid) ? strdup(oid->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        item1 && !cJSON_IsNull(item1) ? strdup(item1->valuestring) : NULL,
        amt1 && !cJSON_IsNull(amt1) ? strdup(amt1->valuestring) : NULL,
        qty1 ? qty1->valuedouble : 0,
        currency && !cJSON_IsNull(currency) ? strdup(currency->valuestring) : NULL
        );

    return backup_order_post_response_cj_params_local_var;
end:
    return NULL;

}
