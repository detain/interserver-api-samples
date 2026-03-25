#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "search_autocomplete_response.h"



static search_autocomplete_response_t *search_autocomplete_response_create_internal(
    ) {
    search_autocomplete_response_t *search_autocomplete_response_local_var = malloc(sizeof(search_autocomplete_response_t));
    if (!search_autocomplete_response_local_var) {
        return NULL;
    }
    memset(search_autocomplete_response_local_var, 0, sizeof(search_autocomplete_response_t));
    search_autocomplete_response_local_var->_library_owned = 1;
    return search_autocomplete_response_local_var;
}

__attribute__((deprecated)) search_autocomplete_response_t *search_autocomplete_response_create(
    ) {
    search_autocomplete_response_t *result = search_autocomplete_response_create_internal (
        );
    if (!result) {
    }
    return result;
}

void search_autocomplete_response_free(search_autocomplete_response_t *search_autocomplete_response) {
    if(NULL == search_autocomplete_response){
        return ;
    }
    if(search_autocomplete_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "search_autocomplete_response_free");
        return ;
    }
    listEntry_t *listEntry;
    free(search_autocomplete_response);
}

cJSON *search_autocomplete_response_convertToJSON(search_autocomplete_response_t *search_autocomplete_response) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

search_autocomplete_response_t *search_autocomplete_response_parseFromJSON(cJSON *search_autocomplete_responseJSON){

    search_autocomplete_response_t *search_autocomplete_response_local_var = NULL;



    search_autocomplete_response_local_var = search_autocomplete_response_create_internal (
        );

    if (!search_autocomplete_response_local_var) {
        goto end;
    }

    return search_autocomplete_response_local_var;
end:
    return NULL;

}
