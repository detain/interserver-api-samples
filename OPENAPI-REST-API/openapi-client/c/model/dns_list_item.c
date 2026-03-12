#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dns_list_item.h"



static dns_list_item_t *dns_list_item_create_internal(
    int id,
    char *name,
    char *content
    ) {
    dns_list_item_t *dns_list_item_local_var = malloc(sizeof(dns_list_item_t));
    if (!dns_list_item_local_var) {
        return NULL;
    }
    dns_list_item_local_var->id = id;
    dns_list_item_local_var->name = name;
    dns_list_item_local_var->content = content;

    dns_list_item_local_var->_library_owned = 1;
    return dns_list_item_local_var;
}

__attribute__((deprecated)) dns_list_item_t *dns_list_item_create(
    int id,
    char *name,
    char *content
    ) {
    return dns_list_item_create_internal (
        id,
        name,
        content
        );
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
    if(cJSON_AddNumberToObject(item, "id", dns_list_item->id) == NULL) {
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


    dns_list_item_local_var = dns_list_item_create_internal (
        id ? id->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL
        );

    return dns_list_item_local_var;
end:
    return NULL;

}
