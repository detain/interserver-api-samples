#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "place_scrub_order_201_response_order_details_cj_params.h"



static place_scrub_order_201_response_order_details_cj_params_t *place_scrub_order_201_response_order_details_cj_params_create_internal(
    int *container_tag_id,
    int *cid,
    char *oid,
    int *type,
    char *item1,
    int *amt1,
    int *qty1,
    char *currency
    ) {
    place_scrub_order_201_response_order_details_cj_params_t *place_scrub_order_201_response_order_details_cj_params_local_var = malloc(sizeof(place_scrub_order_201_response_order_details_cj_params_t));
    if (!place_scrub_order_201_response_order_details_cj_params_local_var) {
        return NULL;
    }
    memset(place_scrub_order_201_response_order_details_cj_params_local_var, 0, sizeof(place_scrub_order_201_response_order_details_cj_params_t));
    place_scrub_order_201_response_order_details_cj_params_local_var->_library_owned = 1;
    place_scrub_order_201_response_order_details_cj_params_local_var->container_tag_id = container_tag_id;
    place_scrub_order_201_response_order_details_cj_params_local_var->cid = cid;
    place_scrub_order_201_response_order_details_cj_params_local_var->oid = oid;
    place_scrub_order_201_response_order_details_cj_params_local_var->type = type;
    place_scrub_order_201_response_order_details_cj_params_local_var->item1 = item1;
    place_scrub_order_201_response_order_details_cj_params_local_var->amt1 = amt1;
    place_scrub_order_201_response_order_details_cj_params_local_var->qty1 = qty1;
    place_scrub_order_201_response_order_details_cj_params_local_var->currency = currency;
    return place_scrub_order_201_response_order_details_cj_params_local_var;
}

__attribute__((deprecated)) place_scrub_order_201_response_order_details_cj_params_t *place_scrub_order_201_response_order_details_cj_params_create(
    int *container_tag_id,
    int *cid,
    char *oid,
    int *type,
    char *item1,
    int *amt1,
    int *qty1,
    char *currency
    ) {
    int *container_tag_id_copy = NULL;
    if (container_tag_id) {
        container_tag_id_copy = malloc(sizeof(int));
        if (container_tag_id_copy) *container_tag_id_copy = *container_tag_id;
    }
    int *cid_copy = NULL;
    if (cid) {
        cid_copy = malloc(sizeof(int));
        if (cid_copy) *cid_copy = *cid;
    }
    int *type_copy = NULL;
    if (type) {
        type_copy = malloc(sizeof(int));
        if (type_copy) *type_copy = *type;
    }
    int *amt1_copy = NULL;
    if (amt1) {
        amt1_copy = malloc(sizeof(int));
        if (amt1_copy) *amt1_copy = *amt1;
    }
    int *qty1_copy = NULL;
    if (qty1) {
        qty1_copy = malloc(sizeof(int));
        if (qty1_copy) *qty1_copy = *qty1;
    }
    place_scrub_order_201_response_order_details_cj_params_t *result = place_scrub_order_201_response_order_details_cj_params_create_internal (
        container_tag_id_copy,
        cid_copy,
        oid,
        type_copy,
        item1,
        amt1_copy,
        qty1_copy,
        currency
        );
    if (!result) {
        free(container_tag_id_copy);
        free(cid_copy);
        free(type_copy);
        free(amt1_copy);
        free(qty1_copy);
    }
    return result;
}

void place_scrub_order_201_response_order_details_cj_params_free(place_scrub_order_201_response_order_details_cj_params_t *place_scrub_order_201_response_order_details_cj_params) {
    if(NULL == place_scrub_order_201_response_order_details_cj_params){
        return ;
    }
    if(place_scrub_order_201_response_order_details_cj_params->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "place_scrub_order_201_response_order_details_cj_params_free");
        return ;
    }
    listEntry_t *listEntry;
    if (place_scrub_order_201_response_order_details_cj_params->container_tag_id) {
        free(place_scrub_order_201_response_order_details_cj_params->container_tag_id);
        place_scrub_order_201_response_order_details_cj_params->container_tag_id = NULL;
    }
    if (place_scrub_order_201_response_order_details_cj_params->cid) {
        free(place_scrub_order_201_response_order_details_cj_params->cid);
        place_scrub_order_201_response_order_details_cj_params->cid = NULL;
    }
    if (place_scrub_order_201_response_order_details_cj_params->oid) {
        free(place_scrub_order_201_response_order_details_cj_params->oid);
        place_scrub_order_201_response_order_details_cj_params->oid = NULL;
    }
    if (place_scrub_order_201_response_order_details_cj_params->type) {
        free(place_scrub_order_201_response_order_details_cj_params->type);
        place_scrub_order_201_response_order_details_cj_params->type = NULL;
    }
    if (place_scrub_order_201_response_order_details_cj_params->item1) {
        free(place_scrub_order_201_response_order_details_cj_params->item1);
        place_scrub_order_201_response_order_details_cj_params->item1 = NULL;
    }
    if (place_scrub_order_201_response_order_details_cj_params->amt1) {
        free(place_scrub_order_201_response_order_details_cj_params->amt1);
        place_scrub_order_201_response_order_details_cj_params->amt1 = NULL;
    }
    if (place_scrub_order_201_response_order_details_cj_params->qty1) {
        free(place_scrub_order_201_response_order_details_cj_params->qty1);
        place_scrub_order_201_response_order_details_cj_params->qty1 = NULL;
    }
    if (place_scrub_order_201_response_order_details_cj_params->currency) {
        free(place_scrub_order_201_response_order_details_cj_params->currency);
        place_scrub_order_201_response_order_details_cj_params->currency = NULL;
    }
    free(place_scrub_order_201_response_order_details_cj_params);
}

