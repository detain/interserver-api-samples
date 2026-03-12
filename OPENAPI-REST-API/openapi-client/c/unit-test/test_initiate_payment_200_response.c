#ifndef initiate_payment_200_response_TEST
#define initiate_payment_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define initiate_payment_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/initiate_payment_200_response.h"
initiate_payment_200_response_t* instantiate_initiate_payment_200_response(int include_optional);



initiate_payment_200_response_t* instantiate_initiate_payment_200_response(int include_optional) {
  initiate_payment_200_response_t* initiate_payment_200_response = NULL;
  if (include_optional) {
    initiate_payment_200_response = initiate_payment_200_response_create(
      interserver_management_api_initiate_payment_200_response_TYPE_redirect,
      "0",
      "0",
      "0",
      0,
      "0"
    );
  } else {
    initiate_payment_200_response = initiate_payment_200_response_create(
      interserver_management_api_initiate_payment_200_response_TYPE_redirect,
      "0",
      "0",
      "0",
      0,
      "0"
    );
  }

  return initiate_payment_200_response;
}


#ifdef initiate_payment_200_response_MAIN

void test_initiate_payment_200_response(int include_optional) {
    initiate_payment_200_response_t* initiate_payment_200_response_1 = instantiate_initiate_payment_200_response(include_optional);

	cJSON* jsoninitiate_payment_200_response_1 = initiate_payment_200_response_convertToJSON(initiate_payment_200_response_1);
	printf("initiate_payment_200_response :\n%s\n", cJSON_Print(jsoninitiate_payment_200_response_1));
	initiate_payment_200_response_t* initiate_payment_200_response_2 = initiate_payment_200_response_parseFromJSON(jsoninitiate_payment_200_response_1);
	cJSON* jsoninitiate_payment_200_response_2 = initiate_payment_200_response_convertToJSON(initiate_payment_200_response_2);
	printf("repeating initiate_payment_200_response:\n%s\n", cJSON_Print(jsoninitiate_payment_200_response_2));
}

int main() {
  test_initiate_payment_200_response(1);
  test_initiate_payment_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // initiate_payment_200_response_MAIN
#endif // initiate_payment_200_response_TEST
