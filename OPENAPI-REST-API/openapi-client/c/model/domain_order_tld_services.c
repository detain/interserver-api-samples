#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_order_tld_services.h"



static domain_order_tld_services_t *domain_order_tld_services_create_internal(
    int *_asia,
    int *_be,
    int *_biz,
    int *_ca
    ) {
    domain_order_tld_services_t *domain_order_tld_services_local_var = malloc(sizeof(domain_order_tld_services_t));
    if (!domain_order_tld_services_local_var) {
        return NULL;
    }
    memset(domain_order_tld_services_local_var, 0, sizeof(domain_order_tld_services_t));
    domain_order_tld_services_local_var->_library_owned = 1;
    domain_order_tld_services_local_var->_asia = _asia;
    domain_order_tld_services_local_var->_be = _be;
    domain_order_tld_services_local_var->_biz = _biz;
    domain_order_tld_services_local_var->_ca = _ca;
    return domain_order_tld_services_local_var;
}

__attribute__((deprecated)) domain_order_tld_services_t *domain_order_tld_services_create(
    int *_asia,
    int *_be,
    int *_biz,
    int *_ca
    ) {
    int *_asia_copy = NULL;
    if (_asia) {
        _asia_copy = malloc(sizeof(int));
        if (_asia_copy) *_asia_copy = *_asia;
    }
    int *_be_copy = NULL;
    if (_be) {
        _be_copy = malloc(sizeof(int));
        if (_be_copy) *_be_copy = *_be;
    }
    int *_biz_copy = NULL;
    if (_biz) {
        _biz_copy = malloc(sizeof(int));
        if (_biz_copy) *_biz_copy = *_biz;
    }
    int *_ca_copy = NULL;
    if (_ca) {
        _ca_copy = malloc(sizeof(int));
        if (_ca_copy) *_ca_copy = *_ca;
    }
    domain_order_tld_services_t *result = domain_order_tld_services_create_internal (
        _asia_copy,
        _be_copy,
        _biz_copy,
        _ca_copy
        );
    if (!result) {
        free(_asia_copy);
        free(_be_copy);
        free(_biz_copy);
        free(_ca_copy);
    }
    return result;
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
    if (domain_order_tld_services->_asia) {
        free(domain_order_tld_services->_asia);
        domain_order_tld_services->_asia = NULL;
    }
    if (domain_order_tld_services->_be) {
        free(domain_order_tld_services->_be);
        domain_order_tld_services->_be = NULL;
    }
    if (domain_order_tld_services->_biz) {
        free(domain_order_tld_services->_biz);
        domain_order_tld_services->_biz = NULL;
    }
    if (domain_order_tld_services->_ca) {
        free(domain_order_tld_services->_ca);
        domain_order_tld_services->_ca = NULL;
    }
    free(domain_order_tld_services);
}

cJSON *domain_order_tld_services_convertToJSON(domain_order_tld_services_t *domain_order_tld_services) {
    cJSON *item = cJSON_CreateObject();

    // domain_order_tld_services->_asia
    if(domain_order_tld_services->_asia) {
    if(cJSON_AddNumberToObject(item, ".asia", *domain_order_tld_services->_asia) == NULL) {
    goto fail; //Numeric
    }
    }


    // domain_order_tld_services->_be
    if(domain_order_tld_services->_be) {
    if(cJSON_AddNumberToObject(item, ".be", *domain_order_tld_services->_be) == NULL) {
    goto fail; //Numeric
    }
    }


    // domain_order_tld_services->_biz
    if(domain_order_tld_services->_biz) {
    if(cJSON_AddNumberToObject(item, ".biz", *domain_order_tld_services->_biz) == NULL) {
    goto fail; //Numeric
    }
    }


    // domain_order_tld_services->_ca
    if(domain_order_tld_services->_ca) {
    if(cJSON_AddNumberToObject(item, ".ca", *domain_order_tld_services->_ca) == NULL) {
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

    // define the local variable for domain_order_tld_services->_asia
    int *_asia_local_var = NULL;

    // define the local variable for domain_order_tld_services->_be
    int *_be_local_var = NULL;

    // define the local variable for domain_order_tld_services->_biz
    int *_biz_local_var = NULL;

    // define the local variable for domain_order_tld_services->_ca
    int *_ca_local_var = NULL;

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
    _asia_local_var = malloc(sizeof(int));
    if(!_asia_local_var)
    {
        goto end;
    }
    *_asia_local_var = _asia->valuedouble;
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
    _be_local_var = malloc(sizeof(int));
    if(!_be_local_var)
    {
        goto end;
    }
    *_be_local_var = _be->valuedouble;
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
    _biz_local_var = malloc(sizeof(int));
    if(!_biz_local_var)
    {
        goto end;
    }
    *_biz_local_var = _biz->valuedouble;
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
    _ca_local_var = malloc(sizeof(int));
    if(!_ca_local_var)
    {
        goto end;
    }
    *_ca_local_var = _ca->valuedouble;
    }



    domain_order_tld_services_local_var = domain_order_tld_services_create_internal (
        _asia_local_var,
        _be_local_var,
        _biz_local_var,
        _ca_local_var
        );

    if (!domain_order_tld_services_local_var) {
        goto end;
    }

    return domain_order_tld_services_local_var;
end:
    if (_asia_local_var) {
        free(_asia_local_var);
        _asia_local_var = NULL;
    }
    if (_be_local_var) {
        free(_be_local_var);
        _be_local_var = NULL;
    }
    if (_biz_local_var) {
        free(_biz_local_var);
        _biz_local_var = NULL;
    }
    if (_ca_local_var) {
        free(_ca_local_var);
        _ca_local_var = NULL;
    }
    return NULL;

}
