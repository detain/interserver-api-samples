#ifndef domain_dnssec_request_TEST
#define domain_dnssec_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_dnssec_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_dnssec_request.h"
domain_dnssec_request_t* instantiate_domain_dnssec_request(int include_optional);



domain_dnssec_request_t* instantiate_domain_dnssec_request(int include_optional) {
  domain_dnssec_request_t* domain_dnssec_request = NULL;
  if (include_optional) {
    domain_dnssec_request = domain_dnssec_request_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    domain_dnssec_request = domain_dnssec_request_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return domain_dnssec_request;
}


#ifdef domain_dnssec_request_MAIN

void test_domain_dnssec_request(int include_optional) {
    domain_dnssec_request_t* domain_dnssec_request_1 = instantiate_domain_dnssec_request(include_optional);

	cJSON* jsondomain_dnssec_request_1 = domain_dnssec_request_convertToJSON(domain_dnssec_request_1);
	printf("domain_dnssec_request :\n%s\n", cJSON_Print(jsondomain_dnssec_request_1));
	domain_dnssec_request_t* domain_dnssec_request_2 = domain_dnssec_request_parseFromJSON(jsondomain_dnssec_request_1);
	cJSON* jsondomain_dnssec_request_2 = domain_dnssec_request_convertToJSON(domain_dnssec_request_2);
	printf("repeating domain_dnssec_request:\n%s\n", cJSON_Print(jsondomain_dnssec_request_2));
}

int main() {
  test_domain_dnssec_request(1);
  test_domain_dnssec_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_dnssec_request_MAIN
#endif // domain_dnssec_request_TEST
