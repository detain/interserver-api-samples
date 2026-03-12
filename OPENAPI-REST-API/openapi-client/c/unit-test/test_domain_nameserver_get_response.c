#ifndef domain_nameserver_get_response_TEST
#define domain_nameserver_get_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_nameserver_get_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_nameserver_get_response.h"
domain_nameserver_get_response_t* instantiate_domain_nameserver_get_response(int include_optional);



domain_nameserver_get_response_t* instantiate_domain_nameserver_get_response(int include_optional) {
  domain_nameserver_get_response_t* domain_nameserver_get_response = NULL;
  if (include_optional) {
    domain_nameserver_get_response = domain_nameserver_get_response_create(
    );
  } else {
    domain_nameserver_get_response = domain_nameserver_get_response_create(
    );
  }

  return domain_nameserver_get_response;
}


#ifdef domain_nameserver_get_response_MAIN

void test_domain_nameserver_get_response(int include_optional) {
    domain_nameserver_get_response_t* domain_nameserver_get_response_1 = instantiate_domain_nameserver_get_response(include_optional);

	cJSON* jsondomain_nameserver_get_response_1 = domain_nameserver_get_response_convertToJSON(domain_nameserver_get_response_1);
	printf("domain_nameserver_get_response :\n%s\n", cJSON_Print(jsondomain_nameserver_get_response_1));
	domain_nameserver_get_response_t* domain_nameserver_get_response_2 = domain_nameserver_get_response_parseFromJSON(jsondomain_nameserver_get_response_1);
	cJSON* jsondomain_nameserver_get_response_2 = domain_nameserver_get_response_convertToJSON(domain_nameserver_get_response_2);
	printf("repeating domain_nameserver_get_response:\n%s\n", cJSON_Print(jsondomain_nameserver_get_response_2));
}

int main() {
  test_domain_nameserver_get_response(1);
  test_domain_nameserver_get_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_nameserver_get_response_MAIN
#endif // domain_nameserver_get_response_TEST
