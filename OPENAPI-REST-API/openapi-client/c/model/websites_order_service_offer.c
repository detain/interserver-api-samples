#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websites_order_service_offer.h"



static websites_order_service_offer_t *websites_order_service_offer_create_internal(
    char *service_offer_id,
    char *service_id,
    char *intro_cost,
    char *renewal_cost,
    char *intro_frequency,
    char *renewal_frequency,
    char *allow_coupon,
    char *service_module,
    char *created_at,
    char *updated_at,
    char *deleted_at
    ) {
    websites_order_service_offer_t *websites_order_service_offer_local_var = malloc(sizeof(websites_order_service_offer_t));
    if (!websites_order_service_offer_local_var) {
        return NULL;
    }
    memset(websites_order_service_offer_local_var, 0, sizeof(websites_order_service_offer_t));
    websites_order_service_offer_local_var->_library_owned = 1;
    websites_order_service_offer_local_var->service_offer_id = service_offer_id;
    websites_order_service_offer_local_var->service_id = service_id;
    websites_order_service_offer_local_var->intro_cost = intro_cost;
    websites_order_service_offer_local_var->renewal_cost = renewal_cost;
    websites_order_service_offer_local_var->intro_frequency = intro_frequency;
    websites_order_service_offer_local_var->renewal_frequency = renewal_frequency;
    websites_order_service_offer_local_var->allow_coupon = allow_coupon;
    websites_order_service_offer_local_var->service_module = service_module;
    websites_order_service_offer_local_var->created_at = created_at;
    websites_order_service_offer_local_var->updated_at = updated_at;
    websites_order_service_offer_local_var->deleted_at = deleted_at;
    return websites_order_service_offer_local_var;
}

__attribute__((deprecated)) websites_order_service_offer_t *websites_order_service_offer_create(
    char *service_offer_id,
    char *service_id,
    char *intro_cost,
    char *renewal_cost,
    char *intro_frequency,
    char *renewal_frequency,
    char *allow_coupon,
    char *service_module,
    char *created_at,
    char *updated_at,
    char *deleted_at
    ) {
    websites_order_service_offer_t *result = websites_order_service_offer_create_internal (
        service_offer_id,
        service_id,
        intro_cost,
        renewal_cost,
        intro_frequency,
        renewal_frequency,
        allow_coupon,
        service_module,
        created_at,
        updated_at,
        deleted_at
        );
    if (!result) {
    }
    return result;
}

void websites_order_service_offer_free(websites_order_service_offer_t *websites_order_service_offer) {
    if(NULL == websites_order_service_offer){
        return ;
    }
    if(websites_order_service_offer->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "websites_order_service_offer_free");
        return ;
    }
    listEntry_t *listEntry;
    if (websites_order_service_offer->service_offer_id) {
        free(websites_order_service_offer->service_offer_id);
        websites_order_service_offer->service_offer_id = NULL;
    }
    if (websites_order_service_offer->service_id) {
        free(websites_order_service_offer->service_id);
        websites_order_service_offer->service_id = NULL;
    }
    if (websites_order_service_offer->intro_cost) {
        free(websites_order_service_offer->intro_cost);
        websites_order_service_offer->intro_cost = NULL;
    }
    if (websites_order_service_offer->renewal_cost) {
        free(websites_order_service_offer->renewal_cost);
        websites_order_service_offer->renewal_cost = NULL;
    }
    if (websites_order_service_offer->intro_frequency) {
        free(websites_order_service_offer->intro_frequency);
        websites_order_service_offer->intro_frequency = NULL;
    }
    if (websites_order_service_offer->renewal_frequency) {
        free(websites_order_service_offer->renewal_frequency);
        websites_order_service_offer->renewal_frequency = NULL;
    }
    if (websites_order_service_offer->allow_coupon) {
        free(websites_order_service_offer->allow_coupon);
        websites_order_service_offer->allow_coupon = NULL;
    }
    if (websites_order_service_offer->service_module) {
        free(websites_order_service_offer->service_module);
        websites_order_service_offer->service_module = NULL;
    }
    if (websites_order_service_offer->created_at) {
        free(websites_order_service_offer->created_at);
        websites_order_service_offer->created_at = NULL;
    }
    if (websites_order_service_offer->updated_at) {
        free(websites_order_service_offer->updated_at);
        websites_order_service_offer->updated_at = NULL;
    }
    if (websites_order_service_offer->deleted_at) {
        free(websites_order_service_offer->deleted_at);
        websites_order_service_offer->deleted_at = NULL;
    }
    free(websites_order_service_offer);
}

