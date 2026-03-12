#ifndef scrub_ip_place_order_TEST
#define scrub_ip_place_order_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scrub_ip_place_order_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scrub_ip_place_order.h"
scrub_ip_place_order_t* instantiate_scrub_ip_place_order(int include_optional);



scrub_ip_place_order_t* instantiate_scrub_ip_place_order(int include_optional) {
  scrub_ip_place_order_t* scrub_ip_place_order = NULL;
  if (include_optional) {
    scrub_ip_place_order = scrub_ip_place_order_create(
      102,
      "1.2.3.4"
    );
  } else {
    scrub_ip_place_order = scrub_ip_place_order_create(
      102,
      "1.2.3.4"
    );
  }

  return scrub_ip_place_order;
}


#ifdef scrub_ip_place_order_MAIN

void test_scrub_ip_place_order(int include_optional) {
    scrub_ip_place_order_t* scrub_ip_place_order_1 = instantiate_scrub_ip_place_order(include_optional);

	cJSON* jsonscrub_ip_place_order_1 = scrub_ip_place_order_convertToJSON(scrub_ip_place_order_1);
	printf("scrub_ip_place_order :\n%s\n", cJSON_Print(jsonscrub_ip_place_order_1));
	scrub_ip_place_order_t* scrub_ip_place_order_2 = scrub_ip_place_order_parseFromJSON(jsonscrub_ip_place_order_1);
	cJSON* jsonscrub_ip_place_order_2 = scrub_ip_place_order_convertToJSON(scrub_ip_place_order_2);
	printf("repeating scrub_ip_place_order:\n%s\n", cJSON_Print(jsonscrub_ip_place_order_2));
}

int main() {
  test_scrub_ip_place_order(1);
  test_scrub_ip_place_order(0);

  printf("Hello world \n");
  return 0;
}

#endif // scrub_ip_place_order_MAIN
#endif // scrub_ip_place_order_TEST
