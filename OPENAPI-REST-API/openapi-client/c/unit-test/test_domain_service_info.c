#ifndef domain_service_info_TEST
#define domain_service_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_service_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_service_info.h"
domain_service_info_t* instantiate_domain_service_info(int include_optional);



domain_service_info_t* instantiate_domain_service_info(int include_optional) {
  domain_service_info_t* domain_service_info = NULL;
  if (include_optional) {
    domain_service_info = domain_service_info_create(
      "0",
      "0",
      "0",
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
    domain_service_info = domain_service_info_create(
      "0",
      "0",
      "0",
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

  return domain_service_info;
}


#ifdef domain_service_info_MAIN

void test_domain_service_info(int include_optional) {
    domain_service_info_t* domain_service_info_1 = instantiate_domain_service_info(include_optional);

	cJSON* jsondomain_service_info_1 = domain_service_info_convertToJSON(domain_service_info_1);
	printf("domain_service_info :\n%s\n", cJSON_Print(jsondomain_service_info_1));
	domain_service_info_t* domain_service_info_2 = domain_service_info_parseFromJSON(jsondomain_service_info_1);
	cJSON* jsondomain_service_info_2 = domain_service_info_convertToJSON(domain_service_info_2);
	printf("repeating domain_service_info:\n%s\n", cJSON_Print(jsondomain_service_info_2));
}

int main() {
  test_domain_service_info(1);
  test_domain_service_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_service_info_MAIN
#endif // domain_service_info_TEST
