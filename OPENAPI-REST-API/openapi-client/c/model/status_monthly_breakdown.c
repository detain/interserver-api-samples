#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_monthly_breakdown.h"



static status_monthly_breakdown_t *status_monthly_breakdown_create_internal(
    monthly_counts_t *_default,
    monthly_counts_t *failed,
    monthly_counts_t *rejected,
    monthly_counts_t *pending,
    monthly_counts_t *locked,
    monthly_counts_t *paid
    ) {
    status_monthly_breakdown_t *status_monthly_breakdown_local_var = malloc(sizeof(status_monthly_breakdown_t));
    if (!status_monthly_breakdown_local_var) {
        return NULL;
    }
    memset(status_monthly_breakdown_local_var, 0, sizeof(status_monthly_breakdown_t));
    status_monthly_breakdown_local_var->_library_owned = 1;
    status_monthly_breakdown_local_var->_default = _default;
    status_monthly_breakdown_local_var->failed = failed;
    status_monthly_breakdown_local_var->rejected = rejected;
    status_monthly_breakdown_local_var->pending = pending;
    status_monthly_breakdown_local_var->locked = locked;
    status_monthly_breakdown_local_var->paid = paid;
    return status_monthly_breakdown_local_var;
}

__attribute__((deprecated)) status_monthly_breakdown_t *status_monthly_breakdown_create(
    monthly_counts_t *_default,
    monthly_counts_t *failed,
    monthly_counts_t *rejected,
    monthly_counts_t *pending,
    monthly_counts_t *locked,
    monthly_counts_t *paid
    ) {
    status_monthly_breakdown_t *result = status_monthly_breakdown_create_internal (
        _default,
        failed,
        rejected,
        pending,
        locked,
        paid
        );
    if (!result) {
    }
    return result;
}

void status_monthly_breakdown_free(status_monthly_breakdown_t *status_monthly_breakdown) {
    if(NULL == status_monthly_breakdown){
        return ;
    }
    if(status_monthly_breakdown->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "status_monthly_breakdown_free");
        return ;
    }
    listEntry_t *listEntry;
    if (status_monthly_breakdown->_default) {
        monthly_counts_free(status_monthly_breakdown->_default);
        status_monthly_breakdown->_default = NULL;
    }
    if (status_monthly_breakdown->failed) {
        monthly_counts_free(status_monthly_breakdown->failed);
        status_monthly_breakdown->failed = NULL;
    }
    if (status_monthly_breakdown->rejected) {
        monthly_counts_free(status_monthly_breakdown->rejected);
        status_monthly_breakdown->rejected = NULL;
    }
    if (status_monthly_breakdown->pending) {
        monthly_counts_free(status_monthly_breakdown->pending);
        status_monthly_breakdown->pending = NULL;
    }
    if (status_monthly_breakdown->locked) {
        monthly_counts_free(status_monthly_breakdown->locked);
        status_monthly_breakdown->locked = NULL;
    }
    if (status_monthly_breakdown->paid) {
        monthly_counts_free(status_monthly_breakdown->paid);
        status_monthly_breakdown->paid = NULL;
    }
    free(status_monthly_breakdown);
}

