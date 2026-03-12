#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "affiliate_payment_setup.h"



static affiliate_payment_setup_t *affiliate_payment_setup_create_internal(
    char *affiliate_paypal,
    char *affiliate_payment_method
    ) {
    affiliate_payment_setup_t *affiliate_payment_setup_local_var = malloc(sizeof(affiliate_payment_setup_t));
    if (!affiliate_payment_setup_local_var) {
        return NULL;
    }
    affiliate_payment_setup_local_var->affiliate_paypal = affiliate_paypal;
    affiliate_payment_setup_local_var->affiliate_payment_method = affiliate_payment_method;

    affiliate_payment_setup_local_var->_library_owned = 1;
    return affiliate_payment_setup_local_var;
}

__attribute__((deprecated)) affiliate_payment_setup_t *affiliate_payment_setup_create(
    char *affiliate_paypal,
    char *affiliate_payment_method
    ) {
    return affiliate_payment_setup_create_internal (
        affiliate_paypal,
        affiliate_payment_method
        );
}

void affiliate_payment_setup_free(affiliate_payment_setup_t *affiliate_payment_setup) {
    if(NULL == affiliate_payment_setup){
        return ;
    }
    if(affiliate_payment_setup->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "affiliate_payment_setup_free");
        return ;
    }
    listEntry_t *listEntry;
    if (affiliate_payment_setup->affiliate_paypal) {
        free(affiliate_payment_setup->affiliate_paypal);
        affiliate_payment_setup->affiliate_paypal = NULL;
    }
    if (affiliate_payment_setup->affiliate_payment_method) {
        free(affiliate_payment_setup->affiliate_payment_method);
        affiliate_payment_setup->affiliate_payment_method = NULL;
    }
    free(affiliate_payment_setup);
}

cJSON *affiliate_payment_setup_convertToJSON(affiliate_payment_setup_t *affiliate_payment_setup) {
    cJSON *item = cJSON_CreateObject();

    // affiliate_payment_setup->affiliate_paypal
    if(affiliate_payment_setup->affiliate_paypal) {
    if(cJSON_AddStringToObject(item, "affiliate_paypal", affiliate_payment_setup->affiliate_paypal) == NULL) {
    goto fail; //String
    }
    }


    // affiliate_payment_setup->affiliate_payment_method
    if(affiliate_payment_setup->affiliate_payment_method) {
    if(cJSON_AddStringToObject(item, "affiliate_payment_method", affiliate_payment_setup->affiliate_payment_method) == NULL) {
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

affiliate_payment_setup_t *affiliate_payment_setup_parseFromJSON(cJSON *affiliate_payment_setupJSON){

    affiliate_payment_setup_t *affiliate_payment_setup_local_var = NULL;

    // affiliate_payment_setup->affiliate_paypal
    cJSON *affiliate_paypal = cJSON_GetObjectItemCaseSensitive(affiliate_payment_setupJSON, "affiliate_paypal");
    if (cJSON_IsNull(affiliate_paypal)) {
        affiliate_paypal = NULL;
    }
    if (affiliate_paypal) { 
    if(!cJSON_IsString(affiliate_paypal) && !cJSON_IsNull(affiliate_paypal))
    {
    goto end; //String
    }
    }

    // affiliate_payment_setup->affiliate_payment_method
    cJSON *affiliate_payment_method = cJSON_GetObjectItemCaseSensitive(affiliate_payment_setupJSON, "affiliate_payment_method");
    if (cJSON_IsNull(affiliate_payment_method)) {
        affiliate_payment_method = NULL;
    }
    if (affiliate_payment_method) { 
    if(!cJSON_IsString(affiliate_payment_method) && !cJSON_IsNull(affiliate_payment_method))
    {
    goto end; //String
    }
    }


    affiliate_payment_setup_local_var = affiliate_payment_setup_create_internal (
        affiliate_paypal && !cJSON_IsNull(affiliate_paypal) ? strdup(affiliate_paypal->valuestring) : NULL,
        affiliate_payment_method && !cJSON_IsNull(affiliate_payment_method) ? strdup(affiliate_payment_method->valuestring) : NULL
        );

    return affiliate_payment_setup_local_var;
end:
    return NULL;

}
