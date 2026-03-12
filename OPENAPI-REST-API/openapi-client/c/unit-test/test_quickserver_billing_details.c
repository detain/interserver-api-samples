#ifndef quickserver_billing_details_TEST
#define quickserver_billing_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickserver_billing_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickserver_billing_details.h"
quickserver_billing_details_t* instantiate_quickserver_billing_details(int include_optional);

#include "test_quickserver_service_extra.c"


quickserver_billing_details_t* instantiate_quickserver_billing_details(int include_optional) {
  quickserver_billing_details_t* quickserver_billing_details = NULL;
  if (include_optional) {
    quickserver_billing_details = quickserver_billing_details_create(
      "April 11, 2023",
      "Paid",
      "Monthly",
      "2023-05-11T20:00:06.000Z",
      "May 11, 2023",
      "USD",
      "$",
      "49.00",
       // false, not to have infinite recursion
      instantiate_quickserver_service_extra(0),
      "{"platform":"kvm"}"
    );
  } else {
    quickserver_billing_details = quickserver_billing_details_create(
      "April 11, 2023",
      "Paid",
      "Monthly",
      "2023-05-11T20:00:06.000Z",
      "May 11, 2023",
      "USD",
      "$",
      "49.00",
      NULL,
      "{"platform":"kvm"}"
    );
  }

  return quickserver_billing_details;
}


#ifdef quickserver_billing_details_MAIN

void test_quickserver_billing_details(int include_optional) {
    quickserver_billing_details_t* quickserver_billing_details_1 = instantiate_quickserver_billing_details(include_optional);

	cJSON* jsonquickserver_billing_details_1 = quickserver_billing_details_convertToJSON(quickserver_billing_details_1);
	printf("quickserver_billing_details :\n%s\n", cJSON_Print(jsonquickserver_billing_details_1));
	quickserver_billing_details_t* quickserver_billing_details_2 = quickserver_billing_details_parseFromJSON(jsonquickserver_billing_details_1);
	cJSON* jsonquickserver_billing_details_2 = quickserver_billing_details_convertToJSON(quickserver_billing_details_2);
	printf("repeating quickserver_billing_details:\n%s\n", cJSON_Print(jsonquickserver_billing_details_2));
}

int main() {
  test_quickserver_billing_details(1);
  test_quickserver_billing_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickserver_billing_details_MAIN
#endif // quickserver_billing_details_TEST
