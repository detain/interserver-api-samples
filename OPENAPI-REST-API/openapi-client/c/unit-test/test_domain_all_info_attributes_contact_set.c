#ifndef domain_all_info_attributes_contact_set_TEST
#define domain_all_info_attributes_contact_set_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_all_info_attributes_contact_set_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_all_info_attributes_contact_set.h"
domain_all_info_attributes_contact_set_t* instantiate_domain_all_info_attributes_contact_set(int include_optional);

#include "test_domain_owner_contact.c"
#include "test_domain_admin_contact.c"
#include "test_domain_tech_contact.c"


domain_all_info_attributes_contact_set_t* instantiate_domain_all_info_attributes_contact_set(int include_optional) {
  domain_all_info_attributes_contact_set_t* domain_all_info_attributes_contact_set = NULL;
  if (include_optional) {
    domain_all_info_attributes_contact_set = domain_all_info_attributes_contact_set_create(
       // false, not to have infinite recursion
      instantiate_domain_owner_contact(0),
       // false, not to have infinite recursion
      instantiate_domain_admin_contact(0),
       // false, not to have infinite recursion
      instantiate_domain_tech_contact(0)
    );
  } else {
    domain_all_info_attributes_contact_set = domain_all_info_attributes_contact_set_create(
      NULL,
      NULL,
      NULL
    );
  }

  return domain_all_info_attributes_contact_set;
}


#ifdef domain_all_info_attributes_contact_set_MAIN

void test_domain_all_info_attributes_contact_set(int include_optional) {
    domain_all_info_attributes_contact_set_t* domain_all_info_attributes_contact_set_1 = instantiate_domain_all_info_attributes_contact_set(include_optional);

	cJSON* jsondomain_all_info_attributes_contact_set_1 = domain_all_info_attributes_contact_set_convertToJSON(domain_all_info_attributes_contact_set_1);
	printf("domain_all_info_attributes_contact_set :\n%s\n", cJSON_Print(jsondomain_all_info_attributes_contact_set_1));
	domain_all_info_attributes_contact_set_t* domain_all_info_attributes_contact_set_2 = domain_all_info_attributes_contact_set_parseFromJSON(jsondomain_all_info_attributes_contact_set_1);
	cJSON* jsondomain_all_info_attributes_contact_set_2 = domain_all_info_attributes_contact_set_convertToJSON(domain_all_info_attributes_contact_set_2);
	printf("repeating domain_all_info_attributes_contact_set:\n%s\n", cJSON_Print(jsondomain_all_info_attributes_contact_set_2));
}

int main() {
  test_domain_all_info_attributes_contact_set(1);
  test_domain_all_info_attributes_contact_set(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_all_info_attributes_contact_set_MAIN
#endif // domain_all_info_attributes_contact_set_TEST
