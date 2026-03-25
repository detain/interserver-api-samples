#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_filter.h"



static create_filter_t *create_filter_create_internal(
    char *filter_type,
    int *port
    ) {
    create_filter_t *create_filter_local_var = malloc(sizeof(create_filter_t));
    if (!create_filter_local_var) {
        return NULL;
    }
    memset(create_filter_local_var, 0, sizeof(create_filter_t));
    create_filter_local_var->_library_owned = 1;
    create_filter_local_var->filter_type = filter_type;
    create_filter_local_var->port = port;
    return create_filter_local_var;
}

__attribute__((deprecated)) create_filter_t *create_filter_create(
    char *filter_type,
    int *port
    ) {
    int *port_copy = NULL;
    if (port) {
        port_copy = malloc(sizeof(int));
        if (port_copy) *port_copy = *port;
    }
    create_filter_t *result = create_filter_create_internal (
        filter_type,
        port_copy
        );
    if (!result) {
        free(port_copy);
    }
    return result;
}

void create_filter_free(create_filter_t *create_filter) {
    if(NULL == create_filter){
        return ;
    }
    if(create_filter->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "create_filter_free");
        return ;
    }
    listEntry_t *listEntry;
    if (create_filter->filter_type) {
        free(create_filter->filter_type);
        create_filter->filter_type = NULL;
    }
    if (create_filter->port) {
        free(create_filter->port);
        create_filter->port = NULL;
    }
    free(create_filter);
}

cJSON *create_filter_convertToJSON(create_filter_t *create_filter) {
    cJSON *item = cJSON_CreateObject();

    // create_filter->filter_type
    if (!create_filter->filter_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "filter_type", create_filter->filter_type) == NULL) {
    goto fail; //String
    }


    // create_filter->port
    if (!create_filter->port) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "port", *create_filter->port) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

create_filter_t *create_filter_parseFromJSON(cJSON *create_filterJSON){

    create_filter_t *create_filter_local_var = NULL;

    char *filter_type_local_str = NULL;

    // define the local variable for create_filter->port
    int *port_local_var = NULL;

    // create_filter->filter_type
    cJSON *filter_type = cJSON_GetObjectItemCaseSensitive(create_filterJSON, "filter_type");
    if (cJSON_IsNull(filter_type)) {
        filter_type = NULL;
    }
    if (!filter_type) {
        goto end;
    }

    
    if(!cJSON_IsString(filter_type))
    {
    goto end; //String
    }

    // create_filter->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(create_filterJSON, "port");
    if (cJSON_IsNull(port)) {
        port = NULL;
    }
    if (!port) {
        goto end;
    }

    
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }
    port_local_var = malloc(sizeof(int));
    if(!port_local_var)
    {
        goto end;
    }
    *port_local_var = port->valuedouble;


    if (filter_type && !cJSON_IsNull(filter_type)) filter_type_local_str = strdup(filter_type->valuestring);

    create_filter_local_var = create_filter_create_internal (
        filter_type_local_str,
        port_local_var
        );

    if (!create_filter_local_var) {
        goto end;
    }

    return create_filter_local_var;
end:
    if (filter_type_local_str) {
        free(filter_type_local_str);
        filter_type_local_str = NULL;
    }
    if (port_local_var) {
        free(port_local_var);
        port_local_var = NULL;
    }
    return NULL;

}
