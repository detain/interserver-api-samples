#ifndef websites_order_packages_info_TEST
#define websites_order_packages_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define websites_order_packages_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/websites_order_packages_info.h"
websites_order_packages_info_t* instantiate_websites_order_packages_info(int include_optional);



websites_order_packages_info_t* instantiate_websites_order_packages_info(int include_optional) {
  websites_order_packages_info_t* websites_order_packages_info = NULL;
  if (include_optional) {
    websites_order_packages_info = websites_order_packages_info_create(
      "11440",
      "DA BOOST X",
      "69.95",
      "204",
      "1",
      "206",
      "webhosting",
      "Direct Admin Web hosting package with 10x more resources over our standard web hosting package.",
      "0",
      "BoostX",
      "0",
      "0",
      "0"
    );
  } else {
    websites_order_packages_info = websites_order_packages_info_create(
      "11440",
      "DA BOOST X",
      "69.95",
      "204",
      "1",
      "206",
      "webhosting",
      "Direct Admin Web hosting package with 10x more resources over our standard web hosting package.",
      "0",
      "BoostX",
      "0",
      "0",
      "0"
    );
  }

  return websites_order_packages_info;
}


#ifdef websites_order_packages_info_MAIN

void test_websites_order_packages_info(int include_optional) {
    websites_order_packages_info_t* websites_order_packages_info_1 = instantiate_websites_order_packages_info(include_optional);

	cJSON* jsonwebsites_order_packages_info_1 = websites_order_packages_info_convertToJSON(websites_order_packages_info_1);
	printf("websites_order_packages_info :\n%s\n", cJSON_Print(jsonwebsites_order_packages_info_1));
	websites_order_packages_info_t* websites_order_packages_info_2 = websites_order_packages_info_parseFromJSON(jsonwebsites_order_packages_info_1);
	cJSON* jsonwebsites_order_packages_info_2 = websites_order_packages_info_convertToJSON(websites_order_packages_info_2);
	printf("repeating websites_order_packages_info:\n%s\n", cJSON_Print(jsonwebsites_order_packages_info_2));
}

int main() {
  test_websites_order_packages_info(1);
  test_websites_order_packages_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // websites_order_packages_info_MAIN
#endif // websites_order_packages_info_TEST
