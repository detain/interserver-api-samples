#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_ticket_status_view.h"



static home_ticket_status_view_t *home_ticket_status_view_create_internal(
    char *_4,
    char *_5,
    char *_6
    ) {
    home_ticket_status_view_t *home_ticket_status_view_local_var = malloc(sizeof(home_ticket_status_view_t));
    if (!home_ticket_status_view_local_var) {
        return NULL;
    }
    memset(home_ticket_status_view_local_var, 0, sizeof(home_ticket_status_view_t));
    home_ticket_status_view_local_var->_library_owned = 1;
    home_ticket_status_view_local_var->_4 = _4;
    home_ticket_status_view_local_var->_5 = _5;
    home_ticket_status_view_local_var->_6 = _6;
    return home_ticket_status_view_local_var;
}

__attribute__((deprecated)) home_ticket_status_view_t *home_ticket_status_view_create(
    char *_4,
    char *_5,
    char *_6
    ) {
    home_ticket_status_view_t *result = home_ticket_status_view_create_internal (
        _4,
        _5,
        _6
        );
    if (!result) {
    }
    return result;
}

void home_ticket_status_view_free(home_ticket_status_view_t *home_ticket_status_view) {
    if(NULL == home_ticket_status_view){
        return ;
    }
    if(home_ticket_status_view->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_ticket_status_view_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_ticket_status_view->_4) {
        free(home_ticket_status_view->_4);
        home_ticket_status_view->_4 = NULL;
    }
    if (home_ticket_status_view->_5) {
        free(home_ticket_status_view->_5);
        home_ticket_status_view->_5 = NULL;
    }
    if (home_ticket_status_view->_6) {
        free(home_ticket_status_view->_6);
        home_ticket_status_view->_6 = NULL;
    }
    free(home_ticket_status_view);
}

cJSON *home_ticket_status_view_convertToJSON(home_ticket_status_view_t *home_ticket_status_view) {
    cJSON *item = cJSON_CreateObject();

    // home_ticket_status_view->_4
    if(home_ticket_status_view->_4) {
    if(cJSON_AddStringToObject(item, "4", home_ticket_status_view->_4) == NULL) {
    goto fail; //String
    }
    }


    // home_ticket_status_view->_5
    if(home_ticket_status_view->_5) {
    if(cJSON_AddStringToObject(item, "5", home_ticket_status_view->_5) == NULL) {
    goto fail; //String
    }
    }


    // home_ticket_status_view->_6
    if(home_ticket_status_view->_6) {
    if(cJSON_AddStringToObject(item, "6", home_ticket_status_view->_6) == NULL) {
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

home_ticket_status_view_t *home_ticket_status_view_parseFromJSON(cJSON *home_ticket_status_viewJSON){

    home_ticket_status_view_t *home_ticket_status_view_local_var = NULL;

    char *_4_local_str = NULL;

    char *_5_local_str = NULL;

    char *_6_local_str = NULL;

    // home_ticket_status_view->_4
    cJSON *_4 = cJSON_GetObjectItemCaseSensitive(home_ticket_status_viewJSON, "4");
    if (cJSON_IsNull(_4)) {
        _4 = NULL;
    }
    if (_4) { 
    if(!cJSON_IsString(_4) && !cJSON_IsNull(_4))
    {
    goto end; //String
    }
    }

    // home_ticket_status_view->_5
    cJSON *_5 = cJSON_GetObjectItemCaseSensitive(home_ticket_status_viewJSON, "5");
    if (cJSON_IsNull(_5)) {
        _5 = NULL;
    }
    if (_5) { 
    if(!cJSON_IsString(_5) && !cJSON_IsNull(_5))
    {
    goto end; //String
    }
    }

    // home_ticket_status_view->_6
    cJSON *_6 = cJSON_GetObjectItemCaseSensitive(home_ticket_status_viewJSON, "6");
    if (cJSON_IsNull(_6)) {
        _6 = NULL;
    }
    if (_6) { 
    if(!cJSON_IsString(_6) && !cJSON_IsNull(_6))
    {
    goto end; //String
    }
    }


    if (_4 && !cJSON_IsNull(_4)) _4_local_str = strdup(_4->valuestring);
    if (_5 && !cJSON_IsNull(_5)) _5_local_str = strdup(_5->valuestring);
    if (_6 && !cJSON_IsNull(_6)) _6_local_str = strdup(_6->valuestring);

    home_ticket_status_view_local_var = home_ticket_status_view_create_internal (
        _4_local_str,
        _5_local_str,
        _6_local_str
        );

    if (!home_ticket_status_view_local_var) {
        goto end;
    }

    return home_ticket_status_view_local_var;
end:
    if (_4_local_str) {
        free(_4_local_str);
        _4_local_str = NULL;
    }
    if (_5_local_str) {
        free(_5_local_str);
        _5_local_str = NULL;
    }
    if (_6_local_str) {
        free(_6_local_str);
        _6_local_str = NULL;
    }
    return NULL;

}
