#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websites_order.h"



static websites_order_t *websites_order_create_internal(
    char *step,
    char *website,
    int *period,
    int *service_offer_id,
    websites_order_packages_t *packages,
    int *enable_domain_registering,
    websites_order_json_services_t *json_services,
    websites_order_json_service_offers_t *json_service_offers,
    websites_order_service_types_t *service_types,
    websites_order_service_offers_t *service_offers,
    websites_order_packges_t *packges
    ) {
    websites_order_t *websites_order_local_var = malloc(sizeof(websites_order_t));
    if (!websites_order_local_var) {
        return NULL;
    }
    memset(websites_order_local_var, 0, sizeof(websites_order_t));
    websites_order_local_var->_library_owned = 1;
    websites_order_local_var->step = step;
    websites_order_local_var->website = website;
    websites_order_local_var->period = period;
    websites_order_local_var->service_offer_id = service_offer_id;
    websites_order_local_var->packages = packages;
    websites_order_local_var->enable_domain_registering = enable_domain_registering;
    websites_order_local_var->json_services = json_services;
    websites_order_local_var->json_service_offers = json_service_offers;
    websites_order_local_var->service_types = service_types;
    websites_order_local_var->service_offers = service_offers;
    websites_order_local_var->packges = packges;
    return websites_order_local_var;
}

__attribute__((deprecated)) websites_order_t *websites_order_create(
    char *step,
    char *website,
    int *period,
    int *service_offer_id,
    websites_order_packages_t *packages,
    int *enable_domain_registering,
    websites_order_json_services_t *json_services,
    websites_order_json_service_offers_t *json_service_offers,
    websites_order_service_types_t *service_types,
    websites_order_service_offers_t *service_offers,
    websites_order_packges_t *packges
    ) {
    int *period_copy = NULL;
    if (period) {
        period_copy = malloc(sizeof(int));
        if (period_copy) *period_copy = *period;
    }
    int *service_offer_id_copy = NULL;
    if (service_offer_id) {
        service_offer_id_copy = malloc(sizeof(int));
        if (service_offer_id_copy) *service_offer_id_copy = *service_offer_id;
    }
    int *enable_domain_registering_copy = NULL;
    if (enable_domain_registering) {
        enable_domain_registering_copy = malloc(sizeof(int));
        if (enable_domain_registering_copy) *enable_domain_registering_copy = *enable_domain_registering;
    }
    websites_order_t *result = websites_order_create_internal (
        step,
        website,
        period_copy,
        service_offer_id_copy,
        packages,
        enable_domain_registering_copy,
        json_services,
        json_service_offers,
        service_types,
        service_offers,
        packges
        );
    if (!result) {
        free(period_copy);
        free(service_offer_id_copy);
        free(enable_domain_registering_copy);
    }
    return result;
}

void websites_order_free(websites_order_t *websites_order) {
    if(NULL == websites_order){
        return ;
    }
    if(websites_order->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "websites_order_free");
        return ;
    }
    listEntry_t *listEntry;
    if (websites_order->step) {
        free(websites_order->step);
        websites_order->step = NULL;
    }
    if (websites_order->website) {
        free(websites_order->website);
        websites_order->website = NULL;
    }
    if (websites_order->period) {
        free(websites_order->period);
        websites_order->period = NULL;
    }
    if (websites_order->service_offer_id) {
        free(websites_order->service_offer_id);
        websites_order->service_offer_id = NULL;
    }
    if (websites_order->packages) {
        websites_order_packages_free(websites_order->packages);
        websites_order->packages = NULL;
    }
    if (websites_order->enable_domain_registering) {
        free(websites_order->enable_domain_registering);
        websites_order->enable_domain_registering = NULL;
    }
    if (websites_order->json_services) {
        websites_order_json_services_free(websites_order->json_services);
        websites_order->json_services = NULL;
    }
    if (websites_order->json_service_offers) {
        websites_order_json_service_offers_free(websites_order->json_service_offers);
        websites_order->json_service_offers = NULL;
    }
    if (websites_order->service_types) {
        websites_order_service_types_free(websites_order->service_types);
        websites_order->service_types = NULL;
    }
    if (websites_order->service_offers) {
        websites_order_service_offers_free(websites_order->service_offers);
        websites_order->service_offers = NULL;
    }
    if (websites_order->packges) {
        websites_order_packges_free(websites_order->packges);
        websites_order->packges = NULL;
    }
    free(websites_order);
}

