#ifndef domain_contact_details_TEST
#define domain_contact_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_contact_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_contact_details.h"
domain_contact_details_t* instantiate_domain_contact_details(int include_optional);



domain_contact_details_t* instantiate_domain_contact_details(int include_optional) {
  domain_contact_details_t* domain_contact_details = NULL;
  if (include_optional) {
    domain_contact_details = domain_contact_details_create(
      "0",
      "0",
      "0",
      "0",
      "0",
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
    domain_contact_details = domain_contact_details_create(
      "0",
      "0",
      "0",
      "0",
      "0",
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

  return domain_contact_details;
}


#ifdef domain_contact_details_MAIN

void test_domain_contact_details(int include_optional) {
    domain_contact_details_t* domain_contact_details_1 = instantiate_domain_contact_details(include_optional);

	cJSON* jsondomain_contact_details_1 = domain_contact_details_convertToJSON(domain_contact_details_1);
	printf("domain_contact_details :\n%s\n", cJSON_Print(jsondomain_contact_details_1));
	domain_contact_details_t* domain_contact_details_2 = domain_contact_details_parseFromJSON(jsondomain_contact_details_1);
	cJSON* jsondomain_contact_details_2 = domain_contact_details_convertToJSON(domain_contact_details_2);
	printf("repeating domain_contact_details:\n%s\n", cJSON_Print(jsondomain_contact_details_2));
}

int main() {
  test_domain_contact_details(1);
  test_domain_contact_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_contact_details_MAIN
#endif // domain_contact_details_TEST
