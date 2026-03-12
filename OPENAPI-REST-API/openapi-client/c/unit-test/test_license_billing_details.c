#ifndef license_billing_details_TEST
#define license_billing_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define license_billing_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/license_billing_details.h"
license_billing_details_t* instantiate_license_billing_details(int include_optional);



license_billing_details_t* instantiate_license_billing_details(int include_optional) {
  license_billing_details_t* license_billing_details = NULL;
  if (include_optional) {
    license_billing_details = license_billing_details_create(
      "August 14, 2023",
      "Paid",
      "Monthly",
      "2023-09-14T09:39:46Z",
      "September 14, 2023",
      "USD",
      "$",
      "ACOUPONFORLICENSES",
      "0.00",
      list_createList(),
      "[""]"
    );
  } else {
    license_billing_details = license_billing_details_create(
      "August 14, 2023",
      "Paid",
      "Monthly",
      "2023-09-14T09:39:46Z",
      "September 14, 2023",
      "USD",
      "$",
      "ACOUPONFORLICENSES",
      "0.00",
      list_createList(),
      "[""]"
    );
  }

  return license_billing_details;
}


#ifdef license_billing_details_MAIN

void test_license_billing_details(int include_optional) {
    license_billing_details_t* license_billing_details_1 = instantiate_license_billing_details(include_optional);

	cJSON* jsonlicense_billing_details_1 = license_billing_details_convertToJSON(license_billing_details_1);
	printf("license_billing_details :\n%s\n", cJSON_Print(jsonlicense_billing_details_1));
	license_billing_details_t* license_billing_details_2 = license_billing_details_parseFromJSON(jsonlicense_billing_details_1);
	cJSON* jsonlicense_billing_details_2 = license_billing_details_convertToJSON(license_billing_details_2);
	printf("repeating license_billing_details:\n%s\n", cJSON_Print(jsonlicense_billing_details_2));
}

int main() {
  test_license_billing_details(1);
  test_license_billing_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // license_billing_details_MAIN
#endif // license_billing_details_TEST
