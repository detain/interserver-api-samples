#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_dnssec_request.h"



static domain_dnssec_request_t *domain_dnssec_request_create_internal(
    list_t *algorithm,
    list_t *digest_type,
    list_t *digest,
    list_t *key_tag
    ) {
    domain_dnssec_request_t *domain_dnssec_request_local_var = malloc(sizeof(domain_dnssec_request_t));
    if (!domain_dnssec_request_local_var) {
        return NULL;
    }
    memset(domain_dnssec_request_local_var, 0, sizeof(domain_dnssec_request_t));
    domain_dnssec_request_local_var->_library_owned = 1;
    domain_dnssec_request_local_var->algorithm = algorithm;
    domain_dnssec_request_local_var->digest_type = digest_type;
    domain_dnssec_request_local_var->digest = digest;
    domain_dnssec_request_local_var->key_tag = key_tag;
    return domain_dnssec_request_local_var;
}

__attribute__((deprecated)) domain_dnssec_request_t *domain_dnssec_request_create(
    list_t *algorithm,
    list_t *digest_type,
    list_t *digest,
    list_t *key_tag
    ) {
    domain_dnssec_request_t *result = domain_dnssec_request_create_internal (
        algorithm,
        digest_type,
        digest,
        key_tag
        );
    if (!result) {
    }
    return result;
}

void domain_dnssec_request_free(domain_dnssec_request_t *domain_dnssec_request) {
    if(NULL == domain_dnssec_request){
        return ;
    }
    if(domain_dnssec_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_dnssec_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_dnssec_request->algorithm) {
        list_ForEach(listEntry, domain_dnssec_request->algorithm) {
            free(listEntry->data);
        }
        list_freeList(domain_dnssec_request->algorithm);
        domain_dnssec_request->algorithm = NULL;
    }
    if (domain_dnssec_request->digest_type) {
        list_ForEach(listEntry, domain_dnssec_request->digest_type) {
            free(listEntry->data);
        }
        list_freeList(domain_dnssec_request->digest_type);
        domain_dnssec_request->digest_type = NULL;
    }
    if (domain_dnssec_request->digest) {
        list_ForEach(listEntry, domain_dnssec_request->digest) {
            free(listEntry->data);
        }
        list_freeList(domain_dnssec_request->digest);
        domain_dnssec_request->digest = NULL;
    }
    if (domain_dnssec_request->key_tag) {
        list_ForEach(listEntry, domain_dnssec_request->key_tag) {
            free(listEntry->data);
        }
        list_freeList(domain_dnssec_request->key_tag);
        domain_dnssec_request->key_tag = NULL;
    }
    free(domain_dnssec_request);
}

