#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_locations.h"



static server_locations_t *server_locations_create_internal(
    server_location1_t *_1
    ) {
    server_locations_t *server_locations_local_var = malloc(sizeof(server_locations_t));
    if (!server_locations_local_var) {
        return NULL;
    }
    server_locations_local_var->_1 = _1;

    server_locations_local_var->_library_owned = 1;
    return server_locations_local_var;
}

__attribute__((deprecated)) server_locations_t *server_locations_create(
    server_location1_t *_1
    ) {
    return server_locations_create_internal (
        _1
        );
}

void server_locations_free(server_locations_t *server_locations) {
    if(NULL == server_locations){
        return ;
    }
    if(server_locations->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_locations_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_locations->_1) {
        server_location1_free(server_locations->_1);
        server_locations->_1 = NULL;
    }
    free(server_locations);
}

cJSON *server_locations_convertToJSON(server_locations_t *server_locations) {
    cJSON *item = cJSON_CreateObject();

    // server_locations->_1
    if(server_locations->_1) {
    cJSON *_1_local_JSON = server_location1_convertToJSON(server_locations->_1);
    if(_1_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "1", _1_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

server_locations_t *server_locations_parseFromJSON(cJSON *server_locationsJSON){

    server_locations_t *server_locations_local_var = NULL;

    // define the local variable for server_locations->_1
    server_location1_t *_1_local_nonprim = NULL;

    // server_locations->_1
    cJSON *_1 = cJSON_GetObjectItemCaseSensitive(server_locationsJSON, "1");
    if (cJSON_IsNull(_1)) {
        _1 = NULL;
    }
    if (_1) { 
    _1_local_nonprim = server_location1_parseFromJSON(_1); //nonprimitive
    }


    server_locations_local_var = server_locations_create_internal (
        _1 ? _1_local_nonprim : NULL
        );

    return server_locations_local_var;
end:
    if (_1_local_nonprim) {
        server_location1_free(_1_local_nonprim);
        _1_local_nonprim = NULL;
    }
    return NULL;

}
