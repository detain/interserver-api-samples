#ifndef domain_nameserver_get_response_inner_TEST
#define domain_nameserver_get_response_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_nameserver_get_response_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_nameserver_get_response_inner.h"
domain_nameserver_get_response_inner_t* instantiate_domain_nameserver_get_response_inner(int include_optional);



domain_nameserver_get_response_inner_t* instantiate_domain_nameserver_get_response_inner(int include_optional) {
  domain_nameserver_get_response_inner_t* domain_nameserver_get_response_inner = NULL;
  if (include_optional) {
    domain_nameserver_get_response_inner = domain_nameserver_get_response_inner_create(
      "ns1.domain.com",
      "1.2.3.4",
      interserver_management_api_domain_nameserver_get_response_inner_CANDELETE_"1"
    );
  } else {
    domain_nameserver_get_response_inner = domain_nameserver_get_response_inner_create(
      "ns1.domain.com",
      "1.2.3.4",
      interserver_management_api_domain_nameserver_get_response_inner_CANDELETE_"1"
    );
  }

  return domain_nameserver_get_response_inner;
}


#ifdef domain_nameserver_get_response_inner_MAIN

void test_domain_nameserver_get_response_inner(int include_optional) {
    domain_nameserver_get_response_inner_t* domain_nameserver_get_response_inner_1 = instantiate_domain_nameserver_get_response_inner(include_optional);

	cJSON* jsondomain_nameserver_get_response_inner_1 = domain_nameserver_get_response_inner_convertToJSON(domain_nameserver_get_response_inner_1);
	printf("domain_nameserver_get_response_inner :\n%s\n", cJSON_Print(jsondomain_nameserver_get_response_inner_1));
	domain_nameserver_get_response_inner_t* domain_nameserver_get_response_inner_2 = domain_nameserver_get_response_inner_parseFromJSON(jsondomain_nameserver_get_response_inner_1);
	cJSON* jsondomain_nameserver_get_response_inner_2 = domain_nameserver_get_response_inner_convertToJSON(domain_nameserver_get_response_inner_2);
	printf("repeating domain_nameserver_get_response_inner:\n%s\n", cJSON_Print(jsondomain_nameserver_get_response_inner_2));
}

int main() {
  test_domain_nameserver_get_response_inner(1);
  test_domain_nameserver_get_response_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_nameserver_get_response_inner_MAIN
#endif // domain_nameserver_get_response_inner_TEST
