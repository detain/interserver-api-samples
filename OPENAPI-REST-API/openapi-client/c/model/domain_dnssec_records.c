#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_dnssec_records.h"



static domain_dnssec_records_t *domain_dnssec_records_create_internal(
    ) {
    domain_dnssec_records_t *domain_dnssec_records_local_var = malloc(sizeof(domain_dnssec_records_t));
    if (!domain_dnssec_records_local_var) {
        return NULL;
    }

    domain_dnssec_records_local_var->_library_owned = 1;
    return domain_dnssec_records_local_var;
}

__attribute__((deprecated)) domain_dnssec_records_t *domain_dnssec_records_create(
    ) {
    return domain_dnssec_records_create_internal (
        );
}

void domain_dnssec_records_free(domain_dnssec_records_t *domain_dnssec_records) {
    if(NULL == domain_dnssec_records){
        return ;
    }
    if(domain_dnssec_records->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_dnssec_records_free");
        return ;
    }
    listEntry_t *listEntry;
    free(domain_dnssec_records);
}

cJSON *domain_dnssec_records_convertToJSON(domain_dnssec_records_t *domain_dnssec_records) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_dnssec_records_t *domain_dnssec_records_parseFromJSON(cJSON *domain_dnssec_recordsJSON){

    domain_dnssec_records_t *domain_dnssec_records_local_var = NULL;


    domain_dnssec_records_local_var = domain_dnssec_records_create_internal (
        );

    return domain_dnssec_records_local_var;
end:
    return NULL;

}
