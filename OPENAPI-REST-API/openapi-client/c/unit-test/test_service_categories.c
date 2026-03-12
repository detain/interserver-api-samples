#ifndef service_categories_TEST
#define service_categories_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_categories_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_categories.h"
service_categories_t* instantiate_service_categories(int include_optional);



service_categories_t* instantiate_service_categories(int include_optional) {
  service_categories_t* service_categories = NULL;
  if (include_optional) {
    service_categories = service_categories_create(
    );
  } else {
    service_categories = service_categories_create(
    );
  }

  return service_categories;
}


#ifdef service_categories_MAIN

void test_service_categories(int include_optional) {
    service_categories_t* service_categories_1 = instantiate_service_categories(include_optional);

	cJSON* jsonservice_categories_1 = service_categories_convertToJSON(service_categories_1);
	printf("service_categories :\n%s\n", cJSON_Print(jsonservice_categories_1));
	service_categories_t* service_categories_2 = service_categories_parseFromJSON(jsonservice_categories_1);
	cJSON* jsonservice_categories_2 = service_categories_convertToJSON(service_categories_2);
	printf("repeating service_categories:\n%s\n", cJSON_Print(jsonservice_categories_2));
}

int main() {
  test_service_categories(1);
  test_service_categories(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_categories_MAIN
#endif // service_categories_TEST
