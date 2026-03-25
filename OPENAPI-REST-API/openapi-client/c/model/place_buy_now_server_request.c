#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "place_buy_now_server_request.h"



static place_buy_now_server_request_t *place_buy_now_server_request_create_internal(
    double *server_id,
    char *server_hostname,
    char *server_root_password
    ) {
    place_buy_now_server_request_t *place_buy_now_server_request_local_var = malloc(sizeof(place_buy_now_server_request_t));
    if (!place_buy_now_server_request_local_var) {
        return NULL;
    }
    memset(place_buy_now_server_request_local_var, 0, sizeof(place_buy_now_server_request_t));
    place_buy_now_server_request_local_var->_library_owned = 1;
    place_buy_now_server_request_local_var->server_id = server_id;
    place_buy_now_server_request_local_var->server_hostname = server_hostname;
    place_buy_now_server_request_local_var->server_root_password = server_root_password;
    return place_buy_now_server_request_local_var;
}

__attribute__((deprecated)) place_buy_now_server_request_t *place_buy_now_server_request_create(
    double *server_id,
    char *server_hostname,
    char *server_root_password
    ) {
    double *server_id_copy = NULL;
    if (server_id) {
        server_id_copy = malloc(sizeof(double));
        if (server_id_copy) *server_id_copy = *server_id;
    }
    place_buy_now_server_request_t *result = place_buy_now_server_request_create_internal (
        server_id_copy,
        server_hostname,
        server_root_password
        );
    if (!result) {
        free(server_id_copy);
    }
    return result;
}

void place_buy_now_server_request_free(place_buy_now_server_request_t *place_buy_now_server_request) {
    if(NULL == place_buy_now_server_request){
        return ;
    }
    if(place_buy_now_server_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "place_buy_now_server_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (place_buy_now_server_request->server_id) {
        free(place_buy_now_server_request->server_id);
        place_buy_now_server_request->server_id = NULL;
    }
    if (place_buy_now_server_request->server_hostname) {
        free(place_buy_now_server_request->server_hostname);
        place_buy_now_server_request->server_hostname = NULL;
    }
    if (place_buy_now_server_request->server_root_password) {
        free(place_buy_now_server_request->server_root_password);
        place_buy_now_server_request->server_root_password = NULL;
    }
    free(place_buy_now_server_request);
}

cJSON *place_buy_now_server_request_convertToJSON(place_buy_now_server_request_t *place_buy_now_server_request) {
    cJSON *item = cJSON_CreateObject();

    // place_buy_now_server_request->server_id
    if(place_buy_now_server_request->server_id) {
    if(cJSON_AddNumberToObject(item, "server_id", *place_buy_now_server_request->server_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // place_buy_now_server_request->server_hostname
    if(place_buy_now_server_request->server_hostname) {
    if(cJSON_AddStringToObject(item, "server_hostname", place_buy_now_server_request->server_hostname) == NULL) {
    goto fail; //String
    }
    }


    // place_buy_now_server_request->server_root_password
    if(place_buy_now_server_request->server_root_password) {
    if(cJSON_AddStringToObject(item, "server_root_password", place_buy_now_server_request->server_root_password) == NULL) {
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

place_buy_now_server_request_t *place_buy_now_server_request_parseFromJSON(cJSON *place_buy_now_server_requestJSON){

    place_buy_now_server_request_t *place_buy_now_server_request_local_var = NULL;

    // define the local variable for place_buy_now_server_request->server_id
    double *server_id_local_var = NULL;

    char *server_hostname_local_str = NULL;

    char *server_root_password_local_str = NULL;

    // place_buy_now_server_request->server_id
    cJSON *server_id = cJSON_GetObjectItemCaseSensitive(place_buy_now_server_requestJSON, "server_id");
    if (cJSON_IsNull(server_id)) {
        server_id = NULL;
    }
    if (server_id) { 
    if(!cJSON_IsNumber(server_id))
    {
    goto end; //Numeric
    }
    server_id_local_var = malloc(sizeof(double));
    if(!server_id_local_var)
    {
        goto end;
    }
    *server_id_local_var = server_id->valuedouble;
    }

    // place_buy_now_server_request->server_hostname
    cJSON *server_hostname = cJSON_GetObjectItemCaseSensitive(place_buy_now_server_requestJSON, "server_hostname");
    if (cJSON_IsNull(server_hostname)) {
        server_hostname = NULL;
    }
    if (server_hostname) { 
    if(!cJSON_IsString(server_hostname) && !cJSON_IsNull(server_hostname))
    {
    goto end; //String
    }
    }

    // place_buy_now_server_request->server_root_password
    cJSON *server_root_password = cJSON_GetObjectItemCaseSensitive(place_buy_now_server_requestJSON, "server_root_password");
    if (cJSON_IsNull(server_root_password)) {
        server_root_password = NULL;
    }
    if (server_root_password) { 
    if(!cJSON_IsString(server_root_password) && !cJSON_IsNull(server_root_password))
    {
    goto end; //String
    }
    }


    if (server_hostname && !cJSON_IsNull(server_hostname)) server_hostname_local_str = strdup(server_hostname->valuestring);
    if (server_root_password && !cJSON_IsNull(server_root_password)) server_root_password_local_str = strdup(server_root_password->valuestring);

    place_buy_now_server_request_local_var = place_buy_now_server_request_create_internal (
        server_id_local_var,
        server_hostname_local_str,
        server_root_password_local_str
        );

    if (!place_buy_now_server_request_local_var) {
        goto end;
    }

    return place_buy_now_server_request_local_var;
end:
    if (server_id_local_var) {
        free(server_id_local_var);
        server_id_local_var = NULL;
    }
    if (server_hostname_local_str) {
        free(server_hostname_local_str);
        server_hostname_local_str = NULL;
    }
    if (server_root_password_local_str) {
        free(server_root_password_local_str);
        server_root_password_local_str = NULL;
    }
    return NULL;

}
