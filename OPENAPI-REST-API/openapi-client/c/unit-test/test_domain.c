#ifndef domain_TEST
#define domain_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain.h"
domain_t* instantiate_domain(int include_optional);

#include "test_domain_service_info.c"
#include "test_domain_billing_details.c"
#include "test_domain_billing_extra.c"
#include "test_backup_extra_info_tables.c"
#include "test_domain_service_type.c"
#include "test_domain_contact_details.c"
#include "test_domain_all_info.c"


domain_t* instantiate_domain(int include_optional) {
  domain_t* domain = NULL;
  if (include_optional) {
    domain = domain_create(
       // false, not to have infinite recursion
      instantiate_domain_service_info(0),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_domain_billing_details(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_domain_billing_extra(0),
       // false, not to have infinite recursion
      instantiate_backup_extra_info_tables(0),
       // false, not to have infinite recursion
      instantiate_domain_service_type(0),
       // false, not to have infinite recursion
      instantiate_domain_contact_details(0),
      "0",
      "0",
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_domain_all_info(0),
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    domain = domain_create(
      NULL,
      list_createList(),
      list_createList(),
      NULL,
      "0",
      "0",
      NULL,
      NULL,
      NULL,
      NULL,
      "0",
      "0",
      1,
      list_createList(),
      NULL,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return domain;
}


#ifdef domain_MAIN

void test_domain(int include_optional) {
    domain_t* domain_1 = instantiate_domain(include_optional);

	cJSON* jsondomain_1 = domain_convertToJSON(domain_1);
	printf("domain :\n%s\n", cJSON_Print(jsondomain_1));
	domain_t* domain_2 = domain_parseFromJSON(jsondomain_1);
	cJSON* jsondomain_2 = domain_convertToJSON(domain_2);
	printf("repeating domain:\n%s\n", cJSON_Print(jsondomain_2));
}

int main() {
  test_domain(1);
  test_domain(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_MAIN
#endif // domain_TEST
