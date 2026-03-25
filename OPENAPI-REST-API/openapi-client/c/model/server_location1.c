#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_location1.h"



static server_location1_t *server_location1_create_internal(
    int *location_id,
    char *location_name,
    char *location_lat,
    char *location_long,
    char *location_description,
    int *location_ipmi_group
    ) {
    server_location1_t *server_location1_local_var = malloc(sizeof(server_location1_t));
    if (!server_location1_local_var) {
        return NULL;
    }
    memset(server_location1_local_var, 0, sizeof(server_location1_t));
    server_location1_local_var->_library_owned = 1;
    server_location1_local_var->location_id = location_id;
    server_location1_local_var->location_name = location_name;
    server_location1_local_var->location_lat = location_lat;
    server_location1_local_var->location_long = location_long;
    server_location1_local_var->location_description = location_description;
    server_location1_local_var->location_ipmi_group = location_ipmi_group;
    return server_location1_local_var;
}

__attribute__((deprecated)) server_location1_t *server_location1_create(
    int *location_id,
    char *location_name,
    char *location_lat,
    char *location_long,
    char *location_description,
    int *location_ipmi_group
    ) {
    int *location_id_copy = NULL;
    if (location_id) {
        location_id_copy = malloc(sizeof(int));
        if (location_id_copy) *location_id_copy = *location_id;
    }
    int *location_ipmi_group_copy = NULL;
    if (location_ipmi_group) {
        location_ipmi_group_copy = malloc(sizeof(int));
        if (location_ipmi_group_copy) *location_ipmi_group_copy = *location_ipmi_group;
    }
    server_location1_t *result = server_location1_create_internal (
        location_id_copy,
        location_name,
        location_lat,
        location_long,
        location_description,
        location_ipmi_group_copy
        );
    if (!result) {
        free(location_id_copy);
        free(location_ipmi_group_copy);
    }
    return result;
}

void server_location1_free(server_location1_t *server_location1) {
    if(NULL == server_location1){
        return ;
    }
    if(server_location1->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_location1_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_location1->location_id) {
        free(server_location1->location_id);
        server_location1->location_id = NULL;
    }
    if (server_location1->location_name) {
        free(server_location1->location_name);
        server_location1->location_name = NULL;
    }
    if (server_location1->location_lat) {
        free(server_location1->location_lat);
        server_location1->location_lat = NULL;
    }
    if (server_location1->location_long) {
        free(server_location1->location_long);
        server_location1->location_long = NULL;
    }
    if (server_location1->location_description) {
        free(server_location1->location_description);
        server_location1->location_description = NULL;
    }
    if (server_location1->location_ipmi_group) {
        free(server_location1->location_ipmi_group);
        server_location1->location_ipmi_group = NULL;
    }
    free(server_location1);
}

