#ifndef domain_name_server_TEST
#define domain_name_server_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_name_server_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_name_server.h"
domain_name_server_t* instantiate_domain_name_server(int include_optional);



domain_name_server_t* instantiate_domain_name_server(int include_optional) {
  domain_name_server_t* domain_name_server = NULL;
  if (include_optional) {
    domain_name_server = domain_name_server_create(
      "0",
      "0",
      "0"
    );
  } else {
    domain_name_server = domain_name_server_create(
      "0",
      "0",
      "0"
    );
  }

  return domain_name_server;
}


#ifdef domain_name_server_MAIN

void test_domain_name_server(int include_optional) {
    domain_name_server_t* domain_name_server_1 = instantiate_domain_name_server(include_optional);

	cJSON* jsondomain_name_server_1 = domain_name_server_convertToJSON(domain_name_server_1);
	printf("domain_name_server :\n%s\n", cJSON_Print(jsondomain_name_server_1));
	domain_name_server_t* domain_name_server_2 = domain_name_server_parseFromJSON(jsondomain_name_server_1);
	cJSON* jsondomain_name_server_2 = domain_name_server_convertToJSON(domain_name_server_2);
	printf("repeating domain_name_server:\n%s\n", cJSON_Print(jsondomain_name_server_2));
}

int main() {
  test_domain_name_server(1);
  test_domain_name_server(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_name_server_MAIN
#endif // domain_name_server_TEST
