#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice.h"



static invoice_t *invoice_create_internal(
    long id
    ) {
    invoice_t *invoice_local_var = malloc(sizeof(invoice_t));
    if (!invoice_local_var) {
        return NULL;
    }
    invoice_local_var->id = id;

    invoice_local_var->_library_owned = 1;
    return invoice_local_var;
}

__attribute__((deprecated)) invoice_t *invoice_create(
    long id
    ) {
    return invoice_create_internal (
        id
        );
}

void invoice_free(invoice_t *invoice) {
    if(NULL == invoice){
        return ;
    }
    if(invoice->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "invoice_free");
        return ;
    }
    listEntry_t *listEntry;
    free(invoice);
}

cJSON *invoice_convertToJSON(invoice_t *invoice) {
    cJSON *item = cJSON_CreateObject();

    // invoice->id
    if(invoice->id) {
    if(cJSON_AddNumberToObject(item, "id", invoice->id) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

invoice_t *invoice_parseFromJSON(cJSON *invoiceJSON){

    invoice_t *invoice_local_var = NULL;

    // invoice->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(invoiceJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }


    invoice_local_var = invoice_create_internal (
        id ? id->valuedouble : 0
        );

    return invoice_local_var;
end:
    return NULL;

}
