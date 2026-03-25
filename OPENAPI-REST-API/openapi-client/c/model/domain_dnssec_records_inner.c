#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_dnssec_records_inner.h"



static domain_dnssec_records_inner_t *domain_dnssec_records_inner_create_internal(
    char *algorithm,
    char *digest_type,
    char *digest,
    char *key_tag
    ) {
    domain_dnssec_records_inner_t *domain_dnssec_records_inner_local_var = malloc(sizeof(domain_dnssec_records_inner_t));
    if (!domain_dnssec_records_inner_local_var) {
        return NULL;
    }
    memset(domain_dnssec_records_inner_local_var, 0, sizeof(domain_dnssec_records_inner_t));
    domain_dnssec_records_inner_local_var->_library_owned = 1;
    domain_dnssec_records_inner_local_var->algorithm = algorithm;
    domain_dnssec_records_inner_local_var->digest_type = digest_type;
    domain_dnssec_records_inner_local_var->digest = digest;
    domain_dnssec_records_inner_local_var->key_tag = key_tag;
    return domain_dnssec_records_inner_local_var;
}

__attribute__((deprecated)) domain_dnssec_records_inner_t *domain_dnssec_records_inner_create(
    char *algorithm,
    char *digest_type,
    char *digest,
    char *key_tag
    ) {
    domain_dnssec_records_inner_t *result = domain_dnssec_records_inner_create_internal (
        algorithm,
        digest_type,
        digest,
        key_tag
        );
    if (!result) {
    }
    return result;
}

void domain_dnssec_records_inner_free(domain_dnssec_records_inner_t *domain_dnssec_records_inner) {
    if(NULL == domain_dnssec_records_inner){
        return ;
    }
    if(domain_dnssec_records_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_dnssec_records_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_dnssec_records_inner->algorithm) {
        free(domain_dnssec_records_inner->algorithm);
        domain_dnssec_records_inner->algorithm = NULL;
    }
    if (domain_dnssec_records_inner->digest_type) {
        free(domain_dnssec_records_inner->digest_type);
        domain_dnssec_records_inner->digest_type = NULL;
    }
    if (domain_dnssec_records_inner->digest) {
        free(domain_dnssec_records_inner->digest);
        domain_dnssec_records_inner->digest = NULL;
    }
    if (domain_dnssec_records_inner->key_tag) {
        free(domain_dnssec_records_inner->key_tag);
        domain_dnssec_records_inner->key_tag = NULL;
    }
    free(domain_dnssec_records_inner);
}

cJSON *domain_dnssec_records_inner_convertToJSON(domain_dnssec_records_inner_t *domain_dnssec_records_inner) {
    cJSON *item = cJSON_CreateObject();

    // domain_dnssec_records_inner->algorithm
    if(domain_dnssec_records_inner->algorithm) {
    if(cJSON_AddStringToObject(item, "algorithm", domain_dnssec_records_inner->algorithm) == NULL) {
    goto fail; //String
    }
    }


    // domain_dnssec_records_inner->digest_type
    if(domain_dnssec_records_inner->digest_type) {
    if(cJSON_AddStringToObject(item, "digest_type", domain_dnssec_records_inner->digest_type) == NULL) {
    goto fail; //String
    }
    }


    // domain_dnssec_records_inner->digest
    if(domain_dnssec_records_inner->digest) {
    if(cJSON_AddStringToObject(item, "digest", domain_dnssec_records_inner->digest) == NULL) {
    goto fail; //String
    }
    }


    // domain_dnssec_records_inner->key_tag
    if(domain_dnssec_records_inner->key_tag) {
    if(cJSON_AddStringToObject(item, "key_tag", domain_dnssec_records_inner->key_tag) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_dnssec_records_inner_t *domain_dnssec_records_inner_parseFromJSON(cJSON *domain_dnssec_records_innerJSON){

    domain_dnssec_records_inner_t *domain_dnssec_records_inner_local_var = NULL;

    char *algorithm_local_str = NULL;

    char *digest_type_local_str = NULL;

    char *digest_local_str = NULL;

    char *key_tag_local_str = NULL;

    // domain_dnssec_records_inner->algorithm
    cJSON *algorithm = cJSON_GetObjectItemCaseSensitive(domain_dnssec_records_innerJSON, "algorithm");
    if (cJSON_IsNull(algorithm)) {
        algorithm = NULL;
    }
    if (algorithm) { 
    if(!cJSON_IsString(algorithm) && !cJSON_IsNull(algorithm))
    {
    goto end; //String
    }
    }

    // domain_dnssec_records_inner->digest_type
    cJSON *digest_type = cJSON_GetObjectItemCaseSensitive(domain_dnssec_records_innerJSON, "digest_type");
    if (cJSON_IsNull(digest_type)) {
        digest_type = NULL;
    }
    if (digest_type) { 
    if(!cJSON_IsString(digest_type) && !cJSON_IsNull(digest_type))
    {
    goto end; //String
    }
    }

    // domain_dnssec_records_inner->digest
    cJSON *digest = cJSON_GetObjectItemCaseSensitive(domain_dnssec_records_innerJSON, "digest");
    if (cJSON_IsNull(digest)) {
        digest = NULL;
    }
    if (digest) { 
    if(!cJSON_IsString(digest) && !cJSON_IsNull(digest))
    {
    goto end; //String
    }
    }

    // domain_dnssec_records_inner->key_tag
    cJSON *key_tag = cJSON_GetObjectItemCaseSensitive(domain_dnssec_records_innerJSON, "key_tag");
    if (cJSON_IsNull(key_tag)) {
        key_tag = NULL;
    }
    if (key_tag) { 
    if(!cJSON_IsString(key_tag) && !cJSON_IsNull(key_tag))
    {
    goto end; //String
    }
    }


    if (algorithm && !cJSON_IsNull(algorithm)) algorithm_local_str = strdup(algorithm->valuestring);
    if (digest_type && !cJSON_IsNull(digest_type)) digest_type_local_str = strdup(digest_type->valuestring);
    if (digest && !cJSON_IsNull(digest)) digest_local_str = strdup(digest->valuestring);
    if (key_tag && !cJSON_IsNull(key_tag)) key_tag_local_str = strdup(key_tag->valuestring);

    domain_dnssec_records_inner_local_var = domain_dnssec_records_inner_create_internal (
        algorithm_local_str,
        digest_type_local_str,
        digest_local_str,
        key_tag_local_str
        );

    if (!domain_dnssec_records_inner_local_var) {
        goto end;
    }

    return domain_dnssec_records_inner_local_var;
end:
    if (algorithm_local_str) {
        free(algorithm_local_str);
        algorithm_local_str = NULL;
    }
    if (digest_type_local_str) {
        free(digest_type_local_str);
        digest_type_local_str = NULL;
    }
    if (digest_local_str) {
        free(digest_local_str);
        digest_local_str = NULL;
    }
    if (key_tag_local_str) {
        free(key_tag_local_str);
        key_tag_local_str = NULL;
    }
    return NULL;

}
