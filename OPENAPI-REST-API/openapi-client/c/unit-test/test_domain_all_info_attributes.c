#ifndef domain_all_info_attributes_TEST
#define domain_all_info_attributes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_all_info_attributes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_all_info_attributes.h"
domain_all_info_attributes_t* instantiate_domain_all_info_attributes(int include_optional);

#include "test_domain_all_info_attributes_contact_set.c"


domain_all_info_attributes_t* instantiate_domain_all_info_attributes(int include_optional) {
  domain_all_info_attributes_t* domain_all_info_attributes = NULL;
  if (include_optional) {
    domain_all_info_attributes = domain_all_info_attributes_create(
       // false, not to have infinite recursion
      instantiate_domain_all_info_attributes_contact_set(0),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      "0"
    );
  } else {
    domain_all_info_attributes = domain_all_info_attributes_create(
      NULL,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      "0"
    );
  }

  return domain_all_info_attributes;
}


#ifdef domain_all_info_attributes_MAIN

void test_domain_all_info_attributes(int include_optional) {
    domain_all_info_attributes_t* domain_all_info_attributes_1 = instantiate_domain_all_info_attributes(include_optional);

	cJSON* jsondomain_all_info_attributes_1 = domain_all_info_attributes_convertToJSON(domain_all_info_attributes_1);
	printf("domain_all_info_attributes :\n%s\n", cJSON_Print(jsondomain_all_info_attributes_1));
	domain_all_info_attributes_t* domain_all_info_attributes_2 = domain_all_info_attributes_parseFromJSON(jsondomain_all_info_attributes_1);
	cJSON* jsondomain_all_info_attributes_2 = domain_all_info_attributes_convertToJSON(domain_all_info_attributes_2);
	printf("repeating domain_all_info_attributes:\n%s\n", cJSON_Print(jsondomain_all_info_attributes_2));
}

int main() {
  test_domain_all_info_attributes(1);
  test_domain_all_info_attributes(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_all_info_attributes_MAIN
#endif // domain_all_info_attributes_TEST
