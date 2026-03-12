#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_nameserver_get_response.h"



static domain_nameserver_get_response_t *domain_nameserver_get_response_create_internal(
    ) {
    domain_nameserver_get_response_t *domain_nameserver_get_response_local_var = malloc(sizeof(domain_nameserver_get_response_t));
    if (!domain_nameserver_get_response_local_var) {
        return NULL;
    }

    domain_nameserver_get_response_local_var->_library_owned = 1;
    return domain_nameserver_get_response_local_var;
}

__attribute__((deprecated)) domain_nameserver_get_response_t *domain_nameserver_get_response_create(
    ) {
    return domain_nameserver_get_response_create_internal (
        );
}

void domain_nameserver_get_response_free(domain_nameserver_get_response_t *domain_nameserver_get_response) {
    if(NULL == domain_nameserver_get_response){
        return ;
    }
    if(domain_nameserver_get_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_nameserver_get_response_free");
        return ;
    }
    listEntry_t *listEntry;
    free(domain_nameserver_get_response);
}

cJSON *domain_nameserver_get_response_convertToJSON(domain_nameserver_get_response_t *domain_nameserver_get_response) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_nameserver_get_response_t *domain_nameserver_get_response_parseFromJSON(cJSON *domain_nameserver_get_responseJSON){

    domain_nameserver_get_response_t *domain_nameserver_get_response_local_var = NULL;


    domain_nameserver_get_response_local_var = domain_nameserver_get_response_create_internal (
        );

    return domain_nameserver_get_response_local_var;
end:
    return NULL;

}
