#ifndef domain_owner_contact_TEST
#define domain_owner_contact_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_owner_contact_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_owner_contact.h"
domain_owner_contact_t* instantiate_domain_owner_contact(int include_optional);



domain_owner_contact_t* instantiate_domain_owner_contact(int include_optional) {
  domain_owner_contact_t* domain_owner_contact = NULL;
  if (include_optional) {
    domain_owner_contact = domain_owner_contact_create(
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
    domain_owner_contact = domain_owner_contact_create(
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

  return domain_owner_contact;
}


#ifdef domain_owner_contact_MAIN

void test_domain_owner_contact(int include_optional) {
    domain_owner_contact_t* domain_owner_contact_1 = instantiate_domain_owner_contact(include_optional);

	cJSON* jsondomain_owner_contact_1 = domain_owner_contact_convertToJSON(domain_owner_contact_1);
	printf("domain_owner_contact :\n%s\n", cJSON_Print(jsondomain_owner_contact_1));
	domain_owner_contact_t* domain_owner_contact_2 = domain_owner_contact_parseFromJSON(jsondomain_owner_contact_1);
	cJSON* jsondomain_owner_contact_2 = domain_owner_contact_convertToJSON(domain_owner_contact_2);
	printf("repeating domain_owner_contact:\n%s\n", cJSON_Print(jsondomain_owner_contact_2));
}

int main() {
  test_domain_owner_contact(1);
  test_domain_owner_contact(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_owner_contact_MAIN
#endif // domain_owner_contact_TEST
