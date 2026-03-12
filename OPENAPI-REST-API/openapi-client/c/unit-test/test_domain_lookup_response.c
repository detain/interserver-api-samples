#ifndef domain_lookup_response_TEST
#define domain_lookup_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_lookup_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_lookup_response.h"
domain_lookup_response_t* instantiate_domain_lookup_response(int include_optional);



domain_lookup_response_t* instantiate_domain_lookup_response(int include_optional) {
  domain_lookup_response_t* domain_lookup_response = NULL;
  if (include_optional) {
    domain_lookup_response = domain_lookup_response_create(
      1,
      1,
      1,
      1,
      0,
      1,
      "0",
      "0",
      "0",
      0,
      0
    );
  } else {
    domain_lookup_response = domain_lookup_response_create(
      1,
      1,
      1,
      1,
      0,
      1,
      "0",
      "0",
      "0",
      0,
      0
    );
  }

  return domain_lookup_response;
}


#ifdef domain_lookup_response_MAIN

void test_domain_lookup_response(int include_optional) {
    domain_lookup_response_t* domain_lookup_response_1 = instantiate_domain_lookup_response(include_optional);

	cJSON* jsondomain_lookup_response_1 = domain_lookup_response_convertToJSON(domain_lookup_response_1);
	printf("domain_lookup_response :\n%s\n", cJSON_Print(jsondomain_lookup_response_1));
	domain_lookup_response_t* domain_lookup_response_2 = domain_lookup_response_parseFromJSON(jsondomain_lookup_response_1);
	cJSON* jsondomain_lookup_response_2 = domain_lookup_response_convertToJSON(domain_lookup_response_2);
	printf("repeating domain_lookup_response:\n%s\n", cJSON_Print(jsondomain_lookup_response_2));
}

int main() {
  test_domain_lookup_response(1);
  test_domain_lookup_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_lookup_response_MAIN
#endif // domain_lookup_response_TEST
