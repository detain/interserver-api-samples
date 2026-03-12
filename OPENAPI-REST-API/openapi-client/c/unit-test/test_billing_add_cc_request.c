#ifndef billing_add_cc_request_TEST
#define billing_add_cc_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billing_add_cc_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billing_add_cc_request.h"
billing_add_cc_request_t* instantiate_billing_add_cc_request(int include_optional);



billing_add_cc_request_t* instantiate_billing_add_cc_request(int include_optional) {
  billing_add_cc_request_t* billing_add_cc_request = NULL;
  if (include_optional) {
    billing_add_cc_request = billing_add_cc_request_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    billing_add_cc_request = billing_add_cc_request_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return billing_add_cc_request;
}


#ifdef billing_add_cc_request_MAIN

void test_billing_add_cc_request(int include_optional) {
    billing_add_cc_request_t* billing_add_cc_request_1 = instantiate_billing_add_cc_request(include_optional);

	cJSON* jsonbilling_add_cc_request_1 = billing_add_cc_request_convertToJSON(billing_add_cc_request_1);
	printf("billing_add_cc_request :\n%s\n", cJSON_Print(jsonbilling_add_cc_request_1));
	billing_add_cc_request_t* billing_add_cc_request_2 = billing_add_cc_request_parseFromJSON(jsonbilling_add_cc_request_1);
	cJSON* jsonbilling_add_cc_request_2 = billing_add_cc_request_convertToJSON(billing_add_cc_request_2);
	printf("repeating billing_add_cc_request:\n%s\n", cJSON_Print(jsonbilling_add_cc_request_2));
}

int main() {
  test_billing_add_cc_request(1);
  test_billing_add_cc_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // billing_add_cc_request_MAIN
#endif // billing_add_cc_request_TEST
