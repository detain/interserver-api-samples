#ifndef websites_order_packages_TEST
#define websites_order_packages_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define websites_order_packages_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/websites_order_packages.h"
websites_order_packages_t* instantiate_websites_order_packages(int include_optional);



websites_order_packages_t* instantiate_websites_order_packages(int include_optional) {
  websites_order_packages_t* websites_order_packages = NULL;
  if (include_optional) {
    websites_order_packages = websites_order_packages_create(
      "Web Hosting Direct Admin (PriceLock)"
    );
  } else {
    websites_order_packages = websites_order_packages_create(
      "Web Hosting Direct Admin (PriceLock)"
    );
  }

  return websites_order_packages;
}


#ifdef websites_order_packages_MAIN

void test_websites_order_packages(int include_optional) {
    websites_order_packages_t* websites_order_packages_1 = instantiate_websites_order_packages(include_optional);

	cJSON* jsonwebsites_order_packages_1 = websites_order_packages_convertToJSON(websites_order_packages_1);
	printf("websites_order_packages :\n%s\n", cJSON_Print(jsonwebsites_order_packages_1));
	websites_order_packages_t* websites_order_packages_2 = websites_order_packages_parseFromJSON(jsonwebsites_order_packages_1);
	cJSON* jsonwebsites_order_packages_2 = websites_order_packages_convertToJSON(websites_order_packages_2);
	printf("repeating websites_order_packages:\n%s\n", cJSON_Print(jsonwebsites_order_packages_2));
}

int main() {
  test_websites_order_packages(1);
  test_websites_order_packages(0);

  printf("Hello world \n");
  return 0;
}

#endif // websites_order_packages_MAIN
#endif // websites_order_packages_TEST
