#ifndef floating_ips_cancel_200_response_TEST
#define floating_ips_cancel_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define floating_ips_cancel_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/floating_ips_cancel_200_response.h"
floating_ips_cancel_200_response_t* instantiate_floating_ips_cancel_200_response(int include_optional);



floating_ips_cancel_200_response_t* instantiate_floating_ips_cancel_200_response(int include_optional) {
  floating_ips_cancel_200_response_t* floating_ips_cancel_200_response = NULL;
  if (include_optional) {
    floating_ips_cancel_200_response = floating_ips_cancel_200_response_create(
      1,
      "0"
    );
  } else {
    floating_ips_cancel_200_response = floating_ips_cancel_200_response_create(
      1,
      "0"
    );
  }

  return floating_ips_cancel_200_response;
}


#ifdef floating_ips_cancel_200_response_MAIN

void test_floating_ips_cancel_200_response(int include_optional) {
    floating_ips_cancel_200_response_t* floating_ips_cancel_200_response_1 = instantiate_floating_ips_cancel_200_response(include_optional);

	cJSON* jsonfloating_ips_cancel_200_response_1 = floating_ips_cancel_200_response_convertToJSON(floating_ips_cancel_200_response_1);
	printf("floating_ips_cancel_200_response :\n%s\n", cJSON_Print(jsonfloating_ips_cancel_200_response_1));
	floating_ips_cancel_200_response_t* floating_ips_cancel_200_response_2 = floating_ips_cancel_200_response_parseFromJSON(jsonfloating_ips_cancel_200_response_1);
	cJSON* jsonfloating_ips_cancel_200_response_2 = floating_ips_cancel_200_response_convertToJSON(floating_ips_cancel_200_response_2);
	printf("repeating floating_ips_cancel_200_response:\n%s\n", cJSON_Print(jsonfloating_ips_cancel_200_response_2));
}

int main() {
  test_floating_ips_cancel_200_response(1);
  test_floating_ips_cancel_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // floating_ips_cancel_200_response_MAIN
#endif // floating_ips_cancel_200_response_TEST
