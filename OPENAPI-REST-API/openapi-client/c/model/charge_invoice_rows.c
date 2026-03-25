#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "charge_invoice_rows.h"



static charge_invoice_rows_t *charge_invoice_rows_create_internal(
    int *success,
    list_t* invoices
    ) {
    charge_invoice_rows_t *charge_invoice_rows_local_var = malloc(sizeof(charge_invoice_rows_t));
    if (!charge_invoice_rows_local_var) {
        return NULL;
    }
    memset(charge_invoice_rows_local_var, 0, sizeof(charge_invoice_rows_t));
    charge_invoice_rows_local_var->_library_owned = 1;
    charge_invoice_rows_local_var->success = success;
    charge_invoice_rows_local_var->invoices = invoices;
    return charge_invoice_rows_local_var;
}

__attribute__((deprecated)) charge_invoice_rows_t *charge_invoice_rows_create(
    int *success,
    list_t* invoices
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    charge_invoice_rows_t *result = charge_invoice_rows_create_internal (
        success_copy,
        invoices
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void charge_invoice_rows_free(charge_invoice_rows_t *charge_invoice_rows) {
    if(NULL == charge_invoice_rows){
        return ;
    }
    if(charge_invoice_rows->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "charge_invoice_rows_free");
        return ;
    }
    listEntry_t *listEntry;
    if (charge_invoice_rows->success) {
        free(charge_invoice_rows->success);
        charge_invoice_rows->success = NULL;
    }
    if (charge_invoice_rows->invoices) {
        list_ForEach(listEntry, charge_invoice_rows->invoices) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(charge_invoice_rows->invoices);
        charge_invoice_rows->invoices = NULL;
    }
    free(charge_invoice_rows);
}

cJSON *charge_invoice_rows_convertToJSON(charge_invoice_rows_t *charge_invoice_rows) {
    cJSON *item = cJSON_CreateObject();

    // charge_invoice_rows->success
    if(charge_invoice_rows->success) {
    if(cJSON_AddBoolToObject(item, "success", *charge_invoice_rows->success) == NULL) {
    goto fail; //Bool
    }
    }


    // charge_invoice_rows->invoices
    if(charge_invoice_rows->invoices) {
    cJSON *invoices = cJSON_AddObjectToObject(item, "invoices");
    if(invoices == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = invoices;
    listEntry_t *invoicesListEntry;
    if (charge_invoice_rows->invoices) {
    list_ForEach(invoicesListEntry, charge_invoice_rows->invoices) {
        keyValuePair_t *localKeyValue = invoicesListEntry->data;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

charge_invoice_rows_t *charge_invoice_rows_parseFromJSON(cJSON *charge_invoice_rowsJSON){

    charge_invoice_rows_t *charge_invoice_rows_local_var = NULL;

    // define the local variable for charge_invoice_rows->success
    int *success_local_var = NULL;

    // define the local map for charge_invoice_rows->invoices
    list_t *invoicesList = NULL;

    // charge_invoice_rows->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(charge_invoice_rowsJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    success_local_var = malloc(sizeof(int));
    if(!success_local_var)
    {
        goto end;
    }
    *success_local_var = success->valueint;
    }

    // charge_invoice_rows->invoices
    cJSON *invoices = cJSON_GetObjectItemCaseSensitive(charge_invoice_rowsJSON, "invoices");
    if (cJSON_IsNull(invoices)) {
        invoices = NULL;
    }
    if (invoices) { 

    // The data type of the elements in charge_invoice_rows->invoices is currently not supported.

    }



    charge_invoice_rows_local_var = charge_invoice_rows_create_internal (
        success_local_var,
        invoices ? invoicesList : NULL
        );

    if (!charge_invoice_rows_local_var) {
        goto end;
    }

    return charge_invoice_rows_local_var;
end:
    if (success_local_var) {
        free(success_local_var);
        success_local_var = NULL;
    }

    // The data type of the elements in charge_invoice_rows->invoices is currently not supported.

    return NULL;

}
