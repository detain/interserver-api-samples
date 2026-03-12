#ifndef domain_order_response_attributes_TEST
#define domain_order_response_attributes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_order_response_attributes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_order_response_attributes.h"
domain_order_response_attributes_t* instantiate_domain_order_response_attributes(int include_optional);



domain_order_response_attributes_t* instantiate_domain_order_response_attributes(int include_optional) {
  domain_order_response_attributes_t* domain_order_response_attributes = NULL;
  if (include_optional) {
    domain_order_response_attributes = domain_order_response_attributes_create(
      "0",
      "0"
    );
  } else {
    domain_order_response_attributes = domain_order_response_attributes_create(
      "0",
      "0"
    );
  }

  return domain_order_response_attributes;
}


#ifdef domain_order_response_attributes_MAIN

void test_domain_order_response_attributes(int include_optional) {
    domain_order_response_attributes_t* domain_order_response_attributes_1 = instantiate_domain_order_response_attributes(include_optional);

	cJSON* jsondomain_order_response_attributes_1 = domain_order_response_attributes_convertToJSON(domain_order_response_attributes_1);
	printf("domain_order_response_attributes :\n%s\n", cJSON_Print(jsondomain_order_response_attributes_1));
	domain_order_response_attributes_t* domain_order_response_attributes_2 = domain_order_response_attributes_parseFromJSON(jsondomain_order_response_attributes_1);
	cJSON* jsondomain_order_response_attributes_2 = domain_order_response_attributes_convertToJSON(domain_order_response_attributes_2);
	printf("repeating domain_order_response_attributes:\n%s\n", cJSON_Print(jsondomain_order_response_attributes_2));
}

int main() {
  test_domain_order_response_attributes(1);
  test_domain_order_response_attributes(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_order_response_attributes_MAIN
#endif // domain_order_response_attributes_TEST
