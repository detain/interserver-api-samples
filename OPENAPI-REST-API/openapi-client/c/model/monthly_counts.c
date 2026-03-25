#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monthly_counts.h"



static monthly_counts_t *monthly_counts_create_internal(
    ) {
    monthly_counts_t *monthly_counts_local_var = malloc(sizeof(monthly_counts_t));
    if (!monthly_counts_local_var) {
        return NULL;
    }
    memset(monthly_counts_local_var, 0, sizeof(monthly_counts_t));
    monthly_counts_local_var->_library_owned = 1;
    return monthly_counts_local_var;
}

__attribute__((deprecated)) monthly_counts_t *monthly_counts_create(
    ) {
    monthly_counts_t *result = monthly_counts_create_internal (
        );
    if (!result) {
    }
    return result;
}

void monthly_counts_free(monthly_counts_t *monthly_counts) {
    if(NULL == monthly_counts){
        return ;
    }
    if(monthly_counts->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "monthly_counts_free");
        return ;
    }
    listEntry_t *listEntry;
    free(monthly_counts);
}

cJSON *monthly_counts_convertToJSON(monthly_counts_t *monthly_counts) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

monthly_counts_t *monthly_counts_parseFromJSON(cJSON *monthly_countsJSON){

    monthly_counts_t *monthly_counts_local_var = NULL;



    monthly_counts_local_var = monthly_counts_create_internal (
        );

    if (!monthly_counts_local_var) {
        goto end;
    }

    return monthly_counts_local_var;
end:
    return NULL;

}
