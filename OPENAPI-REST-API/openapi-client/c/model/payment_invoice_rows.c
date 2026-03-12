#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_invoice_rows.h"



static payment_invoice_rows_t *payment_invoice_rows_create_internal(
    ) {
    payment_invoice_rows_t *payment_invoice_rows_local_var = malloc(sizeof(payment_invoice_rows_t));
    if (!payment_invoice_rows_local_var) {
        return NULL;
    }

    payment_invoice_rows_local_var->_library_owned = 1;
    return payment_invoice_rows_local_var;
}

__attribute__((deprecated)) payment_invoice_rows_t *payment_invoice_rows_create(
    ) {
    return payment_invoice_rows_create_internal (
        );
}

void payment_invoice_rows_free(payment_invoice_rows_t *payment_invoice_rows) {
    if(NULL == payment_invoice_rows){
        return ;
    }
    if(payment_invoice_rows->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "payment_invoice_rows_free");
        return ;
    }
    listEntry_t *listEntry;
    free(payment_invoice_rows);
}

cJSON *payment_invoice_rows_convertToJSON(payment_invoice_rows_t *payment_invoice_rows) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

payment_invoice_rows_t *payment_invoice_rows_parseFromJSON(cJSON *payment_invoice_rowsJSON){

    payment_invoice_rows_t *payment_invoice_rows_local_var = NULL;


    payment_invoice_rows_local_var = payment_invoice_rows_create_internal (
        );

    return payment_invoice_rows_local_var;
end:
    return NULL;

}
