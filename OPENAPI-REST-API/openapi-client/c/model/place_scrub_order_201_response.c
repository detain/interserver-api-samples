#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "place_scrub_order_201_response.h"



static place_scrub_order_201_response_t *place_scrub_order_201_response_create_internal(
    int success,
    char *text,
    place_scrub_order_201_response_order_details_t *order_details
    ) {
    place_scrub_order_201_response_t *place_scrub_order_201_response_local_var = malloc(sizeof(place_scrub_order_201_response_t));
    if (!place_scrub_order_201_response_local_var) {
        return NULL;
    }
    place_scrub_order_201_response_local_var->success = success;
    place_scrub_order_201_response_local_var->text = text;
    place_scrub_order_201_response_local_var->order_details = order_details;

    place_scrub_order_201_response_local_var->_library_owned = 1;
    return place_scrub_order_201_response_local_var;
}

__attribute__((deprecated)) place_scrub_order_201_response_t *place_scrub_order_201_response_create(
    int success,
    char *text,
    place_scrub_order_201_response_order_details_t *order_details
    ) {
    return place_scrub_order_201_response_create_internal (
        success,
        text,
        order_details
        );
}

void place_scrub_order_201_response_free(place_scrub_order_201_response_t *place_scrub_order_201_response) {
    if(NULL == place_scrub_order_201_response){
        return ;
    }
    if(place_scrub_order_201_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "place_scrub_order_201_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (place_scrub_order_201_response->text) {
        free(place_scrub_order_201_response->text);
        place_scrub_order_201_response->text = NULL;
    }
    if (place_scrub_order_201_response->order_details) {
        place_scrub_order_201_response_order_details_free(place_scrub_order_201_response->order_details);
        place_scrub_order_201_response->order_details = NULL;
    }
    free(place_scrub_order_201_response);
}

cJSON *place_scrub_order_201_response_convertToJSON(place_scrub_order_201_response_t *place_scrub_order_201_response) {
    cJSON *item = cJSON_CreateObject();

    // place_scrub_order_201_response->success
    if(place_scrub_order_201_response->success) {
    if(cJSON_AddBoolToObject(item, "success", place_scrub_order_201_response->success) == NULL) {
    goto fail; //Bool
    }
    }


    // place_scrub_order_201_response->text
    if(place_scrub_order_201_response->text) {
    if(cJSON_AddStringToObject(item, "text", place_scrub_order_201_response->text) == NULL) {
    goto fail; //String
    }
    }


    // place_scrub_order_201_response->order_details
    if(place_scrub_order_201_response->order_details) {
    cJSON *order_details_local_JSON = place_scrub_order_201_response_order_details_convertToJSON(place_scrub_order_201_response->order_details);
    if(order_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "order_details", order_details_local_JSON);
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

place_scrub_order_201_response_t *place_scrub_order_201_response_parseFromJSON(cJSON *place_scrub_order_201_responseJSON){

    place_scrub_order_201_response_t *place_scrub_order_201_response_local_var = NULL;

    // define the local variable for place_scrub_order_201_response->order_details
    place_scrub_order_201_response_order_details_t *order_details_local_nonprim = NULL;

    // place_scrub_order_201_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_responseJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }

    // place_scrub_order_201_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // place_scrub_order_201_response->order_details
    cJSON *order_details = cJSON_GetObjectItemCaseSensitive(place_scrub_order_201_responseJSON, "order_details");
    if (cJSON_IsNull(order_details)) {
        order_details = NULL;
    }
    if (order_details) { 
    order_details_local_nonprim = place_scrub_order_201_response_order_details_parseFromJSON(order_details); //nonprimitive
    }


    place_scrub_order_201_response_local_var = place_scrub_order_201_response_create_internal (
        success ? success->valueint : 0,
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL,
        order_details ? order_details_local_nonprim : NULL
        );

    return place_scrub_order_201_response_local_var;
end:
    if (order_details_local_nonprim) {
        place_scrub_order_201_response_order_details_free(order_details_local_nonprim);
        order_details_local_nonprim = NULL;
    }
    return NULL;

}
