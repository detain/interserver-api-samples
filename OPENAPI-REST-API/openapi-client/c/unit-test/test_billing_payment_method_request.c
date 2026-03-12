#ifndef billing_payment_method_request_TEST
#define billing_payment_method_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billing_payment_method_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billing_payment_method_request.h"
billing_payment_method_request_t* instantiate_billing_payment_method_request(int include_optional);



billing_payment_method_request_t* instantiate_billing_payment_method_request(int include_optional) {
  billing_payment_method_request_t* billing_payment_method_request = NULL;
  if (include_optional) {
    billing_payment_method_request = billing_payment_method_request_create(
      "0",
      "0"
    );
  } else {
    billing_payment_method_request = billing_payment_method_request_create(
      "0",
      "0"
    );
  }

  return billing_payment_method_request;
}


#ifdef billing_payment_method_request_MAIN

void test_billing_payment_method_request(int include_optional) {
    billing_payment_method_request_t* billing_payment_method_request_1 = instantiate_billing_payment_method_request(include_optional);

	cJSON* jsonbilling_payment_method_request_1 = billing_payment_method_request_convertToJSON(billing_payment_method_request_1);
	printf("billing_payment_method_request :\n%s\n", cJSON_Print(jsonbilling_payment_method_request_1));
	billing_payment_method_request_t* billing_payment_method_request_2 = billing_payment_method_request_parseFromJSON(jsonbilling_payment_method_request_1);
	cJSON* jsonbilling_payment_method_request_2 = billing_payment_method_request_convertToJSON(billing_payment_method_request_2);
	printf("repeating billing_payment_method_request:\n%s\n", cJSON_Print(jsonbilling_payment_method_request_2));
}

int main() {
  test_billing_payment_method_request(1);
  test_billing_payment_method_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // billing_payment_method_request_MAIN
#endif // billing_payment_method_request_TEST
