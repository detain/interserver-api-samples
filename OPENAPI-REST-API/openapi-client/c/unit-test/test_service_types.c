#ifndef service_types_TEST
#define service_types_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_types_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_types.h"
service_types_t* instantiate_service_types(int include_optional);



service_types_t* instantiate_service_types(int include_optional) {
  service_types_t* service_types = NULL;
  if (include_optional) {
    service_types = service_types_create(
    );
  } else {
    service_types = service_types_create(
    );
  }

  return service_types;
}


#ifdef service_types_MAIN

void test_service_types(int include_optional) {
    service_types_t* service_types_1 = instantiate_service_types(include_optional);

	cJSON* jsonservice_types_1 = service_types_convertToJSON(service_types_1);
	printf("service_types :\n%s\n", cJSON_Print(jsonservice_types_1));
	service_types_t* service_types_2 = service_types_parseFromJSON(jsonservice_types_1);
	cJSON* jsonservice_types_2 = service_types_convertToJSON(service_types_2);
	printf("repeating service_types:\n%s\n", cJSON_Print(jsonservice_types_2));
}

int main() {
  test_service_types(1);
  test_service_types(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_types_MAIN
#endif // service_types_TEST
