#ifndef domain_order_response_TEST
#define domain_order_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_order_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_order_response.h"
domain_order_response_t* instantiate_domain_order_response(int include_optional);

#include "test_domain_order_response_attributes.c"


domain_order_response_t* instantiate_domain_order_response(int include_optional) {
  domain_order_response_t* domain_order_response = NULL;
  if (include_optional) {
    domain_order_response = domain_order_response_create(
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_domain_order_response_attributes(0),
      "0",
      "0",
      "0"
    );
  } else {
    domain_order_response = domain_order_response_create(
      "0",
      "0",
      "0",
      "0",
      NULL,
      "0",
      "0",
      "0"
    );
  }

  return domain_order_response;
}


#ifdef domain_order_response_MAIN

void test_domain_order_response(int include_optional) {
    domain_order_response_t* domain_order_response_1 = instantiate_domain_order_response(include_optional);

	cJSON* jsondomain_order_response_1 = domain_order_response_convertToJSON(domain_order_response_1);
	printf("domain_order_response :\n%s\n", cJSON_Print(jsondomain_order_response_1));
	domain_order_response_t* domain_order_response_2 = domain_order_response_parseFromJSON(jsondomain_order_response_1);
	cJSON* jsondomain_order_response_2 = domain_order_response_convertToJSON(domain_order_response_2);
	printf("repeating domain_order_response:\n%s\n", cJSON_Print(jsondomain_order_response_2));
}

int main() {
  test_domain_order_response(1);
  test_domain_order_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_order_response_MAIN
#endif // domain_order_response_TEST
