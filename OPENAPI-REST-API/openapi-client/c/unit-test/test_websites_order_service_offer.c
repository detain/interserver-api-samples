#ifndef websites_order_service_offer_TEST
#define websites_order_service_offer_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define websites_order_service_offer_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/websites_order_service_offer.h"
websites_order_service_offer_t* instantiate_websites_order_service_offer(int include_optional);



websites_order_service_offer_t* instantiate_websites_order_service_offer(int include_optional) {
  websites_order_service_offer_t* websites_order_service_offer = NULL;
  if (include_optional) {
    websites_order_service_offer = websites_order_service_offer_create(
      "136",
      "1026",
      "96.00",
      "96.00",
      "12",
      "12",
      "1",
      "webhosting",
      "2023-01-25T14:50:55.000Z",
      "0",
      "0"
    );
  } else {
    websites_order_service_offer = websites_order_service_offer_create(
      "136",
      "1026",
      "96.00",
      "96.00",
      "12",
      "12",
      "1",
      "webhosting",
      "2023-01-25T14:50:55.000Z",
      "0",
      "0"
    );
  }

  return websites_order_service_offer;
}


#ifdef websites_order_service_offer_MAIN

void test_websites_order_service_offer(int include_optional) {
    websites_order_service_offer_t* websites_order_service_offer_1 = instantiate_websites_order_service_offer(include_optional);

	cJSON* jsonwebsites_order_service_offer_1 = websites_order_service_offer_convertToJSON(websites_order_service_offer_1);
	printf("websites_order_service_offer :\n%s\n", cJSON_Print(jsonwebsites_order_service_offer_1));
	websites_order_service_offer_t* websites_order_service_offer_2 = websites_order_service_offer_parseFromJSON(jsonwebsites_order_service_offer_1);
	cJSON* jsonwebsites_order_service_offer_2 = websites_order_service_offer_convertToJSON(websites_order_service_offer_2);
	printf("repeating websites_order_service_offer:\n%s\n", cJSON_Print(jsonwebsites_order_service_offer_2));
}

int main() {
  test_websites_order_service_offer(1);
  test_websites_order_service_offer(0);

  printf("Hello world \n");
  return 0;
}

#endif // websites_order_service_offer_MAIN
#endif // websites_order_service_offer_TEST
