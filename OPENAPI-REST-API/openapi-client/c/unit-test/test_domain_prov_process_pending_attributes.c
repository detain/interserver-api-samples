#ifndef domain_prov_process_pending_attributes_TEST
#define domain_prov_process_pending_attributes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_prov_process_pending_attributes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_prov_process_pending_attributes.h"
domain_prov_process_pending_attributes_t* instantiate_domain_prov_process_pending_attributes(int include_optional);



domain_prov_process_pending_attributes_t* instantiate_domain_prov_process_pending_attributes(int include_optional) {
  domain_prov_process_pending_attributes_t* domain_prov_process_pending_attributes = NULL;
  if (include_optional) {
    domain_prov_process_pending_attributes = domain_prov_process_pending_attributes_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    domain_prov_process_pending_attributes = domain_prov_process_pending_attributes_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return domain_prov_process_pending_attributes;
}


#ifdef domain_prov_process_pending_attributes_MAIN

void test_domain_prov_process_pending_attributes(int include_optional) {
    domain_prov_process_pending_attributes_t* domain_prov_process_pending_attributes_1 = instantiate_domain_prov_process_pending_attributes(include_optional);

	cJSON* jsondomain_prov_process_pending_attributes_1 = domain_prov_process_pending_attributes_convertToJSON(domain_prov_process_pending_attributes_1);
	printf("domain_prov_process_pending_attributes :\n%s\n", cJSON_Print(jsondomain_prov_process_pending_attributes_1));
	domain_prov_process_pending_attributes_t* domain_prov_process_pending_attributes_2 = domain_prov_process_pending_attributes_parseFromJSON(jsondomain_prov_process_pending_attributes_1);
	cJSON* jsondomain_prov_process_pending_attributes_2 = domain_prov_process_pending_attributes_convertToJSON(domain_prov_process_pending_attributes_2);
	printf("repeating domain_prov_process_pending_attributes:\n%s\n", cJSON_Print(jsondomain_prov_process_pending_attributes_2));
}

int main() {
  test_domain_prov_process_pending_attributes(1);
  test_domain_prov_process_pending_attributes(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_prov_process_pending_attributes_MAIN
#endif // domain_prov_process_pending_attributes_TEST
