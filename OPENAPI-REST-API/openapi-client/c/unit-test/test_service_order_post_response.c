#ifndef service_order_post_response_TEST
#define service_order_post_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_order_post_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_order_post_response.h"
service_order_post_response_t* instantiate_service_order_post_response(int include_optional);



service_order_post_response_t* instantiate_service_order_post_response(int include_optional) {
  service_order_post_response_t* service_order_post_response = NULL;
  if (include_optional) {
    service_order_post_response = service_order_post_response_create(
      1,
      list_createList(),
      "0",
      "0",
      list_createList(),
      list_createList(),
      56,
      "0"
    );
  } else {
    service_order_post_response = service_order_post_response_create(
      1,
      list_createList(),
      "0",
      "0",
      list_createList(),
      list_createList(),
      56,
      "0"
    );
  }

  return service_order_post_response;
}


#ifdef service_order_post_response_MAIN

void test_service_order_post_response(int include_optional) {
    service_order_post_response_t* service_order_post_response_1 = instantiate_service_order_post_response(include_optional);

	cJSON* jsonservice_order_post_response_1 = service_order_post_response_convertToJSON(service_order_post_response_1);
	printf("service_order_post_response :\n%s\n", cJSON_Print(jsonservice_order_post_response_1));
	service_order_post_response_t* service_order_post_response_2 = service_order_post_response_parseFromJSON(jsonservice_order_post_response_1);
	cJSON* jsonservice_order_post_response_2 = service_order_post_response_convertToJSON(service_order_post_response_2);
	printf("repeating service_order_post_response:\n%s\n", cJSON_Print(jsonservice_order_post_response_2));
}

int main() {
  test_service_order_post_response(1);
  test_service_order_post_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_order_post_response_MAIN
#endif // service_order_post_response_TEST
