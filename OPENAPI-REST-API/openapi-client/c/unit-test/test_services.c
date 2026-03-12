#ifndef services_TEST
#define services_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define services_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/services.h"
services_t* instantiate_services(int include_optional);



services_t* instantiate_services(int include_optional) {
  services_t* services = NULL;
  if (include_optional) {
    services = services_create(
    );
  } else {
    services = services_create(
    );
  }

  return services;
}


#ifdef services_MAIN

void test_services(int include_optional) {
    services_t* services_1 = instantiate_services(include_optional);

	cJSON* jsonservices_1 = services_convertToJSON(services_1);
	printf("services :\n%s\n", cJSON_Print(jsonservices_1));
	services_t* services_2 = services_parseFromJSON(jsonservices_1);
	cJSON* jsonservices_2 = services_convertToJSON(services_2);
	printf("repeating services:\n%s\n", cJSON_Print(jsonservices_2));
}

int main() {
  test_services(1);
  test_services(0);

  printf("Hello world \n");
  return 0;
}

#endif // services_MAIN
#endif // services_TEST
