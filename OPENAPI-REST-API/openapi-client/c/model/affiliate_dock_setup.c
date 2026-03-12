#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "affiliate_dock_setup.h"



static affiliate_dock_setup_t *affiliate_dock_setup_create_internal(
    char *affiliate_dock_title,
    char *affiliate_dock_description,
    char *referrer_coupon
    ) {
    affiliate_dock_setup_t *affiliate_dock_setup_local_var = malloc(sizeof(affiliate_dock_setup_t));
    if (!affiliate_dock_setup_local_var) {
        return NULL;
    }
    affiliate_dock_setup_local_var->affiliate_dock_title = affiliate_dock_title;
    affiliate_dock_setup_local_var->affiliate_dock_description = affiliate_dock_description;
    affiliate_dock_setup_local_var->referrer_coupon = referrer_coupon;

    affiliate_dock_setup_local_var->_library_owned = 1;
    return affiliate_dock_setup_local_var;
}

__attribute__((deprecated)) affiliate_dock_setup_t *affiliate_dock_setup_create(
    char *affiliate_dock_title,
    char *affiliate_dock_description,
    char *referrer_coupon
    ) {
    return affiliate_dock_setup_create_internal (
        affiliate_dock_title,
        affiliate_dock_description,
        referrer_coupon
        );
}

void affiliate_dock_setup_free(affiliate_dock_setup_t *affiliate_dock_setup) {
    if(NULL == affiliate_dock_setup){
        return ;
    }
    if(affiliate_dock_setup->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "affiliate_dock_setup_free");
        return ;
    }
    listEntry_t *listEntry;
    if (affiliate_dock_setup->affiliate_dock_title) {
        free(affiliate_dock_setup->affiliate_dock_title);
        affiliate_dock_setup->affiliate_dock_title = NULL;
    }
    if (affiliate_dock_setup->affiliate_dock_description) {
        free(affiliate_dock_setup->affiliate_dock_description);
        affiliate_dock_setup->affiliate_dock_description = NULL;
    }
    if (affiliate_dock_setup->referrer_coupon) {
        free(affiliate_dock_setup->referrer_coupon);
        affiliate_dock_setup->referrer_coupon = NULL;
    }
    free(affiliate_dock_setup);
}

cJSON *affiliate_dock_setup_convertToJSON(affiliate_dock_setup_t *affiliate_dock_setup) {
    cJSON *item = cJSON_CreateObject();

    // affiliate_dock_setup->affiliate_dock_title
    if(affiliate_dock_setup->affiliate_dock_title) {
    if(cJSON_AddStringToObject(item, "affiliate_dock_title", affiliate_dock_setup->affiliate_dock_title) == NULL) {
    goto fail; //String
    }
    }


    // affiliate_dock_setup->affiliate_dock_description
    if(affiliate_dock_setup->affiliate_dock_description) {
    if(cJSON_AddStringToObject(item, "affiliate_dock_description", affiliate_dock_setup->affiliate_dock_description) == NULL) {
    goto fail; //String
    }
    }


    // affiliate_dock_setup->referrer_coupon
    if(affiliate_dock_setup->referrer_coupon) {
    if(cJSON_AddStringToObject(item, "referrer_coupon", affiliate_dock_setup->referrer_coupon) == NULL) {
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

affiliate_dock_setup_t *affiliate_dock_setup_parseFromJSON(cJSON *affiliate_dock_setupJSON){

    affiliate_dock_setup_t *affiliate_dock_setup_local_var = NULL;

    // affiliate_dock_setup->affiliate_dock_title
    cJSON *affiliate_dock_title = cJSON_GetObjectItemCaseSensitive(affiliate_dock_setupJSON, "affiliate_dock_title");
    if (cJSON_IsNull(affiliate_dock_title)) {
        affiliate_dock_title = NULL;
    }
    if (affiliate_dock_title) { 
    if(!cJSON_IsString(affiliate_dock_title) && !cJSON_IsNull(affiliate_dock_title))
    {
    goto end; //String
    }
    }

    // affiliate_dock_setup->affiliate_dock_description
    cJSON *affiliate_dock_description = cJSON_GetObjectItemCaseSensitive(affiliate_dock_setupJSON, "affiliate_dock_description");
    if (cJSON_IsNull(affiliate_dock_description)) {
        affiliate_dock_description = NULL;
    }
    if (affiliate_dock_description) { 
    if(!cJSON_IsString(affiliate_dock_description) && !cJSON_IsNull(affiliate_dock_description))
    {
    goto end; //String
    }
    }

    // affiliate_dock_setup->referrer_coupon
    cJSON *referrer_coupon = cJSON_GetObjectItemCaseSensitive(affiliate_dock_setupJSON, "referrer_coupon");
    if (cJSON_IsNull(referrer_coupon)) {
        referrer_coupon = NULL;
    }
    if (referrer_coupon) { 
    if(!cJSON_IsString(referrer_coupon) && !cJSON_IsNull(referrer_coupon))
    {
    goto end; //String
    }
    }


    affiliate_dock_setup_local_var = affiliate_dock_setup_create_internal (
        affiliate_dock_title && !cJSON_IsNull(affiliate_dock_title) ? strdup(affiliate_dock_title->valuestring) : NULL,
        affiliate_dock_description && !cJSON_IsNull(affiliate_dock_description) ? strdup(affiliate_dock_description->valuestring) : NULL,
        referrer_coupon && !cJSON_IsNull(referrer_coupon) ? strdup(referrer_coupon->valuestring) : NULL
        );

    return affiliate_dock_setup_local_var;
end:
    return NULL;

}
