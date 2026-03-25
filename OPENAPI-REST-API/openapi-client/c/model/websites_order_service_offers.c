#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websites_order_service_offers.h"



static websites_order_service_offers_t *websites_order_service_offers_create_internal(
    list_t *_1026
    ) {
    websites_order_service_offers_t *websites_order_service_offers_local_var = malloc(sizeof(websites_order_service_offers_t));
    if (!websites_order_service_offers_local_var) {
        return NULL;
    }
    memset(websites_order_service_offers_local_var, 0, sizeof(websites_order_service_offers_t));
    websites_order_service_offers_local_var->_library_owned = 1;
    websites_order_service_offers_local_var->_1026 = _1026;
    return websites_order_service_offers_local_var;
}

__attribute__((deprecated)) websites_order_service_offers_t *websites_order_service_offers_create(
    list_t *_1026
    ) {
    websites_order_service_offers_t *result = websites_order_service_offers_create_internal (
        _1026
        );
    if (!result) {
    }
    return result;
}

void websites_order_service_offers_free(websites_order_service_offers_t *websites_order_service_offers) {
    if(NULL == websites_order_service_offers){
        return ;
    }
    if(websites_order_service_offers->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "websites_order_service_offers_free");
        return ;
    }
    listEntry_t *listEntry;
    if (websites_order_service_offers->_1026) {
        list_ForEach(listEntry, websites_order_service_offers->_1026) {
            websites_order_service_offer_free(listEntry->data);
        }
        list_freeList(websites_order_service_offers->_1026);
        websites_order_service_offers->_1026 = NULL;
    }
    free(websites_order_service_offers);
}

cJSON *websites_order_service_offers_convertToJSON(websites_order_service_offers_t *websites_order_service_offers) {
    cJSON *item = cJSON_CreateObject();

    // websites_order_service_offers->_1026
    if (!websites_order_service_offers->_1026) {
        goto fail;
    }
    cJSON *_1026 = cJSON_AddArrayToObject(item, "1026");
    if(_1026 == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *_1026ListEntry;
    if (websites_order_service_offers->_1026) {
    list_ForEach(_1026ListEntry, websites_order_service_offers->_1026) {
    cJSON *itemLocal = websites_order_service_offer_convertToJSON(_1026ListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(_1026, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

websites_order_service_offers_t *websites_order_service_offers_parseFromJSON(cJSON *websites_order_service_offersJSON){

    websites_order_service_offers_t *websites_order_service_offers_local_var = NULL;

    // define the local list for websites_order_service_offers->_1026
    list_t *_1026List = NULL;

    // websites_order_service_offers->_1026
    cJSON *_1026 = cJSON_GetObjectItemCaseSensitive(websites_order_service_offersJSON, "1026");
    if (cJSON_IsNull(_1026)) {
        _1026 = NULL;
    }
    if (!_1026) {
        goto end;
    }

    
    cJSON *_1026_local_nonprimitive = NULL;
    if(!cJSON_IsArray(_1026)){
        goto end; //nonprimitive container
    }

    _1026List = list_createList();

    cJSON_ArrayForEach(_1026_local_nonprimitive,_1026 )
    {
        if(!cJSON_IsObject(_1026_local_nonprimitive)){
            goto end;
        }
        websites_order_service_offer_t *_1026Item = websites_order_service_offer_parseFromJSON(_1026_local_nonprimitive);

        list_addElement(_1026List, _1026Item);
    }



    websites_order_service_offers_local_var = websites_order_service_offers_create_internal (
        _1026List
        );

    if (!websites_order_service_offers_local_var) {
        goto end;
    }

    return websites_order_service_offers_local_var;
end:
    if (_1026List) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, _1026List) {
            websites_order_service_offer_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(_1026List);
        _1026List = NULL;
    }
    return NULL;

}
