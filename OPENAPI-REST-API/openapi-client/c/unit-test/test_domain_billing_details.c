#ifndef domain_billing_details_TEST
#define domain_billing_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_billing_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_billing_details.h"
domain_billing_details_t* instantiate_domain_billing_details(int include_optional);

#include "test_domain_billing_extra.c"


domain_billing_details_t* instantiate_domain_billing_details(int include_optional) {
  domain_billing_details_t* domain_billing_details = NULL;
  if (include_optional) {
    domain_billing_details = domain_billing_details_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_domain_billing_extra(0),
      "0"
    );
  } else {
    domain_billing_details = domain_billing_details_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL,
      "0"
    );
  }

  return domain_billing_details;
}


#ifdef domain_billing_details_MAIN

void test_domain_billing_details(int include_optional) {
    domain_billing_details_t* domain_billing_details_1 = instantiate_domain_billing_details(include_optional);

	cJSON* jsondomain_billing_details_1 = domain_billing_details_convertToJSON(domain_billing_details_1);
	printf("domain_billing_details :\n%s\n", cJSON_Print(jsondomain_billing_details_1));
	domain_billing_details_t* domain_billing_details_2 = domain_billing_details_parseFromJSON(jsondomain_billing_details_1);
	cJSON* jsondomain_billing_details_2 = domain_billing_details_convertToJSON(domain_billing_details_2);
	printf("repeating domain_billing_details:\n%s\n", cJSON_Print(jsondomain_billing_details_2));
}

int main() {
  test_domain_billing_details(1);
  test_domain_billing_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_billing_details_MAIN
#endif // domain_billing_details_TEST
