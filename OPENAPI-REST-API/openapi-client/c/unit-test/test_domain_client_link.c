#ifndef domain_client_link_TEST
#define domain_client_link_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_client_link_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_client_link.h"
domain_client_link_t* instantiate_domain_client_link(int include_optional);



domain_client_link_t* instantiate_domain_client_link(int include_optional) {
  domain_client_link_t* domain_client_link = NULL;
  if (include_optional) {
    domain_client_link = domain_client_link_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    domain_client_link = domain_client_link_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return domain_client_link;
}


#ifdef domain_client_link_MAIN

void test_domain_client_link(int include_optional) {
    domain_client_link_t* domain_client_link_1 = instantiate_domain_client_link(include_optional);

	cJSON* jsondomain_client_link_1 = domain_client_link_convertToJSON(domain_client_link_1);
	printf("domain_client_link :\n%s\n", cJSON_Print(jsondomain_client_link_1));
	domain_client_link_t* domain_client_link_2 = domain_client_link_parseFromJSON(jsondomain_client_link_1);
	cJSON* jsondomain_client_link_2 = domain_client_link_convertToJSON(domain_client_link_2);
	printf("repeating domain_client_link:\n%s\n", cJSON_Print(jsondomain_client_link_2));
}

int main() {
  test_domain_client_link(1);
  test_domain_client_link(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_client_link_MAIN
#endif // domain_client_link_TEST
