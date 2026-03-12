#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "place_scrub_order_201_response_order_details.h"



static place_scrub_order_201_response_order_details_t *place_scrub_order_201_response_order_details_create_internal(
    int total_cost,
    int service_id,
    int invoice_id,
    char *invoice_description,
    place_scrub_order_201_response_order_details_cj_params_t *cj_params
    ) {
    place_scrub_order_201_response_order_details_t *place_scrub_order_201_response_order_details_local_var = malloc(sizeof(place_scrub_order_201_response_order_details_t));
    if (!place_scrub_order_201_response_order_details_local_var) {
        return NULL;
    }
    place_scrub_order_201_response_order_details_local_var->total_cost = total_cost;
    place_scrub_order_201_response_order_details_local_var->service_id = service_id;
    place_scrub_order_201_response_order_details_local_var->invoice_id = invoice_id;
    place_scrub_order_201_response_order_details_local_var->invoice_description = invoice_description;
    place_scrub_order_201_response_order_details_local_var->cj_params = cj_params;

    place_scrub_order_201_response_order_details_local_var->_library_owned = 1;
    return place_scrub_order_201_response_order_details_local_var;
}

__attribute__((deprecated)) place_scrub_order_201_response_order_details_t *place_scrub_order_201_response_order_details_create(
    int total_cost,
    int service_id,
    int invoice_id,
    char *invoice_description,
    place_scrub_order_201_response_order_details_cj_params_t *cj_params
    ) {
    return place_scrub_order_201_response_order_details_create_internal (
        total_cost,
        service_id,
        invoice_id,
        invoice_description,
        cj_params
        );
}

void place_scrub_order_201_response_order_details_free(place_scrub_order_201_response_order_details_t *place_scrub_order_201_response_order_details) {
    if(NULL == place_scrub_order_201_response_order_details){
        return ;
    }
    if(place_scrub_order_201_response_order_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "place_scrub_order_201_response_order_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (place_scrub_order_201_response_order_details->invoice_description) {
        free(place_scrub_order_201_response_order_details->invoice_description);
        place_scrub_order_201_response_order_details->invoice_description = NULL;
    }
    if (place_scrub_order_201_response_order_details->cj_params) {
        place_scrub_order_201_response_order_details_cj_params_free(place_scrub_order_201_response_order_details->cj_params);
        place_scrub_order_201_response_order_details->cj_params = NULL;
    }
    free(place_scrub_order_201_response_order_details);
}

cJSON *place_scrub_order_201_response_order_details_convertToJSON(place_scrub_order_201_response_order_details_t *place_scrub_order_201_response_order_details) {
    cJSON *item = cJSON_CreateObject();

    // place_scrub_order_201_response_order_details->total_cost
    if(place_scrub_order_201_response_order_details->total_cost) {
    if(cJSON_AddNumberToObject(item, "total_cost", place_scrub_order_201_response_order_details->total_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // place_scrub_order_201_response_order_details->service_id
    if(place_scrub_order_201_response_order_details->service_id) {
    if(cJSON_AddNumberToObject(item, "service_id", place_scrub_order_201_response_order_details->service_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // place_scrub_order_201_response_order_details->invoice_id
    if(place_scrub_order_201_response_order_details->invoice_id) {
    if(cJSON_AddNumberToObject(item, "invoice_id", place_scrub_order_201_response_order_details->invoice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // place_scrub_order_201_response_order_details->invoice_description
    if(place_scrub_order_201_response_order_details->invoice_description) {
    if(cJSON_AddStringToObject(item, "invoice_description", place_scrub_order_201_response_order_details->invoice_description) == NULL) {
    goto fail; //String
    }
    }


    // place_scrub_order_201_response_order_details->cj_params
    if(place_scrub_order_201_response_order_details->cj_params) {
    cJSON *cj_params_local_JSON = place_scrub_order_201_response_order_details_cj_params_convertToJSON(place_scrub_order_201_response_order_details->cj_params);
    if(cj_params_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cj_params", cj_params_local_JSON);
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

place_scrub_order_201_response_order_details_t *place_scrub_order_201_response_order_details_parseFromJSON(cJSON *place_scrub_order_201_response_order_detailsJSON){

    place_scrub_order_201_response_order_details_t *place_scrub_order_201_response_order_details_local_var = NULL;

    // define the local variable for place_scrub_order_201_response_order_details->cj_params
    place_scrub_order_201_response_order_details_cj_params_t *cj_params_local_nonprim = NULL;

    // place_scrub_order_201_response_order_details->total_cost
    cJSON *total_cost = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_detailsJSON, "total_cost");
    if (cJSON_IsNull(total_cost)) {
        total_cost = NULL;
    }
    if (total_cost) { 
    if(!cJSON_IsNumber(total_cost))
    {
    goto end; //Numeric
    }
    }

    // place_scrub_order_201_response_order_details->service_id
    cJSON *service_id = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_detailsJSON, "service_id");
    if (cJSON_IsNull(service_id)) {
        service_id = NULL;
    }
    if (service_id) { 
    if(!cJSON_IsNumber(service_id))
    {
    goto end; //Numeric
    }
    }

    // place_scrub_order_201_response_order_details->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_detailsJSON, "invoice_id");
    if (cJSON_IsNull(invoice_id)) {
        invoice_id = NULL;
    }
    if (invoice_id) { 
    if(!cJSON_IsNumber(invoice_id))
    {
    goto end; //Numeric
    }
    }

    // place_scrub_order_201_response_order_details->invoice_description
    cJSON *invoice_description = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_detailsJSON, "invoice_description");
    if (cJSON_IsNull(invoice_description)) {
        invoice_description = NULL;
    }
    if (invoice_description) { 
    if(!cJSON_IsString(invoice_description) && !cJSON_IsNull(invoice_description))
    {
    goto end; //String
    }
    }

    // place_scrub_order_201_response_order_details->cj_params
    cJSON *cj_params = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_response_order_detailsJSON, "cj_params");
    if (cJSON_IsNull(cj_params)) {
        cj_params = NULL;
    }
    if (cj_params) { 
    cj_params_local_nonprim = place_scrub_order_201_response_order_details_cj_params_parseFromJSON(cj_params); //nonprimitive
    }


    place_scrub_order_201_response_order_details_local_var = place_scrub_order_201_response_order_details_create_internal (
        total_cost ? total_cost->valuedouble : 0,
        service_id ? service_id->valuedouble : 0,
        invoice_id ? invoice_id->valuedouble : 0,
        invoice_description && !cJSON_IsNull(invoice_description) ? strdup(invoice_description->valuestring) : NULL,
        cj_params ? cj_params_local_nonprim : NULL
        );

    return place_scrub_order_201_response_order_details_local_var;
end:
    if (cj_params_local_nonprim) {
        place_scrub_order_201_response_order_details_cj_params_free(cj_params_local_nonprim);
        cj_params_local_nonprim = NULL;
    }
    return NULL;

}
