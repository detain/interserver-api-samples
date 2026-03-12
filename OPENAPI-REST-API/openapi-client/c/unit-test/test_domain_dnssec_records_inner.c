#ifndef domain_dnssec_records_inner_TEST
#define domain_dnssec_records_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_dnssec_records_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_dnssec_records_inner.h"
domain_dnssec_records_inner_t* instantiate_domain_dnssec_records_inner(int include_optional);



domain_dnssec_records_inner_t* instantiate_domain_dnssec_records_inner(int include_optional) {
  domain_dnssec_records_inner_t* domain_dnssec_records_inner = NULL;
  if (include_optional) {
    domain_dnssec_records_inner = domain_dnssec_records_inner_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    domain_dnssec_records_inner = domain_dnssec_records_inner_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return domain_dnssec_records_inner;
}


#ifdef domain_dnssec_records_inner_MAIN

void test_domain_dnssec_records_inner(int include_optional) {
    domain_dnssec_records_inner_t* domain_dnssec_records_inner_1 = instantiate_domain_dnssec_records_inner(include_optional);

	cJSON* jsondomain_dnssec_records_inner_1 = domain_dnssec_records_inner_convertToJSON(domain_dnssec_records_inner_1);
	printf("domain_dnssec_records_inner :\n%s\n", cJSON_Print(jsondomain_dnssec_records_inner_1));
	domain_dnssec_records_inner_t* domain_dnssec_records_inner_2 = domain_dnssec_records_inner_parseFromJSON(jsondomain_dnssec_records_inner_1);
	cJSON* jsondomain_dnssec_records_inner_2 = domain_dnssec_records_inner_convertToJSON(domain_dnssec_records_inner_2);
	printf("repeating domain_dnssec_records_inner:\n%s\n", cJSON_Print(jsondomain_dnssec_records_inner_2));
}

int main() {
  test_domain_dnssec_records_inner(1);
  test_domain_dnssec_records_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_dnssec_records_inner_MAIN
#endif // domain_dnssec_records_inner_TEST
