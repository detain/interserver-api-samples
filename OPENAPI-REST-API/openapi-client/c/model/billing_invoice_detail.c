#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billing_invoice_detail.h"



static billing_invoice_detail_t *billing_invoice_detail_create_internal(
    ) {
    billing_invoice_detail_t *billing_invoice_detail_local_var = malloc(sizeof(billing_invoice_detail_t));
    if (!billing_invoice_detail_local_var) {
        return NULL;
    }
    memset(billing_invoice_detail_local_var, 0, sizeof(billing_invoice_detail_t));
    billing_invoice_detail_local_var->_library_owned = 1;
    return billing_invoice_detail_local_var;
}

__attribute__((deprecated)) billing_invoice_detail_t *billing_invoice_detail_create(
    ) {
    billing_invoice_detail_t *result = billing_invoice_detail_create_internal (
        );
    if (!result) {
    }
    return result;
}

void billing_invoice_detail_free(billing_invoice_detail_t *billing_invoice_detail) {
    if(NULL == billing_invoice_detail){
        return ;
    }
    if(billing_invoice_detail->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billing_invoice_detail_free");
        return ;
    }
    listEntry_t *listEntry;
    free(billing_invoice_detail);
}

cJSON *billing_invoice_detail_convertToJSON(billing_invoice_detail_t *billing_invoice_detail) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billing_invoice_detail_t *billing_invoice_detail_parseFromJSON(cJSON *billing_invoice_detailJSON){

    billing_invoice_detail_t *billing_invoice_detail_local_var = NULL;



    billing_invoice_detail_local_var = billing_invoice_detail_create_internal (
        );

    if (!billing_invoice_detail_local_var) {
        goto end;
    }

    return billing_invoice_detail_local_var;
end:
    return NULL;

}
