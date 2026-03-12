#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_row.h"



static invoice_row_t *invoice_row_create_internal(
    ) {
    invoice_row_t *invoice_row_local_var = malloc(sizeof(invoice_row_t));
    if (!invoice_row_local_var) {
        return NULL;
    }

    invoice_row_local_var->_library_owned = 1;
    return invoice_row_local_var;
}

__attribute__((deprecated)) invoice_row_t *invoice_row_create(
    ) {
    return invoice_row_create_internal (
        );
}

void invoice_row_free(invoice_row_t *invoice_row) {
    if(NULL == invoice_row){
        return ;
    }
    if(invoice_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "invoice_row_free");
        return ;
    }
    listEntry_t *listEntry;
    free(invoice_row);
}

cJSON *invoice_row_convertToJSON(invoice_row_t *invoice_row) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

invoice_row_t *invoice_row_parseFromJSON(cJSON *invoice_rowJSON){

    invoice_row_t *invoice_row_local_var = NULL;


    invoice_row_local_var = invoice_row_create_internal (
        );

    return invoice_row_local_var;
end:
    return NULL;

}
