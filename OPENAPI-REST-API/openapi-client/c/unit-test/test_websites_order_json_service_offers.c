#ifndef websites_order_json_service_offers_TEST
#define websites_order_json_service_offers_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define websites_order_json_service_offers_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/websites_order_json_service_offers.h"
websites_order_json_service_offers_t* instantiate_websites_order_json_service_offers(int include_optional);



websites_order_json_service_offers_t* instantiate_websites_order_json_service_offers(int include_optional) {
  websites_order_json_service_offers_t* websites_order_json_service_offers = NULL;
  if (include_optional) {
    websites_order_json_service_offers = websites_order_json_service_offers_create(
      list_createList()
    );
  } else {
    websites_order_json_service_offers = websites_order_json_service_offers_create(
      list_createList()
    );
  }

  return websites_order_json_service_offers;
}


#ifdef websites_order_json_service_offers_MAIN

void test_websites_order_json_service_offers(int include_optional) {
    websites_order_json_service_offers_t* websites_order_json_service_offers_1 = instantiate_websites_order_json_service_offers(include_optional);

	cJSON* jsonwebsites_order_json_service_offers_1 = websites_order_json_service_offers_convertToJSON(websites_order_json_service_offers_1);
	printf("websites_order_json_service_offers :\n%s\n", cJSON_Print(jsonwebsites_order_json_service_offers_1));
	websites_order_json_service_offers_t* websites_order_json_service_offers_2 = websites_order_json_service_offers_parseFromJSON(jsonwebsites_order_json_service_offers_1);
	cJSON* jsonwebsites_order_json_service_offers_2 = websites_order_json_service_offers_convertToJSON(websites_order_json_service_offers_2);
	printf("repeating websites_order_json_service_offers:\n%s\n", cJSON_Print(jsonwebsites_order_json_service_offers_2));
}

int main() {
  test_websites_order_json_service_offers(1);
  test_websites_order_json_service_offers(0);

  printf("Hello world \n");
  return 0;
}

#endif // websites_order_json_service_offers_MAIN
#endif // websites_order_json_service_offers_TEST
