#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dns_list_item.h"



static dns_list_item_t *dns_list_item_create_internal(
    int *id,
    char *name,
    char *content
    ) {
    dns_list_item_t *dns_list_item_local_var = malloc(sizeof(dns_list_item_t));
    if (!dns_list_item_local_var) {
        return NULL;
    }
    memset(dns_list_item_local_var, 0, sizeof(dns_list_item_t));
    dns_list_item_local_var->_library_owned = 1;
    dns_list_item_local_var->id = id;
    dns_list_item_local_var->name = name;
    dns_list_item_local_var->content = content;
    return dns_list_item_local_var;
}

__attribute__((deprecated)) dns_list_item_t *dns_list_item_create(
    int *id,
    char *name,
    char *content
    ) {
    int *id_copy = NULL;
    if (id) {
        id_copy = malloc(sizeof(int));
        if (id_copy) *id_copy = *id;
    }
    dns_list_item_t *result = dns_list_item_create_internal (
        id_copy,
        name,
        content
        );
    if (!result) {
        free(id_copy);
    }
    return result;
}

void dns_list_item_free(dns_list_item_t *dns_list_item) {
    if(NULL == dns_list_item){
        return ;
    }
    if(dns_list_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "dns_list_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (dns_list_item->id) {
        free(dns_list_item->id);
        dns_list_item->id = NULL;
    }
    if (dns_list_item->name) {
        free(dns_list_item->name);
        dns_list_item->name = NULL;
    }
    if (dns_list_item->content) {
        free(dns_list_item->content);
        dns_list_item->content = NULL;
    }
    free(dns_list_item);
}

cJSON *dns_list_item_convertToJSON(dns_list_item_t *dns_list_item) {
    cJSON *item = cJSON_CreateObject();

    // dns_list_item->id
    if(dns_list_item->id) {
    if(cJSON_AddNumberToObject(item, "id", *dns_list_item->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // dns_list_item->name
    if(dns_list_item->name) {
    if(cJSON_AddStringToObject(item, "name", dns_list_item->name) == NULL) {
    goto fail; //String
    }
    }


    // dns_list_item->content
    if(dns_list_item->content) {
    if(cJSON_AddStringToObject(item, "content", dns_list_item->content) == NULL) {
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

dns_list_item_t *dns_list_item_parseFromJSON(cJSON *dns_list_itemJSON){

    dns_list_item_t *dns_list_item_local_var = NULL;

    // define the local variable for dns_list_item->id
    int *id_local_var = NULL;

    char *name_local_str = NULL;

    char *content_local_str = NULL;

    // dns_list_item->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(dns_list_itemJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    id_local_var = malloc(sizeof(int));
    if(!id_local_var)
    {
        goto end;
    }
    *id_local_var = id->valuedouble;
    }

    // dns_list_item->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dns_list_itemJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // dns_list_item->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(dns_list_itemJSON, "content");
    if (cJSON_IsNull(content)) {
        content = NULL;
    }
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }


    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (content && !cJSON_IsNull(content)) content_local_str = strdup(content->valuestring);

    dns_list_item_local_var = dns_list_item_create_internal (
        id_local_var,
        name_local_str,
        content_local_str
        );

    if (!dns_list_item_local_var) {
        goto end;
    }

    return dns_list_item_local_var;
end:
    if (id_local_var) {
        free(id_local_var);
        id_local_var = NULL;
    }
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (content_local_str) {
        free(content_local_str);
        content_local_str = NULL;
    }
    return NULL;

}