cJSON *server_location1_convertToJSON(server_location1_t *server_location1) {
    cJSON *item = cJSON_CreateObject();

    // server_location1->location_id
    if (!server_location1->location_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "location_id", *server_location1->location_id) == NULL) {
    goto fail; //Numeric
    }


    // server_location1->location_name
    if (!server_location1->location_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "location_name", server_location1->location_name) == NULL) {
    goto fail; //String
    }


    // server_location1->location_lat
    if (!server_location1->location_lat) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "location_lat", server_location1->location_lat) == NULL) {
    goto fail; //String
    }


    // server_location1->location_long
    if (!server_location1->location_long) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "location_long", server_location1->location_long) == NULL) {
    goto fail; //String
    }


    // server_location1->location_description
    if(server_location1->location_description) {
    if(cJSON_AddStringToObject(item, "location_description", server_location1->location_description) == NULL) {
    goto fail; //String
    }
    }


    // server_location1->location_ipmi_group
    if(server_location1->location_ipmi_group) {
    if(cJSON_AddNumberToObject(item, "location_ipmi_group", *server_location1->location_ipmi_group) == NULL) {
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

server_location1_t *server_location1_parseFromJSON(cJSON *server_location1JSON){

    server_location1_t *server_location1_local_var = NULL;

    // define the local variable for server_location1->location_id
    int *location_id_local_var = NULL;

    char *location_name_local_str = NULL;

    char *location_lat_local_str = NULL;

    char *location_long_local_str = NULL;

    char *location_description_local_str = NULL;

    // define the local variable for server_location1->location_ipmi_group
    int *location_ipmi_group_local_var = NULL;

    // server_location1->location_id
    cJSON *location_id = cJSON_GetObjectItemCaseSensitive(server_location1JSON, "location_id");
    if (cJSON_IsNull(location_id)) {
        location_id = NULL;
    }
    if (!location_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(location_id))
    {
    goto end; //Numeric
    }
    location_id_local_var = malloc(sizeof(int));
    if(!location_id_local_var)
    {
        goto end;
    }
    *location_id_local_var = location_id->valuedouble;

    // server_location1->location_name
    cJSON *location_name = cJSON_GetObjectItemCaseSensitive(server_location1JSON, "location_name");
    if (cJSON_IsNull(location_name)) {
        location_name = NULL;
    }
    if (!location_name) {
        goto end;
    }

    
    if(!cJSON_IsString(location_name))
    {
    goto end; //String
    }

    // server_location1->location_lat
    cJSON *location_lat = cJSON_GetObjectItemCaseSensitive(server_location1JSON, "location_lat");
    if (cJSON_IsNull(location_lat)) {
        location_lat = NULL;
    }
    if (!location_lat) {
        goto end;
    }

    
    if(!cJSON_IsString(location_lat))
    {
    goto end; //String
    }

    // server_location1->location_long
    cJSON *location_long = cJSON_GetObjectItemCaseSensitive(server_location1JSON, "location_long");
    if (cJSON_IsNull(location_long)) {
        location_long = NULL;
    }
    if (!location_long) {
        goto end;
    }

    
    if(!cJSON_IsString(location_long))
    {
    goto end; //String
    }

    // server_location1->location_description
    cJSON *location_description = cJSON_GetObjectItemCaseSensitive(server_location1JSON, "location_description");
    if (cJSON_IsNull(location_description)) {
        location_description = NULL;
    }
    if (location_description) { 
    if(!cJSON_IsString(location_description) && !cJSON_IsNull(location_description))
    {
    goto end; //String
    }
    }

    // server_location1->location_ipmi_group
    cJSON *location_ipmi_group = cJSON_GetObjectItemCaseSensitive(server_location1JSON, "location_ipmi_group");
    if (cJSON_IsNull(location_ipmi_group)) {
        location_ipmi_group = NULL;
    }
    if (location_ipmi_group) { 
    if(!cJSON_IsNumber(location_ipmi_group))
    {
    goto end; //Numeric
    }
    location_ipmi_group_local_var = malloc(sizeof(int));
    if(!location_ipmi_group_local_var)
    {
        goto end;
    }
    *location_ipmi_group_local_var = location_ipmi_group->valuedouble;
    }


    if (location_name && !cJSON_IsNull(location_name)) location_name_local_str = strdup(location_name->valuestring);
    if (location_lat && !cJSON_IsNull(location_lat)) location_lat_local_str = strdup(location_lat->valuestring);
    if (location_long && !cJSON_IsNull(location_long)) location_long_local_str = strdup(location_long->valuestring);
    if (location_description && !cJSON_IsNull(location_description)) location_description_local_str = strdup(location_description->valuestring);

    server_location1_local_var = server_location1_create_internal (
        location_id_local_var,
        location_name_local_str,
        location_lat_local_str,
        location_long_local_str,
        location_description_local_str,
        location_ipmi_group_local_var
        );

    if (!server_location1_local_var) {
        goto end;
    }

    return server_location1_local_var;
end:
    if (location_id_local_var) {
        free(location_id_local_var);
        location_id_local_var = NULL;
    }
    if (location_name_local_str) {
        free(location_name_local_str);
        location_name_local_str = NULL;
    }
    if (location_lat_local_str) {
        free(location_lat_local_str);
        location_lat_local_str = NULL;
    }
    if (location_long_local_str) {
        free(location_long_local_str);
        location_long_local_str = NULL;
    }
    if (location_description_local_str) {
        free(location_description_local_str);
        location_description_local_str = NULL;
    }
    if (location_ipmi_group_local_var) {
        free(location_ipmi_group_local_var);
        location_ipmi_group_local_var = NULL;
    }
    return NULL;

}