cJSON *domain_dnssec_request_convertToJSON(domain_dnssec_request_t *domain_dnssec_request) {
    cJSON *item = cJSON_CreateObject();

    // domain_dnssec_request->algorithm
    if(domain_dnssec_request->algorithm) {
    cJSON *algorithm = cJSON_AddArrayToObject(item, "algorithm");
    if(algorithm == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *algorithmListEntry;
    list_ForEach(algorithmListEntry, domain_dnssec_request->algorithm) {
    if(cJSON_AddNumberToObject(algorithm, "", *(double *)algorithmListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // domain_dnssec_request->digest_type
    if(domain_dnssec_request->digest_type) {
    cJSON *digest_type = cJSON_AddArrayToObject(item, "digest_type");
    if(digest_type == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *digest_typeListEntry;
    list_ForEach(digest_typeListEntry, domain_dnssec_request->digest_type) {
    if(cJSON_AddNumberToObject(digest_type, "", *(double *)digest_typeListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // domain_dnssec_request->digest
    if(domain_dnssec_request->digest) {
    cJSON *digest = cJSON_AddArrayToObject(item, "digest");
    if(digest == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *digestListEntry;
    list_ForEach(digestListEntry, domain_dnssec_request->digest) {
    if(cJSON_AddStringToObject(digest, "", digestListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // domain_dnssec_request->key_tag
    if(domain_dnssec_request->key_tag) {
    cJSON *key_tag = cJSON_AddArrayToObject(item, "key_tag");
    if(key_tag == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *key_tagListEntry;
    list_ForEach(key_tagListEntry, domain_dnssec_request->key_tag) {
    if(cJSON_AddNumberToObject(key_tag, "", *(double *)key_tagListEntry->data) == NULL)
    {
        goto fail;
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

domain_dnssec_request_t *domain_dnssec_request_parseFromJSON(cJSON *domain_dnssec_requestJSON){

    domain_dnssec_request_t *domain_dnssec_request_local_var = NULL;

    // define the local list for domain_dnssec_request->algorithm
    list_t *algorithmList = NULL;

    // define the local list for domain_dnssec_request->digest_type
    list_t *digest_typeList = NULL;

    // define the local list for domain_dnssec_request->digest
    list_t *digestList = NULL;

    // define the local list for domain_dnssec_request->key_tag
    list_t *key_tagList = NULL;

    // domain_dnssec_request->algorithm
    cJSON *algorithm = cJSON_GetObjectItemCaseSensitive(domain_dnssec_requestJSON, "algorithm");
    if (cJSON_IsNull(algorithm)) {
        algorithm = NULL;
    }
    if (algorithm) { 
    cJSON *algorithm_local = NULL;
    if(!cJSON_IsArray(algorithm)) {
        goto end;//primitive container
    }
    algorithmList = list_createList();

    cJSON_ArrayForEach(algorithm_local, algorithm)
    {
        if(!cJSON_IsNumber(algorithm_local))
        {
            goto end;
        }
        double *algorithm_local_value = calloc(1, sizeof(double));
        if(!algorithm_local_value)
        {
            goto end;
        }
        *algorithm_local_value = algorithm_local->valuedouble;
        list_addElement(algorithmList , algorithm_local_value);
    }
    }

    // domain_dnssec_request->digest_type
    cJSON *digest_type = cJSON_GetObjectItemCaseSensitive(domain_dnssec_requestJSON, "digest_type");
    if (cJSON_IsNull(digest_type)) {
        digest_type = NULL;
    }
    if (digest_type) { 
    cJSON *digest_type_local = NULL;
    if(!cJSON_IsArray(digest_type)) {
        goto end;//primitive container
    }
    digest_typeList = list_createList();

    cJSON_ArrayForEach(digest_type_local, digest_type)
    {
        if(!cJSON_IsNumber(digest_type_local))
        {
            goto end;
        }
        double *digest_type_local_value = calloc(1, sizeof(double));
        if(!digest_type_local_value)
        {
            goto end;
        }
        *digest_type_local_value = digest_type_local->valuedouble;
        list_addElement(digest_typeList , digest_type_local_value);
    }
    }

    // domain_dnssec_request->digest
    cJSON *digest = cJSON_GetObjectItemCaseSensitive(domain_dnssec_requestJSON, "digest");
    if (cJSON_IsNull(digest)) {
        digest = NULL;
    }
    if (digest) { 
    cJSON *digest_local = NULL;
    if(!cJSON_IsArray(digest)) {
        goto end;//primitive container
    }
    digestList = list_createList();

    cJSON_ArrayForEach(digest_local, digest)
    {
        if(!cJSON_IsString(digest_local))
        {
            goto end;
        }
        list_addElement(digestList , strdup(digest_local->valuestring));
    }
    }

    // domain_dnssec_request->key_tag
    cJSON *key_tag = cJSON_GetObjectItemCaseSensitive(domain_dnssec_requestJSON, "key_tag");
    if (cJSON_IsNull(key_tag)) {
        key_tag = NULL;
    }
    if (key_tag) { 
    cJSON *key_tag_local = NULL;
    if(!cJSON_IsArray(key_tag)) {
        goto end;//primitive container
    }
    key_tagList = list_createList();

    cJSON_ArrayForEach(key_tag_local, key_tag)
    {
        if(!cJSON_IsNumber(key_tag_local))
        {
            goto end;
        }
        double *key_tag_local_value = calloc(1, sizeof(double));
        if(!key_tag_local_value)
        {
            goto end;
        }
        *key_tag_local_value = key_tag_local->valuedouble;
        list_addElement(key_tagList , key_tag_local_value);
    }
    }



    domain_dnssec_request_local_var = domain_dnssec_request_create_internal (
        algorithm ? algorithmList : NULL,
        digest_type ? digest_typeList : NULL,
        digest ? digestList : NULL,
        key_tag ? key_tagList : NULL
        );

    if (!domain_dnssec_request_local_var) {
        goto end;
    }

    return domain_dnssec_request_local_var;
end:
    if (algorithmList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, algorithmList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(algorithmList);
        algorithmList = NULL;
    }
    if (digest_typeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, digest_typeList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(digest_typeList);
        digest_typeList = NULL;
    }
    if (digestList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, digestList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(digestList);
        digestList = NULL;
    }
    if (key_tagList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, key_tagList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(key_tagList);
        key_tagList = NULL;
    }
    return NULL;

}
