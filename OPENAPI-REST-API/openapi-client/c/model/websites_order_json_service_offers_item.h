/*
 * websites_order_json_service_offers_item.h
 *
 * 
 */

#ifndef _websites_order_json_service_offers_item_H_
#define _websites_order_json_service_offers_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websites_order_json_service_offers_item_t websites_order_json_service_offers_item_t;




typedef struct websites_order_json_service_offers_item_t {
    char *service_offer_id; // string
    char *service_id; // string
    int *intro_cost; //numeric
    int *renewal_cost; //numeric
    char *intro_frequency; // string
    char *renewal_frequency; // string
    char *allow_coupon; // string
    char *service_module; // string
    char *created_at; // string
    char *updated_at; // string
    char *deleted_at; // string
    char *currency_symbol; // string

    int _library_owned; // Is the library responsible for freeing this object?
} websites_order_json_service_offers_item_t;

__attribute__((deprecated)) websites_order_json_service_offers_item_t *websites_order_json_service_offers_item_create(
    char *service_offer_id,
    char *service_id,
    int *intro_cost,
    int *renewal_cost,
    char *intro_frequency,
    char *renewal_frequency,
    char *allow_coupon,
    char *service_module,
    char *created_at,
    char *updated_at,
    char *deleted_at,
    char *currency_symbol
);

void websites_order_json_service_offers_item_free(websites_order_json_service_offers_item_t *websites_order_json_service_offers_item);

websites_order_json_service_offers_item_t *websites_order_json_service_offers_item_parseFromJSON(cJSON *websites_order_json_service_offers_itemJSON);

cJSON *websites_order_json_service_offers_item_convertToJSON(websites_order_json_service_offers_item_t *websites_order_json_service_offers_item);

#endif /* _websites_order_json_service_offers_item_H_ */

