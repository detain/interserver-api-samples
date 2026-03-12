#ifndef domain_order_tld_services_TEST
#define domain_order_tld_services_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_order_tld_services_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_order_tld_services.h"
domain_order_tld_services_t* instantiate_domain_order_tld_services(int include_optional);



domain_order_tld_services_t* instantiate_domain_order_tld_services(int include_optional) {
  domain_order_tld_services_t* domain_order_tld_services = NULL;
  if (include_optional) {
    domain_order_tld_services = domain_order_tld_services_create(
      10001,
      10002,
      10003,
      10004
    );
  } else {
    domain_order_tld_services = domain_order_tld_services_create(
      10001,
      10002,
      10003,
      10004
    );
  }

  return domain_order_tld_services;
}


#ifdef domain_order_tld_services_MAIN

void test_domain_order_tld_services(int include_optional) {
    domain_order_tld_services_t* domain_order_tld_services_1 = instantiate_domain_order_tld_services(include_optional);

	cJSON* jsondomain_order_tld_services_1 = domain_order_tld_services_convertToJSON(domain_order_tld_services_1);
	printf("domain_order_tld_services :\n%s\n", cJSON_Print(jsondomain_order_tld_services_1));
	domain_order_tld_services_t* domain_order_tld_services_2 = domain_order_tld_services_parseFromJSON(jsondomain_order_tld_services_1);
	cJSON* jsondomain_order_tld_services_2 = domain_order_tld_services_convertToJSON(domain_order_tld_services_2);
	printf("repeating domain_order_tld_services:\n%s\n", cJSON_Print(jsondomain_order_tld_services_2));
}

int main() {
  test_domain_order_tld_services(1);
  test_domain_order_tld_services(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_order_tld_services_MAIN
#endif // domain_order_tld_services_TEST
