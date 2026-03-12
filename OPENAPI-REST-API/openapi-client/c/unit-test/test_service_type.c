#ifndef service_type_TEST
#define service_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_type.h"
service_type_t* instantiate_service_type(int include_optional);



service_type_t* instantiate_service_type(int include_optional) {
  service_type_t* service_type = NULL;
  if (include_optional) {
    service_type = service_type_create(
      600,
      "Dedicated Server",
      600,
      "servers"
    );
  } else {
    service_type = service_type_create(
      600,
      "Dedicated Server",
      600,
      "servers"
    );
  }

  return service_type;
}


#ifdef service_type_MAIN

void test_service_type(int include_optional) {
    service_type_t* service_type_1 = instantiate_service_type(include_optional);

	cJSON* jsonservice_type_1 = service_type_convertToJSON(service_type_1);
	printf("service_type :\n%s\n", cJSON_Print(jsonservice_type_1));
	service_type_t* service_type_2 = service_type_parseFromJSON(jsonservice_type_1);
	cJSON* jsonservice_type_2 = service_type_convertToJSON(service_type_2);
	printf("repeating service_type:\n%s\n", cJSON_Print(jsonservice_type_2));
}

int main() {
  test_service_type(1);
  test_service_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_type_MAIN
#endif // service_type_TEST
