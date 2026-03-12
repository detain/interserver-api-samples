#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_order_tld_services.h"



static domain_order_tld_services_t *domain_order_tld_services_create_internal(
    int _asia,
    int _be,
    int _biz,
    int _ca
    ) {
    domain_order_tld_services_t *domain_order_tld_services_local_var = malloc(sizeof(domain_order_tld_services_t));
    if (!domain_order_tld_services_local_var) {
        return NULL;
    }
    domain_order_tld_services_local_var->_asia = _asia;
    domain_order_tld_services_local_var->_be = _be;
    domain_order_tld_services_local_var->_biz = _biz;
    domain_order_tld_services_local_var->_ca = _ca;

    domain_order_tld_services_local_var->_library_owned = 1;
    return domain_order_tld_services_local_var;
}

__attribute__((deprecated)) domain_order_tld_services_t *domain_order_tld_services_create(
    int _asia,
    int _be,
    int _biz,
    int _ca
    ) {
    return domain_order_tld_services_create_internal (
        _asia,
        _be,
        _biz,
        _ca
        );
}

void domain_order_tld_services_free(domain_order_tld_services_t *domain_order_tld_services) {
    if(NULL == domain_order_tld_services){
        return ;
    }
    if(domain_order_tld_services->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_order_tld_services_free");
        return ;
    }
    listEntry_t *listEntry;
    free(domain_order_tld_services);
}

cJSON *domain_order_tld_services_convertToJSON(domain_order_tld_services_t *domain_order_tld_services) {
    cJSON *item = cJSON_CreateObject();

    // domain_order_tld_services->_asia
    if(domain_order_tld_services->_asia) {
    if(cJSON_AddNumberToObject(item, ".asia", domain_order_tld_services->_asia) == NULL) {
    goto fail; //Numeric
    }
    }


    // domain_order_tld_services->_be
    if(domain_order_tld_services->_be) {
    if(cJSON_AddNumberToObject(item, ".be", domain_order_tld_services->_be) == NULL) {
    goto fail; //Numeric
    }
    }


    // domain_order_tld_services->_biz
    if(domain_order_tld_services->_biz) {
    if(cJSON_AddNumberToObject(item, ".biz", domain_order_tld_services->_biz) == NULL) {
    goto fail; //Numeric
    }
    }


    // domain_order_tld_services->_ca
    if(domain_order_tld_services->_ca) {
    if(cJSON_AddNumberToObject(item, ".ca", domain_order_tld_services->_ca) == NULL) {
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

domain_order_tld_services_t *domain_order_tld_services_parseFromJSON(cJSON *domain_order_tld_servicesJSON){

    domain_order_tld_services_t *domain_order_tld_services_local_var = NULL;

    // domain_order_tld_services->_asia
    cJSON *_asia = cJSON_GetObjectItemCaseSensitive(domain_order_tld_servicesJSON, ".asia");
    if (cJSON_IsNull(_asia)) {
        _asia = NULL;
    }
    if (_asia) { 
    if(!cJSON_IsNumber(_asia))
    {
    goto end; //Numeric
    }
    }

    // domain_order_tld_services->_be
    cJSON *_be = cJSON_GetObjectItemCaseSensitive(domain_order_tld_servicesJSON, ".be");
    if (cJSON_IsNull(_be)) {
        _be = NULL;
    }
    if (_be) { 
    if(!cJSON_IsNumber(_be))
    {
    goto end; //Numeric
    }
    }

    // domain_order_tld_services->_biz
    cJSON *_biz = cJSON_GetObjectItemCaseSensitive(domain_order_tld_servicesJSON, ".biz");
    if (cJSON_IsNull(_biz)) {
        _biz = NULL;
    }
    if (_biz) { 
    if(!cJSON_IsNumber(_biz))
    {
    goto end; //Numeric
    }
    }

    // domain_order_tld_services->_ca
    cJSON *_ca = cJSON_GetObjectItemCaseSensitive(domain_order_tld_servicesJSON, ".ca");
    if (cJSON_IsNull(_ca)) {
        _ca = NULL;
    }
    if (_ca) { 
    if(!cJSON_IsNumber(_ca))
    {
    goto end; //Numeric
    }
    }


    domain_order_tld_services_local_var = domain_order_tld_services_create_internal (
        _asia ? _asia->valuedouble : 0,
        _be ? _be->valuedouble : 0,
        _biz ? _biz->valuedouble : 0,
        _ca ? _ca->valuedouble : 0
        );

    return domain_order_tld_services_local_var;
end:
    return NULL;

}
