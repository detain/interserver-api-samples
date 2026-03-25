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
    memset(affiliate_dock_setup_local_var, 0, sizeof(affiliate_dock_setup_t));
    affiliate_dock_setup_local_var->_library_owned = 1;
    affiliate_dock_setup_local_var->affiliate_dock_title = affiliate_dock_title;
    affiliate_dock_setup_local_var->affiliate_dock_description = affiliate_dock_description;
    affiliate_dock_setup_local_var->referrer_coupon = referrer_coupon;
    return affiliate_dock_setup_local_var;
}

__attribute__((deprecated)) affiliate_dock_setup_t *affiliate_dock_setup_create(
    char *affiliate_dock_title,
    char *affiliate_dock_description,
    char *referrer_coupon
    ) {
    affiliate_dock_setup_t *result = affiliate_dock_setup_create_internal (
        affiliate_dock_title,
        affiliate_dock_description,
        referrer_coupon
        );
    if (!result) {
    }
    return result;
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

    char *affiliate_dock_title_local_str = NULL;

    char *affiliate_dock_description_local_str = NULL;

    char *referrer_coupon_local_str = NULL;

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


    if (affiliate_dock_title && !cJSON_IsNull(affiliate_dock_title)) affiliate_dock_title_local_str = strdup(affiliate_dock_title->valuestring);
    if (affiliate_dock_description && !cJSON_IsNull(affiliate_dock_description)) affiliate_dock_description_local_str = strdup(affiliate_dock_description->valuestring);
    if (referrer_coupon && !cJSON_IsNull(referrer_coupon)) referrer_coupon_local_str = strdup(referrer_coupon->valuestring);

    affiliate_dock_setup_local_var = affiliate_dock_setup_create_internal (
        affiliate_dock_title_local_str,
        affiliate_dock_description_local_str,
        referrer_coupon_local_str
        );

    if (!affiliate_dock_setup_local_var) {
        goto end;
    }

    return affiliate_dock_setup_local_var;
end:
    if (affiliate_dock_title_local_str) {
        free(affiliate_dock_title_local_str);
        affiliate_dock_title_local_str = NULL;
    }
    if (affiliate_dock_description_local_str) {
        free(affiliate_dock_description_local_str);
        affiliate_dock_description_local_str = NULL;
    }
    if (referrer_coupon_local_str) {
        free(referrer_coupon_local_str);
        referrer_coupon_local_str = NULL;
    }
    return NULL;

}