cJSON *place_scrub_order_201_response_order_details_cj_params_convertToJSON(place_scrub_order_201_response_order_details_cj_params_t *place_scrub_order_201_response_order_details_cj_params) {
    cJSON *item = cJSON_CreateObject();

    // place_scrub_order_201_response_order_details_cj_params->container_tag_id
    if(place_scrub_order_201_response_order_details_cj_params->container_tag_id) {
    if(cJSON_AddNumberToObject(item, "containerTagId", *place_scrub_order_201_response_order_details_cj_params->container_tag_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // place_scrub_order_201_response_order_details_cj_params->cid
    if(place_scrub_order_201_response_order_details_cj_params->cid) {
    if(cJSON_AddNumberToObject(item, "CID", *place_scrub_order_201_response_order_details_cj_params->cid) == NULL) {
    goto fail; //Numeric
    }
    }


    // place_scrub_order_201_response_order_details_cj_params->oid
    if(place_scrub_order_201_response_order_details_cj_params->oid) {
    if(cJSON_AddStringToObject(item, "OID", place_scrub_order_201_response_order_details_cj_params->oid) == NULL) {
    goto fail; //String
    }
    }


    // place_scrub_order_201_response_order_details_cj_params->type
    if(place_scrub_order_201_response_order_details_cj_params->type) {
    if(cJSON_AddNumberToObject(item, "TYPE", *place_scrub_order_201_response_order_details_cj_params->type) == NULL) {
    goto fail; //Numeric
    }
    }


    // place_scrub_order_201_response_order_details_cj_params->item1
    if(place_scrub_order_201_response_order_details_cj_params->item1) {
    if(cJSON_AddStringToObject(item, "ITEM1", place_scrub_order_201_response_order_details_cj_params->item1) == NULL) {
    goto fail; //String
    }
    }


    // place_scrub_order_201_response_order_details_cj_params->amt1
    if(place_scrub_order_201_response_order_details_cj_params->amt1) {
    if(cJSON_AddNumberToObject(item, "AMT1", *place_scrub_order_201_response_order_details_cj_params->amt1) == NULL) {
    goto fail; //Numeric
    }
    }


    // place_scrub_order_201_response_order_details_cj_params->qty1
    if(place_scrub_order_201_response_order_details_cj_params->qty1) {
    if(cJSON_AddNumberToObject(item, "QTY1", *place_scrub_order_201_response_order_details_cj_params->qty1) == NULL) {
    goto fail; //Numeric
    }
    }


    // place_scrub_order_201_response_order_details_cj_params->currency
    if(place_scrub_order_201_response_order_details_cj_params->currency) {
    if(cJSON_AddStringToObject(item, "CURRENCY", place_scrub_order_201_response_order_details_cj_params->currency) == NULL) {
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

place_scrub_order_201_response_order_details_cj_params_t *place_scrub_order_201_response_order_details_cj_params_parseFromJSON(cJSON *place_scrub_order_201_response_order_details_cj_paramsJSON){

    place_scrub_order_201_response_order_details_cj_params_t *place_scrub_order_201_response_order_details_cj_params_local_var = NULL;

    // define the local variable for place_scrub_order_201_response_order_details_cj_params->container_tag_id
    int *container_tag_id_local_var = NULL;

    // define the local variable for place_scrub_order_201_response_order_details_cj_params->cid
    int *cid_local_var = NULL;

    char *oid_local_str = NULL;

    // define the local variable for place_scrub_order_201_response_order_details_cj_params->type
    int *type_local_var = NULL;

    char *item1_local_str = NULL;

    // define the local variable for place_scrub_order_201_response_order_details_cj_params->amt1
    int *amt1_local_var = NULL;

    // define the local variable for place_scrub_order_201_response_order_details_cj_params->qty1
    int *qty1_local_var = NULL;

    char *currency_local_str = NULL;

    // place_scrub_order_201_response_order_details_cj_params->container_tag_id
    cJSON *container_tag_id = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_details_cj_paramsJSON, "containerTagId");
    if (cJSON_IsNull(container_tag_id)) {
        container_tag_id = NULL;
    }
    if (container_tag_id) { 
    if(!cJSON_IsNumber(container_tag_id))
    {
    goto end; //Numeric
    }
    container_tag_id_local_var = malloc(sizeof(int));
    if(!container_tag_id_local_var)
    {
        goto end;
    }
    *container_tag_id_local_var = container_tag_id->valuedouble;
    }

    // place_scrub_order_201_response_order_details_cj_params->cid
    cJSON *cid = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_details_cj_paramsJSON, "CID");
    if (cJSON_IsNull(cid)) {
        cid = NULL;
    }
    if (cid) { 
    if(!cJSON_IsNumber(cid))
    {
    goto end; //Numeric
    }
    cid_local_var = malloc(sizeof(int));
    if(!cid_local_var)
    {
        goto end;
    }
    *cid_local_var = cid->valuedouble;
    }

    // place_scrub_order_201_response_order_details_cj_params->oid
    cJSON *oid = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_details_cj_paramsJSON, "OID");
    if (cJSON_IsNull(oid)) {
        oid = NULL;
    }
    if (oid) { 
    if(!cJSON_IsString(oid) && !cJSON_IsNull(oid))
    {
    goto end; //String
    }
    }

    // place_scrub_order_201_response_order_details_cj_params->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_details_cj_paramsJSON, "TYPE");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsNumber(type))
    {
    goto end; //Numeric
    }
    type_local_var = malloc(sizeof(int));
    if(!type_local_var)
    {
        goto end;
    }
    *type_local_var = type->valuedouble;
    }

    // place_scrub_order_201_response_order_details_cj_params->item1
    cJSON *item1 = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_details_cj_paramsJSON, "ITEM1");
    if (cJSON_IsNull(item1)) {
        item1 = NULL;
    }
    if (item1) { 
    if(!cJSON_IsString(item1) && !cJSON_IsNull(item1))
    {
    goto end; //String
    }
    }

    // place_scrub_order_201_response_order_details_cj_params->amt1
    cJSON *amt1 = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_details_cj_paramsJSON, "AMT1");
    if (cJSON_IsNull(amt1)) {
        amt1 = NULL;
    }
    if (amt1) { 
    if(!cJSON_IsNumber(amt1))
    {
    goto end; //Numeric
    }
    amt1_local_var = malloc(sizeof(int));
    if(!amt1_local_var)
    {
        goto end;
    }
    *amt1_local_var = amt1->valuedouble;
    }

    // place_scrub_order_201_response_order_details_cj_params->qty1
    cJSON *qty1 = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_details_cj_paramsJSON, "QTY1");
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

    // place_scrub_order_201_response_order_details_cj_params->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_details_cj_paramsJSON, "CURRENCY");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (currency) { 
    if(!cJSON_IsString(currency) && !cJSON_IsNull(currency))
    {
    goto end; //String
    }
    }


    if (oid && !cJSON_IsNull(oid)) oid_local_str = strdup(oid->valuestring);
    if (item1 && !cJSON_IsNull(item1)) item1_local_str = strdup(item1->valuestring);
    if (currency && !cJSON_IsNull(currency)) currency_local_str = strdup(currency->valuestring);

    place_scrub_order_201_response_order_details_cj_params_local_var = place_scrub_order_201_response_order_details_cj_params_create_internal (
        container_tag_id_local_var,
        cid_local_var,
        oid_local_str,
        type_local_var,
        item1_local_str,
        amt1_local_var,
        qty1_local_var,
        currency_local_str
        );

    if (!place_scrub_order_201_response_order_details_cj_params_local_var) {
        goto end;
    }

    return place_scrub_order_201_response_order_details_cj_params_local_var;
end:
    if (container_tag_id_local_var) {
        free(container_tag_id_local_var);
        container_tag_id_local_var = NULL;
    }
    if (cid_local_var) {
        free(cid_local_var);
        cid_local_var = NULL;
    }
    if (oid_local_str) {
        free(oid_local_str);
        oid_local_str = NULL;
    }
    if (type_local_var) {
        free(type_local_var);
        type_local_var = NULL;
    }
    if (item1_local_str) {
        free(item1_local_str);
        item1_local_str = NULL;
    }
    if (amt1_local_var) {
        free(amt1_local_var);
        amt1_local_var = NULL;
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
