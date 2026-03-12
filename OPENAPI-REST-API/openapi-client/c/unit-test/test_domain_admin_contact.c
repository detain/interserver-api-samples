#ifndef domain_admin_contact_TEST
#define domain_admin_contact_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_admin_contact_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_admin_contact.h"
domain_admin_contact_t* instantiate_domain_admin_contact(int include_optional);



domain_admin_contact_t* instantiate_domain_admin_contact(int include_optional) {
  domain_admin_contact_t* domain_admin_contact = NULL;
  if (include_optional) {
    domain_admin_contact = domain_admin_contact_create(
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
    domain_admin_contact = domain_admin_contact_create(
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

  return domain_admin_contact;
}


#ifdef domain_admin_contact_MAIN

void test_domain_admin_contact(int include_optional) {
    domain_admin_contact_t* domain_admin_contact_1 = instantiate_domain_admin_contact(include_optional);

	cJSON* jsondomain_admin_contact_1 = domain_admin_contact_convertToJSON(domain_admin_contact_1);
	printf("domain_admin_contact :\n%s\n", cJSON_Print(jsondomain_admin_contact_1));
	domain_admin_contact_t* domain_admin_contact_2 = domain_admin_contact_parseFromJSON(jsondomain_admin_contact_1);
	cJSON* jsondomain_admin_contact_2 = domain_admin_contact_convertToJSON(domain_admin_contact_2);
	printf("repeating domain_admin_contact:\n%s\n", cJSON_Print(jsondomain_admin_contact_2));
}

int main() {
  test_domain_admin_contact(1);
  test_domain_admin_contact(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_admin_contact_MAIN
#endif // domain_admin_contact_TEST
