#ifndef domain_prov_process_pending_TEST
#define domain_prov_process_pending_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_prov_process_pending_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_prov_process_pending.h"
domain_prov_process_pending_t* instantiate_domain_prov_process_pending(int include_optional);

#include "test_domain_prov_process_pending_attributes.c"


domain_prov_process_pending_t* instantiate_domain_prov_process_pending(int include_optional) {
  domain_prov_process_pending_t* domain_prov_process_pending = NULL;
  if (include_optional) {
    domain_prov_process_pending = domain_prov_process_pending_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_domain_prov_process_pending_attributes(0)
    );
  } else {
    domain_prov_process_pending = domain_prov_process_pending_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL
    );
  }

  return domain_prov_process_pending;
}


#ifdef domain_prov_process_pending_MAIN

void test_domain_prov_process_pending(int include_optional) {
    domain_prov_process_pending_t* domain_prov_process_pending_1 = instantiate_domain_prov_process_pending(include_optional);

	cJSON* jsondomain_prov_process_pending_1 = domain_prov_process_pending_convertToJSON(domain_prov_process_pending_1);
	printf("domain_prov_process_pending :\n%s\n", cJSON_Print(jsondomain_prov_process_pending_1));
	domain_prov_process_pending_t* domain_prov_process_pending_2 = domain_prov_process_pending_parseFromJSON(jsondomain_prov_process_pending_1);
	cJSON* jsondomain_prov_process_pending_2 = domain_prov_process_pending_convertToJSON(domain_prov_process_pending_2);
	printf("repeating domain_prov_process_pending:\n%s\n", cJSON_Print(jsondomain_prov_process_pending_2));
}

int main() {
  test_domain_prov_process_pending(1);
  test_domain_prov_process_pending(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_prov_process_pending_MAIN
#endif // domain_prov_process_pending_TEST
