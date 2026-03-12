#ifndef website_billing_details_TEST
#define website_billing_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_billing_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_billing_details.h"
website_billing_details_t* instantiate_website_billing_details(int include_optional);



website_billing_details_t* instantiate_website_billing_details(int include_optional) {
  website_billing_details_t* website_billing_details = NULL;
  if (include_optional) {
    website_billing_details = website_billing_details_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "USD",
      "$",
      "0",
      "0",
      0,
      "0"
    );
  } else {
    website_billing_details = website_billing_details_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "USD",
      "$",
      "0",
      "0",
      0,
      "0"
    );
  }

  return website_billing_details;
}


#ifdef website_billing_details_MAIN

void test_website_billing_details(int include_optional) {
    website_billing_details_t* website_billing_details_1 = instantiate_website_billing_details(include_optional);

	cJSON* jsonwebsite_billing_details_1 = website_billing_details_convertToJSON(website_billing_details_1);
	printf("website_billing_details :\n%s\n", cJSON_Print(jsonwebsite_billing_details_1));
	website_billing_details_t* website_billing_details_2 = website_billing_details_parseFromJSON(jsonwebsite_billing_details_1);
	cJSON* jsonwebsite_billing_details_2 = website_billing_details_convertToJSON(website_billing_details_2);
	printf("repeating website_billing_details:\n%s\n", cJSON_Print(jsonwebsite_billing_details_2));
}

int main() {
  test_website_billing_details(1);
  test_website_billing_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_billing_details_MAIN
#endif // website_billing_details_TEST
