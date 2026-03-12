#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "initiate_payment_200_response.h"


char* initiate_payment_200_response_type_ToString(interserver_management_api_initiate_payment_200_response_TYPE_e type) {
    char* typeArray[] =  { "NULL", "redirect", "submit", "single" };
    return typeArray[type];
}

interserver_management_api_initiate_payment_200_response_TYPE_e initiate_payment_200_response_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "redirect", "submit", "single" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static initiate_payment_200_response_t *initiate_payment_200_response_create_internal(
    interserver_management_api_initiate_payment_200_response_TYPE_e type,
    char *redirect,
    char *action,
    char *method,
    object_t *items,
    char *text
    ) {
    initiate_payment_200_response_t *initiate_payment_200_response_local_var = malloc(sizeof(initiate_payment_200_response_t));
    if (!initiate_payment_200_response_local_var) {
        return NULL;
    }
    initiate_payment_200_response_local_var->type = type;
    initiate_payment_200_response_local_var->redirect = redirect;
    initiate_payment_200_response_local_var->action = action;
    initiate_payment_200_response_local_var->method = method;
    initiate_payment_200_response_local_var->items = items;
    initiate_payment_200_response_local_var->text = text;

    initiate_payment_200_response_local_var->_library_owned = 1;
    return initiate_payment_200_response_local_var;
}

__attribute__((deprecated)) initiate_payment_200_response_t *initiate_payment_200_response_create(
    interserver_management_api_initiate_payment_200_response_TYPE_e type,
    char *redirect,
    char *action,
    char *method,
    object_t *items,
    char *text
    ) {
    return initiate_payment_200_response_create_internal (
        type,
        redirect,
        action,
        method,
        items,
        text
        );
}

void initiate_payment_200_response_free(initiate_payment_200_response_t *initiate_payment_200_response) {
    if(NULL == initiate_payment_200_response){
        return ;
    }
    if(initiate_payment_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "initiate_payment_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (initiate_payment_200_response->redirect) {
        free(initiate_payment_200_response->redirect);
        initiate_payment_200_response->redirect = NULL;
    }
    if (initiate_payment_200_response->action) {
        free(initiate_payment_200_response->action);
        initiate_payment_200_response->action = NULL;
    }
    if (initiate_payment_200_response->method) {
        free(initiate_payment_200_response->method);
        initiate_payment_200_response->method = NULL;
    }
    if (initiate_payment_200_response->items) {
        object_free(initiate_payment_200_response->items);
        initiate_payment_200_response->items = NULL;
    }
    if (initiate_payment_200_response->text) {
        free(initiate_payment_200_response->text);
        initiate_payment_200_response->text = NULL;
    }
    free(initiate_payment_200_response);
}

cJSON *initiate_payment_200_response_convertToJSON(initiate_payment_200_response_t *initiate_payment_200_response) {
    cJSON *item = cJSON_CreateObject();

    // initiate_payment_200_response->type
    if(initiate_payment_200_response->type != interserver_management_api_initiate_payment_200_response_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", initiate_payment_200_response_type_ToString(initiate_payment_200_response->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // initiate_payment_200_response->redirect
    if(initiate_payment_200_response->redirect) {
    if(cJSON_AddStringToObject(item, "redirect", initiate_payment_200_response->redirect) == NULL) {
    goto fail; //String
    }
    }


    // initiate_payment_200_response->action
    if(initiate_payment_200_response->action) {
    if(cJSON_AddStringToObject(item, "action", initiate_payment_200_response->action) == NULL) {
    goto fail; //String
    }
    }


    // initiate_payment_200_response->method
    if(initiate_payment_200_response->method) {
    if(cJSON_AddStringToObject(item, "method", initiate_payment_200_response->method) == NULL) {
    goto fail; //String
    }
    }


    // initiate_payment_200_response->items
    if(initiate_payment_200_response->items) {
    cJSON *items_object = object_convertToJSON(initiate_payment_200_response->items);
    if(items_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "items", items_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // initiate_payment_200_response->text
    if(initiate_payment_200_response->text) {
    if(cJSON_AddStringToObject(item, "text", initiate_payment_200_response->text) == NULL) {
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

initiate_payment_200_response_t *initiate_payment_200_response_parseFromJSON(cJSON *initiate_payment_200_responseJSON){

    initiate_payment_200_response_t *initiate_payment_200_response_local_var = NULL;

    // initiate_payment_200_response->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(initiate_payment_200_responseJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    interserver_management_api_initiate_payment_200_response_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = initiate_payment_200_response_type_FromString(type->valuestring);
    }

    // initiate_payment_200_response->redirect
    cJSON *redirect = cJSON_GetObjectItemCaseSensitive(initiate_payment_200_responseJSON, "redirect");
    if (cJSON_IsNull(redirect)) {
        redirect = NULL;
    }
    if (redirect) { 
    if(!cJSON_IsString(redirect) && !cJSON_IsNull(redirect))
    {
    goto end; //String
    }
    }

    // initiate_payment_200_response->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(initiate_payment_200_responseJSON, "action");
    if (cJSON_IsNull(action)) {
        action = NULL;
    }
    if (action) { 
    if(!cJSON_IsString(action) && !cJSON_IsNull(action))
    {
    goto end; //String
    }
    }

    // initiate_payment_200_response->method
    cJSON *method = cJSON_GetObjectItemCaseSensitive(initiate_payment_200_responseJSON, "method");
    if (cJSON_IsNull(method)) {
        method = NULL;
    }
    if (method) { 
    if(!cJSON_IsString(method) && !cJSON_IsNull(method))
    {
    goto end; //String
    }
    }

    // initiate_payment_200_response->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(initiate_payment_200_responseJSON, "items");
    if (cJSON_IsNull(items)) {
        items = NULL;
    }
    object_t *items_local_object = NULL;
    if (items) { 
    items_local_object = object_parseFromJSON(items); //object
    }

    // initiate_payment_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(initiate_payment_200_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }


    initiate_payment_200_response_local_var = initiate_payment_200_response_create_internal (
        type ? typeVariable : interserver_management_api_initiate_payment_200_response_TYPE_NULL,
        redirect && !cJSON_IsNull(redirect) ? strdup(redirect->valuestring) : NULL,
        action && !cJSON_IsNull(action) ? strdup(action->valuestring) : NULL,
        method && !cJSON_IsNull(method) ? strdup(method->valuestring) : NULL,
        items ? items_local_object : NULL,
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL
        );

    return initiate_payment_200_response_local_var;
end:
    return NULL;

}
