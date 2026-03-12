#ifndef service_TEST
#define service_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service.h"
service_t* instantiate_service(int include_optional);



service_t* instantiate_service(int include_optional) {
  service_t* service = NULL;
  if (include_optional) {
    service = service_create(
      31,
      "OpenVZ VPS Slice",
      6.0,
      "USD",
      1,
      true,
      6,
      "slice",
      "0",
      "vps"
    );
  } else {
    service = service_create(
      31,
      "OpenVZ VPS Slice",
      6.0,
      "USD",
      1,
      true,
      6,
      "slice",
      "0",
      "vps"
    );
  }

  return service;
}


#ifdef service_MAIN

void test_service(int include_optional) {
    service_t* service_1 = instantiate_service(include_optional);

	cJSON* jsonservice_1 = service_convertToJSON(service_1);
	printf("service :\n%s\n", cJSON_Print(jsonservice_1));
	service_t* service_2 = service_parseFromJSON(jsonservice_1);
	cJSON* jsonservice_2 = service_convertToJSON(service_2);
	printf("repeating service:\n%s\n", cJSON_Print(jsonservice_2));
}

int main() {
  test_service(1);
  test_service(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_MAIN
#endif // service_TEST
