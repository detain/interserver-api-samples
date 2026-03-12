#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_field_label.h"



static server_order_field_label_t *server_order_field_label_create_internal(
    char *name,
    int active
    ) {
    server_order_field_label_t *server_order_field_label_local_var = malloc(sizeof(server_order_field_label_t));
    if (!server_order_field_label_local_var) {
        return NULL;
    }
    server_order_field_label_local_var->name = name;
    server_order_field_label_local_var->active = active;

    server_order_field_label_local_var->_library_owned = 1;
    return server_order_field_label_local_var;
}

__attribute__((deprecated)) server_order_field_label_t *server_order_field_label_create(
    char *name,
    int active
    ) {
    return server_order_field_label_create_internal (
        name,
        active
        );
}

void server_order_field_label_free(server_order_field_label_t *server_order_field_label) {
    if(NULL == server_order_field_label){
        return ;
    }
    if(server_order_field_label->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_field_label_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_field_label->name) {
        free(server_order_field_label->name);
        server_order_field_label->name = NULL;
    }
    free(server_order_field_label);
}

cJSON *server_order_field_label_convertToJSON(server_order_field_label_t *server_order_field_label) {
    cJSON *item = cJSON_CreateObject();

    // server_order_field_label->name
    if(server_order_field_label->name) {
    if(cJSON_AddStringToObject(item, "name", server_order_field_label->name) == NULL) {
    goto fail; //String
    }
    }


    // server_order_field_label->active
    if(server_order_field_label->active) {
    if(cJSON_AddNumberToObject(item, "active", server_order_field_label->active) == NULL) {
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

server_order_field_label_t *server_order_field_label_parseFromJSON(cJSON *server_order_field_labelJSON){

    server_order_field_label_t *server_order_field_label_local_var = NULL;

    // server_order_field_label->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(server_order_field_labelJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // server_order_field_label->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(server_order_field_labelJSON, "active");
    if (cJSON_IsNull(active)) {
        active = NULL;
    }
    if (active) { 
    if(!cJSON_IsNumber(active))
    {
    goto end; //Numeric
    }
    }


    server_order_field_label_local_var = server_order_field_label_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        active ? active->valuedouble : 0
        );

    return server_order_field_label_local_var;
end:
    return NULL;

}
