#ifndef domain_search_response_TEST
#define domain_search_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_search_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_search_response.h"
domain_search_response_t* instantiate_domain_search_response(int include_optional);



domain_search_response_t* instantiate_domain_search_response(int include_optional) {
  domain_search_response_t* domain_search_response = NULL;
  if (include_optional) {
    domain_search_response = domain_search_response_create(
      1,
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    domain_search_response = domain_search_response_create(
      1,
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return domain_search_response;
}


#ifdef domain_search_response_MAIN

void test_domain_search_response(int include_optional) {
    domain_search_response_t* domain_search_response_1 = instantiate_domain_search_response(include_optional);

	cJSON* jsondomain_search_response_1 = domain_search_response_convertToJSON(domain_search_response_1);
	printf("domain_search_response :\n%s\n", cJSON_Print(jsondomain_search_response_1));
	domain_search_response_t* domain_search_response_2 = domain_search_response_parseFromJSON(jsondomain_search_response_1);
	cJSON* jsondomain_search_response_2 = domain_search_response_convertToJSON(domain_search_response_2);
	printf("repeating domain_search_response:\n%s\n", cJSON_Print(jsondomain_search_response_2));
}

int main() {
  test_domain_search_response(1);
  test_domain_search_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_search_response_MAIN
#endif // domain_search_response_TEST
