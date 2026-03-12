#ifndef domain_service_type_TEST
#define domain_service_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_service_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_service_type.h"
domain_service_type_t* instantiate_domain_service_type(int include_optional);



domain_service_type_t* instantiate_domain_service_type(int include_optional) {
  domain_service_type_t* domain_service_type = NULL;
  if (include_optional) {
    domain_service_type = domain_service_type_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    domain_service_type = domain_service_type_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return domain_service_type;
}


#ifdef domain_service_type_MAIN

void test_domain_service_type(int include_optional) {
    domain_service_type_t* domain_service_type_1 = instantiate_domain_service_type(include_optional);

	cJSON* jsondomain_service_type_1 = domain_service_type_convertToJSON(domain_service_type_1);
	printf("domain_service_type :\n%s\n", cJSON_Print(jsondomain_service_type_1));
	domain_service_type_t* domain_service_type_2 = domain_service_type_parseFromJSON(jsondomain_service_type_1);
	cJSON* jsondomain_service_type_2 = domain_service_type_convertToJSON(domain_service_type_2);
	printf("repeating domain_service_type:\n%s\n", cJSON_Print(jsondomain_service_type_2));
}

int main() {
  test_domain_service_type(1);
  test_domain_service_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_service_type_MAIN
#endif // domain_service_type_TEST
