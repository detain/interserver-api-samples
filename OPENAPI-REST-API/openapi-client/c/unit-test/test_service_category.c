#ifndef service_category_TEST
#define service_category_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_category_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_category.h"
service_category_t* instantiate_service_category(int include_optional);



service_category_t* instantiate_service_category(int include_optional) {
  service_category_t* service_category = NULL;
  if (include_optional) {
    service_category = service_category_create(
      1,
      "OpenVZ Virtual Servers",
      "openvz",
      "vps"
    );
  } else {
    service_category = service_category_create(
      1,
      "OpenVZ Virtual Servers",
      "openvz",
      "vps"
    );
  }

  return service_category;
}


#ifdef service_category_MAIN

void test_service_category(int include_optional) {
    service_category_t* service_category_1 = instantiate_service_category(include_optional);

	cJSON* jsonservice_category_1 = service_category_convertToJSON(service_category_1);
	printf("service_category :\n%s\n", cJSON_Print(jsonservice_category_1));
	service_category_t* service_category_2 = service_category_parseFromJSON(jsonservice_category_1);
	cJSON* jsonservice_category_2 = service_category_convertToJSON(service_category_2);
	printf("repeating service_category:\n%s\n", cJSON_Print(jsonservice_category_2));
}

int main() {
  test_service_category(1);
  test_service_category(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_category_MAIN
#endif // service_category_TEST