cJSON *websites_order_service_offer_convertToJSON(websites_order_service_offer_t *websites_order_service_offer) {
    cJSON *item = cJSON_CreateObject();

    // websites_order_service_offer->service_offer_id
    if (!websites_order_service_offer->service_offer_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "service_offer_id", websites_order_service_offer->service_offer_id) == NULL) {
    goto fail; //String
    }


    // websites_order_service_offer->service_id
    if (!websites_order_service_offer->service_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "service_id", websites_order_service_offer->service_id) == NULL) {
    goto fail; //String
    }


    // websites_order_service_offer->intro_cost
    if (!websites_order_service_offer->intro_cost) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "intro_cost", websites_order_service_offer->intro_cost) == NULL) {
    goto fail; //String
    }


    // websites_order_service_offer->renewal_cost
    if (!websites_order_service_offer->renewal_cost) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "renewal_cost", websites_order_service_offer->renewal_cost) == NULL) {
    goto fail; //String
    }


    // websites_order_service_offer->intro_frequency
    if (!websites_order_service_offer->intro_frequency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "intro_frequency", websites_order_service_offer->intro_frequency) == NULL) {
    goto fail; //String
    }


    // websites_order_service_offer->renewal_frequency
    if (!websites_order_service_offer->renewal_frequency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "renewal_frequency", websites_order_service_offer->renewal_frequency) == NULL) {
    goto fail; //String
    }


    // websites_order_service_offer->allow_coupon
    if (!websites_order_service_offer->allow_coupon) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "allow_coupon", websites_order_service_offer->allow_coupon) == NULL) {
    goto fail; //String
    }


    // websites_order_service_offer->service_module
    if (!websites_order_service_offer->service_module) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "service_module", websites_order_service_offer->service_module) == NULL) {
    goto fail; //String
    }


    // websites_order_service_offer->created_at
    if (!websites_order_service_offer->created_at) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "created_at", websites_order_service_offer->created_at) == NULL) {
    goto fail; //String
    }


    // websites_order_service_offer->updated_at
    if(websites_order_service_offer->updated_at) {
    if(cJSON_AddStringToObject(item, "updated_at", websites_order_service_offer->updated_at) == NULL) {
    goto fail; //String
    }
    }


    // websites_order_service_offer->deleted_at
    if(websites_order_service_offer->deleted_at) {
    if(cJSON_AddStringToObject(item, "deleted_at", websites_order_service_offer->deleted_at) == NULL) {
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

websites_order_service_offer_t *websites_order_service_offer_parseFromJSON(cJSON *websites_order_service_offerJSON){

    websites_order_service_offer_t *websites_order_service_offer_local_var = NULL;

    char *service_offer_id_local_str = NULL;

    char *service_id_local_str = NULL;

    char *intro_cost_local_str = NULL;

    char *renewal_cost_local_str = NULL;

    char *intro_frequency_local_str = NULL;

    char *renewal_frequency_local_str = NULL;

    char *allow_coupon_local_str = NULL;

    char *service_module_local_str = NULL;

    char *created_at_local_str = NULL;

    char *updated_at_local_str = NULL;

    char *deleted_at_local_str = NULL;

    // websites_order_service_offer->service_offer_id
    cJSON *service_offer_id = cJSON_GetObjectItemCaseSensitive(websites_order_service_offerJSON, "service_offer_id");
    if (cJSON_IsNull(service_offer_id)) {
        service_offer_id = NULL;
    }
    if (!service_offer_id) {
        goto end;
    }

    
    if(!cJSON_IsString(service_offer_id))
    {
    goto end; //String
    }

    // websites_order_service_offer->service_id
    cJSON *service_id = cJSON_GetObjectItemCaseSensitive(websites_order_service_offerJSON, "service_id");
    if (cJSON_IsNull(service_id)) {
        service_id = NULL;
    }
    if (!service_id) {
        goto end;
    }

    
    if(!cJSON_IsString(service_id))
    {
    goto end; //String
    }

    // websites_order_service_offer->intro_cost
    cJSON *intro_cost = cJSON_GetObjectItemCaseSensitive(websites_order_service_offerJSON, "intro_cost");
    if (cJSON_IsNull(intro_cost)) {
        intro_cost = NULL;
    }
    if (!intro_cost) {
        goto end;
    }

    
    if(!cJSON_IsString(intro_cost))
    {
    goto end; //String
    }

    // websites_order_service_offer->renewal_cost
    cJSON *renewal_cost = cJSON_GetObjectItemCaseSensitive(websites_order_service_offerJSON, "renewal_cost");
    if (cJSON_IsNull(renewal_cost)) {
        renewal_cost = NULL;
    }
    if (!renewal_cost) {
        goto end;
    }

    
    if(!cJSON_IsString(renewal_cost))
    {
    goto end; //String
    }

    // websites_order_service_offer->intro_frequency
    cJSON *intro_frequency = cJSON_GetObjectItemCaseSensitive(websites_order_service_offerJSON, "intro_frequency");
    if (cJSON_IsNull(intro_frequency)) {
        intro_frequency = NULL;
    }
    if (!intro_frequency) {
        goto end;
    }

    
    if(!cJSON_IsString(intro_frequency))
    {
    goto end; //String
    }

    // websites_order_service_offer->renewal_frequency
    cJSON *renewal_frequency = cJSON_GetObjectItemCaseSensitive(websites_order_service_offerJSON, "renewal_frequency");
    if (cJSON_IsNull(renewal_frequency)) {
        renewal_frequency = NULL;
    }
    if (!renewal_frequency) {
        goto end;
    }

    
    if(!cJSON_IsString(renewal_frequency))
    {
    goto end; //String
    }

    // websites_order_service_offer->allow_coupon
    cJSON *allow_coupon = cJSON_GetObjectItemCaseSensitive(websites_order_service_offerJSON, "allow_coupon");
    if (cJSON_IsNull(allow_coupon)) {
        allow_coupon = NULL;
    }
    if (!allow_coupon) {
        goto end;
    }

    
    if(!cJSON_IsString(allow_coupon))
    {
    goto end; //String
    }

    // websites_order_service_offer->service_module
    cJSON *service_module = cJSON_GetObjectItemCaseSensitive(websites_order_service_offerJSON, "service_module");
    if (cJSON_IsNull(service_module)) {
        service_module = NULL;
    }
    if (!service_module) {
        goto end;
    }

    
    if(!cJSON_IsString(service_module))
    {
    goto end; //String
    }

    // websites_order_service_offer->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(websites_order_service_offerJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (!created_at) {
        goto end;
    }

    
    if(!cJSON_IsString(created_at))
    {
    goto end; //String
    }

    // websites_order_service_offer->updated_at
    cJSON *updated_at = cJSON_GetObjectItemCaseSensitive(websites_order_service_offerJSON, "updated_at");
    if (cJSON_IsNull(updated_at)) {
        updated_at = NULL;
    }
    if (updated_at) { 
    if(!cJSON_IsString(updated_at) && !cJSON_IsNull(updated_at))
    {
    goto end; //String
    }
    }

    // websites_order_service_offer->deleted_at
    cJSON *deleted_at = cJSON_GetObjectItemCaseSensitive(websites_order_service_offerJSON, "deleted_at");
    if (cJSON_IsNull(deleted_at)) {
        deleted_at = NULL;
    }
    if (deleted_at) { 
    if(!cJSON_IsString(deleted_at) && !cJSON_IsNull(deleted_at))
    {
    goto end; //String
    }
    }


    if (service_offer_id && !cJSON_IsNull(service_offer_id)) service_offer_id_local_str = strdup(service_offer_id->valuestring);
    if (service_id && !cJSON_IsNull(service_id)) service_id_local_str = strdup(service_id->valuestring);
    if (intro_cost && !cJSON_IsNull(intro_cost)) intro_cost_local_str = strdup(intro_cost->valuestring);
    if (renewal_cost && !cJSON_IsNull(renewal_cost)) renewal_cost_local_str = strdup(renewal_cost->valuestring);
    if (intro_frequency && !cJSON_IsNull(intro_frequency)) intro_frequency_local_str = strdup(intro_frequency->valuestring);
    if (renewal_frequency && !cJSON_IsNull(renewal_frequency)) renewal_frequency_local_str = strdup(renewal_frequency->valuestring);
    if (allow_coupon && !cJSON_IsNull(allow_coupon)) allow_coupon_local_str = strdup(allow_coupon->valuestring);
    if (service_module && !cJSON_IsNull(service_module)) service_module_local_str = strdup(service_module->valuestring);
    if (created_at && !cJSON_IsNull(created_at)) created_at_local_str = strdup(created_at->valuestring);
    if (updated_at && !cJSON_IsNull(updated_at)) updated_at_local_str = strdup(updated_at->valuestring);
    if (deleted_at && !cJSON_IsNull(deleted_at)) deleted_at_local_str = strdup(deleted_at->valuestring);

    websites_order_service_offer_local_var = websites_order_service_offer_create_internal (
        service_offer_id_local_str,
        service_id_local_str,
        intro_cost_local_str,
        renewal_cost_local_str,
        intro_frequency_local_str,
        renewal_frequency_local_str,
        allow_coupon_local_str,
        service_module_local_str,
        created_at_local_str,
        updated_at_local_str,
        deleted_at_local_str
        );

    if (!websites_order_service_offer_local_var) {
        goto end;
    }

    return websites_order_service_offer_local_var;
end:
    if (service_offer_id_local_str) {
        free(service_offer_id_local_str);
        service_offer_id_local_str = NULL;
    }
    if (service_id_local_str) {
        free(service_id_local_str);
        service_id_local_str = NULL;
    }
    if (intro_cost_local_str) {
        free(intro_cost_local_str);
        intro_cost_local_str = NULL;
    }
    if (renewal_cost_local_str) {
        free(renewal_cost_local_str);
        renewal_cost_local_str = NULL;
    }
    if (intro_frequency_local_str) {
        free(intro_frequency_local_str);
        intro_frequency_local_str = NULL;
    }
    if (renewal_frequency_local_str) {
        free(renewal_frequency_local_str);
        renewal_frequency_local_str = NULL;
    }
    if (allow_coupon_local_str) {
        free(allow_coupon_local_str);
        allow_coupon_local_str = NULL;
    }
    if (service_module_local_str) {
        free(service_module_local_str);
        service_module_local_str = NULL;
    }
    if (created_at_local_str) {
        free(created_at_local_str);
        created_at_local_str = NULL;
    }
    if (updated_at_local_str) {
        free(updated_at_local_str);
        updated_at_local_str = NULL;
    }
    if (deleted_at_local_str) {
        free(deleted_at_local_str);
        deleted_at_local_str = NULL;
    }
    return NULL;

}
