#ifndef billing_prepay_request_TEST
#define billing_prepay_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billing_prepay_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billing_prepay_request.h"
billing_prepay_request_t* instantiate_billing_prepay_request(int include_optional);



billing_prepay_request_t* instantiate_billing_prepay_request(int include_optional) {
  billing_prepay_request_t* billing_prepay_request = NULL;
  if (include_optional) {
    billing_prepay_request = billing_prepay_request_create(
      "0",
      1.337,
      "1"
    );
  } else {
    billing_prepay_request = billing_prepay_request_create(
      "0",
      1.337,
      "1"
    );
  }

  return billing_prepay_request;
}


#ifdef billing_prepay_request_MAIN

void test_billing_prepay_request(int include_optional) {
    billing_prepay_request_t* billing_prepay_request_1 = instantiate_billing_prepay_request(include_optional);

	cJSON* jsonbilling_prepay_request_1 = billing_prepay_request_convertToJSON(billing_prepay_request_1);
	printf("billing_prepay_request :\n%s\n", cJSON_Print(jsonbilling_prepay_request_1));
	billing_prepay_request_t* billing_prepay_request_2 = billing_prepay_request_parseFromJSON(jsonbilling_prepay_request_1);
	cJSON* jsonbilling_prepay_request_2 = billing_prepay_request_convertToJSON(billing_prepay_request_2);
	printf("repeating billing_prepay_request:\n%s\n", cJSON_Print(jsonbilling_prepay_request_2));
}

int main() {
  test_billing_prepay_request(1);
  test_billing_prepay_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // billing_prepay_request_MAIN
#endif // billing_prepay_request_TEST
