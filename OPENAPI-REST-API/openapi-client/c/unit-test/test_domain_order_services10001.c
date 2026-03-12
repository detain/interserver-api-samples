#ifndef domain_order_services10001_TEST
#define domain_order_services10001_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_order_services10001_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_order_services10001.h"
domain_order_services10001_t* instantiate_domain_order_services10001(int include_optional);



domain_order_services10001_t* instantiate_domain_order_services10001(int include_optional) {
  domain_order_services10001_t* domain_order_services10001 = NULL;
  if (include_optional) {
    domain_order_services10001 = domain_order_services10001_create(
      "10001",
      ".asia Domain Name Registration",
      "19.00",
      "USD",
      "100",
      "1",
      "100",
      ".asia",
      "0",
      "domains",
      "0"
    );
  } else {
    domain_order_services10001 = domain_order_services10001_create(
      "10001",
      ".asia Domain Name Registration",
      "19.00",
      "USD",
      "100",
      "1",
      "100",
      ".asia",
      "0",
      "domains",
      "0"
    );
  }

  return domain_order_services10001;
}


#ifdef domain_order_services10001_MAIN

void test_domain_order_services10001(int include_optional) {
    domain_order_services10001_t* domain_order_services10001_1 = instantiate_domain_order_services10001(include_optional);

	cJSON* jsondomain_order_services10001_1 = domain_order_services10001_convertToJSON(domain_order_services10001_1);
	printf("domain_order_services10001 :\n%s\n", cJSON_Print(jsondomain_order_services10001_1));
	domain_order_services10001_t* domain_order_services10001_2 = domain_order_services10001_parseFromJSON(jsondomain_order_services10001_1);
	cJSON* jsondomain_order_services10001_2 = domain_order_services10001_convertToJSON(domain_order_services10001_2);
	printf("repeating domain_order_services10001:\n%s\n", cJSON_Print(jsondomain_order_services10001_2));
}

int main() {
  test_domain_order_services10001(1);
  test_domain_order_services10001(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_order_services10001_MAIN
#endif // domain_order_services10001_TEST
