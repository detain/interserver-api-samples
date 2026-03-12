#ifndef domain_order_TEST
#define domain_order_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_order_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_order.h"
domain_order_t* instantiate_domain_order(int include_optional);

#include "test_domain_order_services.c"


domain_order_t* instantiate_domain_order(int include_optional) {
  domain_order_t* domain_order = NULL;
  if (include_optional) {
    domain_order = domain_order_create(
      "5",
       // false, not to have infinite recursion
      instantiate_domain_order_services(0),
      0
    );
  } else {
    domain_order = domain_order_create(
      "5",
      NULL,
      0
    );
  }

  return domain_order;
}


#ifdef domain_order_MAIN

void test_domain_order(int include_optional) {
    domain_order_t* domain_order_1 = instantiate_domain_order(include_optional);

	cJSON* jsondomain_order_1 = domain_order_convertToJSON(domain_order_1);
	printf("domain_order :\n%s\n", cJSON_Print(jsondomain_order_1));
	domain_order_t* domain_order_2 = domain_order_parseFromJSON(jsondomain_order_1);
	cJSON* jsondomain_order_2 = domain_order_convertToJSON(domain_order_2);
	printf("repeating domain_order:\n%s\n", cJSON_Print(jsondomain_order_2));
}

int main() {
  test_domain_order(1);
  test_domain_order(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_order_MAIN
#endif // domain_order_TEST
