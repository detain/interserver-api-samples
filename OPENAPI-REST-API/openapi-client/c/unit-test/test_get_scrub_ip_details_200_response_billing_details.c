#ifndef get_scrub_ip_details_200_response_billing_details_TEST
#define get_scrub_ip_details_200_response_billing_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_scrub_ip_details_200_response_billing_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_scrub_ip_details_200_response_billing_details.h"
get_scrub_ip_details_200_response_billing_details_t* instantiate_get_scrub_ip_details_200_response_billing_details(int include_optional);



get_scrub_ip_details_200_response_billing_details_t* instantiate_get_scrub_ip_details_200_response_billing_details(int include_optional) {
  get_scrub_ip_details_200_response_billing_details_t* get_scrub_ip_details_200_response_billing_details = NULL;
  if (include_optional) {
    get_scrub_ip_details_200_response_billing_details = get_scrub_ip_details_200_response_billing_details_create(
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
    get_scrub_ip_details_200_response_billing_details = get_scrub_ip_details_200_response_billing_details_create(
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

  return get_scrub_ip_details_200_response_billing_details;
}


#ifdef get_scrub_ip_details_200_response_billing_details_MAIN

void test_get_scrub_ip_details_200_response_billing_details(int include_optional) {
    get_scrub_ip_details_200_response_billing_details_t* get_scrub_ip_details_200_response_billing_details_1 = instantiate_get_scrub_ip_details_200_response_billing_details(include_optional);

	cJSON* jsonget_scrub_ip_details_200_response_billing_details_1 = get_scrub_ip_details_200_response_billing_details_convertToJSON(get_scrub_ip_details_200_response_billing_details_1);
	printf("get_scrub_ip_details_200_response_billing_details :\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_billing_details_1));
	get_scrub_ip_details_200_response_billing_details_t* get_scrub_ip_details_200_response_billing_details_2 = get_scrub_ip_details_200_response_billing_details_parseFromJSON(jsonget_scrub_ip_details_200_response_billing_details_1);
	cJSON* jsonget_scrub_ip_details_200_response_billing_details_2 = get_scrub_ip_details_200_response_billing_details_convertToJSON(get_scrub_ip_details_200_response_billing_details_2);
	printf("repeating get_scrub_ip_details_200_response_billing_details:\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_billing_details_2));
}

int main() {
  test_get_scrub_ip_details_200_response_billing_details(1);
  test_get_scrub_ip_details_200_response_billing_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_scrub_ip_details_200_response_billing_details_MAIN
#endif // get_scrub_ip_details_200_response_billing_details_TEST
