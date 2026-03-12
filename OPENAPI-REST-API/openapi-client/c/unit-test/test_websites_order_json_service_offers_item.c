#ifndef websites_order_json_service_offers_item_TEST
#define websites_order_json_service_offers_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define websites_order_json_service_offers_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/websites_order_json_service_offers_item.h"
websites_order_json_service_offers_item_t* instantiate_websites_order_json_service_offers_item(int include_optional);



websites_order_json_service_offers_item_t* instantiate_websites_order_json_service_offers_item(int include_optional) {
  websites_order_json_service_offers_item_t* websites_order_json_service_offers_item = NULL;
  if (include_optional) {
    websites_order_json_service_offers_item = websites_order_json_service_offers_item_create(
      "136",
      "1026",
      96,
      96,
      "12",
      "12",
      "1",
      "webhosting",
      "2023-01-25T14:50:55.000Z",
      "0",
      "0",
      "$"
    );
  } else {
    websites_order_json_service_offers_item = websites_order_json_service_offers_item_create(
      "136",
      "1026",
      96,
      96,
      "12",
      "12",
      "1",
      "webhosting",
      "2023-01-25T14:50:55.000Z",
      "0",
      "0",
      "$"
    );
  }

  return websites_order_json_service_offers_item;
}


#ifdef websites_order_json_service_offers_item_MAIN

void test_websites_order_json_service_offers_item(int include_optional) {
    websites_order_json_service_offers_item_t* websites_order_json_service_offers_item_1 = instantiate_websites_order_json_service_offers_item(include_optional);

	cJSON* jsonwebsites_order_json_service_offers_item_1 = websites_order_json_service_offers_item_convertToJSON(websites_order_json_service_offers_item_1);
	printf("websites_order_json_service_offers_item :\n%s\n", cJSON_Print(jsonwebsites_order_json_service_offers_item_1));
	websites_order_json_service_offers_item_t* websites_order_json_service_offers_item_2 = websites_order_json_service_offers_item_parseFromJSON(jsonwebsites_order_json_service_offers_item_1);
	cJSON* jsonwebsites_order_json_service_offers_item_2 = websites_order_json_service_offers_item_convertToJSON(websites_order_json_service_offers_item_2);
	printf("repeating websites_order_json_service_offers_item:\n%s\n", cJSON_Print(jsonwebsites_order_json_service_offers_item_2));
}

int main() {
  test_websites_order_json_service_offers_item(1);
  test_websites_order_json_service_offers_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // websites_order_json_service_offers_item_MAIN
#endif // websites_order_json_service_offers_item_TEST