cJSON *status_monthly_breakdown_convertToJSON(status_monthly_breakdown_t *status_monthly_breakdown) {
    cJSON *item = cJSON_CreateObject();

    // status_monthly_breakdown->_default
    if (!status_monthly_breakdown->_default) {
        goto fail;
    }
    cJSON *_default_local_JSON = monthly_counts_convertToJSON(status_monthly_breakdown->_default);
    if(_default_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "default", _default_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // status_monthly_breakdown->failed
    if (!status_monthly_breakdown->failed) {
        goto fail;
    }
    cJSON *failed_local_JSON = monthly_counts_convertToJSON(status_monthly_breakdown->failed);
    if(failed_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "failed", failed_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // status_monthly_breakdown->rejected
    if (!status_monthly_breakdown->rejected) {
        goto fail;
    }
    cJSON *rejected_local_JSON = monthly_counts_convertToJSON(status_monthly_breakdown->rejected);
    if(rejected_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "rejected", rejected_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // status_monthly_breakdown->pending
    if (!status_monthly_breakdown->pending) {
        goto fail;
    }
    cJSON *pending_local_JSON = monthly_counts_convertToJSON(status_monthly_breakdown->pending);
    if(pending_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "pending", pending_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // status_monthly_breakdown->locked
    if (!status_monthly_breakdown->locked) {
        goto fail;
    }
    cJSON *locked_local_JSON = monthly_counts_convertToJSON(status_monthly_breakdown->locked);
    if(locked_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "locked", locked_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // status_monthly_breakdown->paid
    if (!status_monthly_breakdown->paid) {
        goto fail;
    }
    cJSON *paid_local_JSON = monthly_counts_convertToJSON(status_monthly_breakdown->paid);
    if(paid_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "paid", paid_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

status_monthly_breakdown_t *status_monthly_breakdown_parseFromJSON(cJSON *status_monthly_breakdownJSON){

    status_monthly_breakdown_t *status_monthly_breakdown_local_var = NULL;

    // define the local variable for status_monthly_breakdown->_default
    monthly_counts_t *_default_local_nonprim = NULL;

    // define the local variable for status_monthly_breakdown->failed
    monthly_counts_t *failed_local_nonprim = NULL;

    // define the local variable for status_monthly_breakdown->rejected
    monthly_counts_t *rejected_local_nonprim = NULL;

    // define the local variable for status_monthly_breakdown->pending
    monthly_counts_t *pending_local_nonprim = NULL;

    // define the local variable for status_monthly_breakdown->locked
    monthly_counts_t *locked_local_nonprim = NULL;

    // define the local variable for status_monthly_breakdown->paid
    monthly_counts_t *paid_local_nonprim = NULL;

    // status_monthly_breakdown->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(status_monthly_breakdownJSON, "default");
    if (cJSON_IsNull(_default)) {
        _default = NULL;
    }
    if (!_default) {
        goto end;
    }

    
    _default_local_nonprim = monthly_counts_parseFromJSON(_default); //custom

    // status_monthly_breakdown->failed
    cJSON *failed = cJSON_GetObjectItemCaseSensitive(status_monthly_breakdownJSON, "failed");
    if (cJSON_IsNull(failed)) {
        failed = NULL;
    }
    if (!failed) {
        goto end;
    }

    
    failed_local_nonprim = monthly_counts_parseFromJSON(failed); //custom

    // status_monthly_breakdown->rejected
    cJSON *rejected = cJSON_GetObjectItemCaseSensitive(status_monthly_breakdownJSON, "rejected");
    if (cJSON_IsNull(rejected)) {
        rejected = NULL;
    }
    if (!rejected) {
        goto end;
    }

    
    rejected_local_nonprim = monthly_counts_parseFromJSON(rejected); //custom

    // status_monthly_breakdown->pending
    cJSON *pending = cJSON_GetObjectItemCaseSensitive(status_monthly_breakdownJSON, "pending");
    if (cJSON_IsNull(pending)) {
        pending = NULL;
    }
    if (!pending) {
        goto end;
    }

    
    pending_local_nonprim = monthly_counts_parseFromJSON(pending); //custom

    // status_monthly_breakdown->locked
    cJSON *locked = cJSON_GetObjectItemCaseSensitive(status_monthly_breakdownJSON, "locked");
    if (cJSON_IsNull(locked)) {
        locked = NULL;
    }
    if (!locked) {
        goto end;
    }

    
    locked_local_nonprim = monthly_counts_parseFromJSON(locked); //custom

    // status_monthly_breakdown->paid
    cJSON *paid = cJSON_GetObjectItemCaseSensitive(status_monthly_breakdownJSON, "paid");
    if (cJSON_IsNull(paid)) {
        paid = NULL;
    }
    if (!paid) {
        goto end;
    }

    
    paid_local_nonprim = monthly_counts_parseFromJSON(paid); //custom



    status_monthly_breakdown_local_var = status_monthly_breakdown_create_internal (
        _default_local_nonprim,
        failed_local_nonprim,
        rejected_local_nonprim,
        pending_local_nonprim,
        locked_local_nonprim,
        paid_local_nonprim
        );

    if (!status_monthly_breakdown_local_var) {
        goto end;
    }

    return status_monthly_breakdown_local_var;
end:
    if (_default_local_nonprim) {
        monthly_counts_free(_default_local_nonprim);
        _default_local_nonprim = NULL;
    }
    if (failed_local_nonprim) {
        monthly_counts_free(failed_local_nonprim);
        failed_local_nonprim = NULL;
    }
    if (rejected_local_nonprim) {
        monthly_counts_free(rejected_local_nonprim);
        rejected_local_nonprim = NULL;
    }
    if (pending_local_nonprim) {
        monthly_counts_free(pending_local_nonprim);
        pending_local_nonprim = NULL;
    }
    if (locked_local_nonprim) {
        monthly_counts_free(locked_local_nonprim);
        locked_local_nonprim = NULL;
    }
    if (paid_local_nonprim) {
        monthly_counts_free(paid_local_nonprim);
        paid_local_nonprim = NULL;
    }
    return NULL;

}
