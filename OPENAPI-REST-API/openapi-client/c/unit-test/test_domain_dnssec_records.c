#ifndef domain_dnssec_records_TEST
#define domain_dnssec_records_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_dnssec_records_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_dnssec_records.h"
domain_dnssec_records_t* instantiate_domain_dnssec_records(int include_optional);



domain_dnssec_records_t* instantiate_domain_dnssec_records(int include_optional) {
  domain_dnssec_records_t* domain_dnssec_records = NULL;
  if (include_optional) {
    domain_dnssec_records = domain_dnssec_records_create(
    );
  } else {
    domain_dnssec_records = domain_dnssec_records_create(
    );
  }

  return domain_dnssec_records;
}


#ifdef domain_dnssec_records_MAIN

void test_domain_dnssec_records(int include_optional) {
    domain_dnssec_records_t* domain_dnssec_records_1 = instantiate_domain_dnssec_records(include_optional);

	cJSON* jsondomain_dnssec_records_1 = domain_dnssec_records_convertToJSON(domain_dnssec_records_1);
	printf("domain_dnssec_records :\n%s\n", cJSON_Print(jsondomain_dnssec_records_1));
	domain_dnssec_records_t* domain_dnssec_records_2 = domain_dnssec_records_parseFromJSON(jsondomain_dnssec_records_1);
	cJSON* jsondomain_dnssec_records_2 = domain_dnssec_records_convertToJSON(domain_dnssec_records_2);
	printf("repeating domain_dnssec_records:\n%s\n", cJSON_Print(jsondomain_dnssec_records_2));
}

int main() {
  test_domain_dnssec_records(1);
  test_domain_dnssec_records(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_dnssec_records_MAIN
#endif // domain_dnssec_records_TEST