cJSON *websites_order_convertToJSON(websites_order_t *websites_order) {
    cJSON *item = cJSON_CreateObject();

    // websites_order->step
    if (!websites_order->step) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "step", websites_order->step) == NULL) {
    goto fail; //String
    }


    // websites_order->website
    if (!websites_order->website) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "website", websites_order->website) == NULL) {
    goto fail; //String
    }


    // websites_order->period
    if (!websites_order->period) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "period", *websites_order->period) == NULL) {
    goto fail; //Numeric
    }


    // websites_order->service_offer_id
    if (!websites_order->service_offer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "serviceOfferId", *websites_order->service_offer_id) == NULL) {
    goto fail; //Numeric
    }


    // websites_order->packages
    if (!websites_order->packages) {
        goto fail;
    }
    cJSON *packages_local_JSON = websites_order_packages_convertToJSON(websites_order->packages);
    if(packages_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "packages", packages_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // websites_order->enable_domain_registering
    if (!websites_order->enable_domain_registering) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "enableDomainRegistering", *websites_order->enable_domain_registering) == NULL) {
    goto fail; //Bool
    }


    // websites_order->json_services
    if (!websites_order->json_services) {
        goto fail;
    }
    cJSON *json_services_local_JSON = websites_order_json_services_convertToJSON(websites_order->json_services);
    if(json_services_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "jsonServices", json_services_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // websites_order->json_service_offers
    if (!websites_order->json_service_offers) {
        goto fail;
    }
    cJSON *json_service_offers_local_JSON = websites_order_json_service_offers_convertToJSON(websites_order->json_service_offers);
    if(json_service_offers_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "jsonServiceOffers", json_service_offers_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // websites_order->service_types
    if (!websites_order->service_types) {
        goto fail;
    }
    cJSON *service_types_local_JSON = websites_order_service_types_convertToJSON(websites_order->service_types);
    if(service_types_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceTypes", service_types_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // websites_order->service_offers
    if (!websites_order->service_offers) {
        goto fail;
    }
    cJSON *service_offers_local_JSON = websites_order_service_offers_convertToJSON(websites_order->service_offers);
    if(service_offers_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceOffers", service_offers_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // websites_order->packges
    if(websites_order->packges) {
    cJSON *packges_local_JSON = websites_order_packges_convertToJSON(websites_order->packges);
    if(packges_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "packges", packges_local_JSON);
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

websites_order_t *websites_order_parseFromJSON(cJSON *websites_orderJSON){

    websites_order_t *websites_order_local_var = NULL;

    char *step_local_str = NULL;

    char *website_local_str = NULL;

    // define the local variable for websites_order->period
    int *period_local_var = NULL;

    // define the local variable for websites_order->service_offer_id
    int *service_offer_id_local_var = NULL;

    // define the local variable for websites_order->packages
    websites_order_packages_t *packages_local_nonprim = NULL;

    // define the local variable for websites_order->enable_domain_registering
    int *enable_domain_registering_local_var = NULL;

    // define the local variable for websites_order->json_services
    websites_order_json_services_t *json_services_local_nonprim = NULL;

    // define the local variable for websites_order->json_service_offers
    websites_order_json_service_offers_t *json_service_offers_local_nonprim = NULL;

    // define the local variable for websites_order->service_types
    websites_order_service_types_t *service_types_local_nonprim = NULL;

    // define the local variable for websites_order->service_offers
    websites_order_service_offers_t *service_offers_local_nonprim = NULL;

    // define the local variable for websites_order->packges
    websites_order_packges_t *packges_local_nonprim = NULL;

    // websites_order->step
    cJSON *step = cJSON_GetObjectItemCaseSensitive(websites_orderJSON, "step");
    if (cJSON_IsNull(step)) {
        step = NULL;
    }
    if (!step) {
        goto end;
    }

    
    if(!cJSON_IsString(step))
    {
    goto end; //String
    }

    // websites_order->website
    cJSON *website = cJSON_GetObjectItemCaseSensitive(websites_orderJSON, "website");
    if (cJSON_IsNull(website)) {
        website = NULL;
    }
    if (!website) {
        goto end;
    }

    
    if(!cJSON_IsString(website))
    {
    goto end; //String
    }

    // websites_order->period
    cJSON *period = cJSON_GetObjectItemCaseSensitive(websites_orderJSON, "period");
    if (cJSON_IsNull(period)) {
        period = NULL;
    }
    if (!period) {
        goto end;
    }

    
    if(!cJSON_IsNumber(period))
    {
    goto end; //Numeric
    }
    period_local_var = malloc(sizeof(int));
    if(!period_local_var)
    {
        goto end;
    }
    *period_local_var = period->valuedouble;

    // websites_order->service_offer_id
    cJSON *service_offer_id = cJSON_GetObjectItemCaseSensitive(websites_orderJSON, "serviceOfferId");
    if (cJSON_IsNull(service_offer_id)) {
        service_offer_id = NULL;
    }
    if (!service_offer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(service_offer_id))
    {
    goto end; //Numeric
    }
    service_offer_id_local_var = malloc(sizeof(int));
    if(!service_offer_id_local_var)
    {
        goto end;
    }
    *service_offer_id_local_var = service_offer_id->valuedouble;

    // websites_order->packages
    cJSON *packages = cJSON_GetObjectItemCaseSensitive(websites_orderJSON, "packages");
    if (cJSON_IsNull(packages)) {
        packages = NULL;
    }
    if (!packages) {
        goto end;
    }

    
    packages_local_nonprim = websites_order_packages_parseFromJSON(packages); //nonprimitive

    // websites_order->enable_domain_registering
    cJSON *enable_domain_registering = cJSON_GetObjectItemCaseSensitive(websites_orderJSON, "enableDomainRegistering");
    if (cJSON_IsNull(enable_domain_registering)) {
        enable_domain_registering = NULL;
    }
    if (!enable_domain_registering) {
        goto end;
    }

    
    if(!cJSON_IsBool(enable_domain_registering))
    {
    goto end; //Bool
    }
    enable_domain_registering_local_var = malloc(sizeof(int));
    if(!enable_domain_registering_local_var)
    {
        goto end;
    }
    *enable_domain_registering_local_var = enable_domain_registering->valueint;

    // websites_order->json_services
    cJSON *json_services = cJSON_GetObjectItemCaseSensitive(websites_orderJSON, "jsonServices");
    if (cJSON_IsNull(json_services)) {
        json_services = NULL;
    }
    if (!json_services) {
        goto end;
    }

    
    json_services_local_nonprim = websites_order_json_services_parseFromJSON(json_services); //nonprimitive

    // websites_order->json_service_offers
    cJSON *json_service_offers = cJSON_GetObjectItemCaseSensitive(websites_orderJSON, "jsonServiceOffers");
    if (cJSON_IsNull(json_service_offers)) {
        json_service_offers = NULL;
    }
    if (!json_service_offers) {
        goto end;
    }

    
    json_service_offers_local_nonprim = websites_order_json_service_offers_parseFromJSON(json_service_offers); //nonprimitive

    // websites_order->service_types
    cJSON *service_types = cJSON_GetObjectItemCaseSensitive(websites_orderJSON, "serviceTypes");
    if (cJSON_IsNull(service_types)) {
        service_types = NULL;
    }
    if (!service_types) {
        goto end;
    }

    
    service_types_local_nonprim = websites_order_service_types_parseFromJSON(service_types); //nonprimitive

    // websites_order->service_offers
    cJSON *service_offers = cJSON_GetObjectItemCaseSensitive(websites_orderJSON, "serviceOffers");
    if (cJSON_IsNull(service_offers)) {
        service_offers = NULL;
    }
    if (!service_offers) {
        goto end;
    }

    
    service_offers_local_nonprim = websites_order_service_offers_parseFromJSON(service_offers); //nonprimitive

    // websites_order->packges
    cJSON *packges = cJSON_GetObjectItemCaseSensitive(websites_orderJSON, "packges");
    if (cJSON_IsNull(packges)) {
        packges = NULL;
    }
    if (packges) { 
    packges_local_nonprim = websites_order_packges_parseFromJSON(packges); //nonprimitive
    }


    if (step && !cJSON_IsNull(step)) step_local_str = strdup(step->valuestring);
    if (website && !cJSON_IsNull(website)) website_local_str = strdup(website->valuestring);

    websites_order_local_var = websites_order_create_internal (
        step_local_str,
        website_local_str,
        period_local_var,
        service_offer_id_local_var,
        packages_local_nonprim,
        enable_domain_registering_local_var,
        json_services_local_nonprim,
        json_service_offers_local_nonprim,
        service_types_local_nonprim,
        service_offers_local_nonprim,
        packges ? packges_local_nonprim : NULL
        );

    if (!websites_order_local_var) {
        goto end;
    }

    return websites_order_local_var;
end:
    if (step_local_str) {
        free(step_local_str);
        step_local_str = NULL;
    }
    if (website_local_str) {
        free(website_local_str);
        website_local_str = NULL;
    }
    if (period_local_var) {
        free(period_local_var);
        period_local_var = NULL;
    }
    if (service_offer_id_local_var) {
        free(service_offer_id_local_var);
        service_offer_id_local_var = NULL;
    }
    if (packages_local_nonprim) {
        websites_order_packages_free(packages_local_nonprim);
        packages_local_nonprim = NULL;
    }
    if (enable_domain_registering_local_var) {
        free(enable_domain_registering_local_var);
        enable_domain_registering_local_var = NULL;
    }
    if (json_services_local_nonprim) {
        websites_order_json_services_free(json_services_local_nonprim);
        json_services_local_nonprim = NULL;
    }
    if (json_service_offers_local_nonprim) {
        websites_order_json_service_offers_free(json_service_offers_local_nonprim);
        json_service_offers_local_nonprim = NULL;
    }
    if (service_types_local_nonprim) {
        websites_order_service_types_free(service_types_local_nonprim);
        service_types_local_nonprim = NULL;
    }
    if (service_offers_local_nonprim) {
        websites_order_service_offers_free(service_offers_local_nonprim);
        service_offers_local_nonprim = NULL;
    }
    if (packges_local_nonprim) {
        websites_order_packges_free(packges_local_nonprim);
        packges_local_nonprim = NULL;
    }
    return NULL;

}
