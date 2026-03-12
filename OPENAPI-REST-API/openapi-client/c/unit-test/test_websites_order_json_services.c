#ifndef websites_order_json_services_TEST
#define websites_order_json_services_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define websites_order_json_services_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/websites_order_json_services.h"
websites_order_json_services_t* instantiate_websites_order_json_services(int include_optional);



websites_order_json_services_t* instantiate_websites_order_json_services(int include_optional) {
  websites_order_json_services_t* websites_order_json_services = NULL;
  if (include_optional) {
    websites_order_json_services = websites_order_json_services_create(
      "5.00"
    );
  } else {
    websites_order_json_services = websites_order_json_services_create(
      "5.00"
    );
  }

  return websites_order_json_services;
}


#ifdef websites_order_json_services_MAIN

void test_websites_order_json_services(int include_optional) {
    websites_order_json_services_t* websites_order_json_services_1 = instantiate_websites_order_json_services(include_optional);

	cJSON* jsonwebsites_order_json_services_1 = websites_order_json_services_convertToJSON(websites_order_json_services_1);
	printf("websites_order_json_services :\n%s\n", cJSON_Print(jsonwebsites_order_json_services_1));
	websites_order_json_services_t* websites_order_json_services_2 = websites_order_json_services_parseFromJSON(jsonwebsites_order_json_services_1);
	cJSON* jsonwebsites_order_json_services_2 = websites_order_json_services_convertToJSON(websites_order_json_services_2);
	printf("repeating websites_order_json_services:\n%s\n", cJSON_Print(jsonwebsites_order_json_services_2));
}

int main() {
  test_websites_order_json_services(1);
  test_websites_order_json_services(0);

  printf("Hello world \n");
  return 0;
}

#endif // websites_order_json_services_MAIN
#endif // websites_order_json_services_TEST
