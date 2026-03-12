#ifndef domain_billing_extra_TEST
#define domain_billing_extra_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_billing_extra_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_billing_extra.h"
domain_billing_extra_t* instantiate_domain_billing_extra(int include_optional);

#include "test_domain_order_response.c"
#include "test_domain_prov_process_pending.c"


domain_billing_extra_t* instantiate_domain_billing_extra(int include_optional) {
  domain_billing_extra_t* domain_billing_extra = NULL;
  if (include_optional) {
    domain_billing_extra = domain_billing_extra_create(
       // false, not to have infinite recursion
      instantiate_domain_order_response(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_domain_prov_process_pending(0),
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
      "0",
      "0"
    );
  } else {
    domain_billing_extra = domain_billing_extra_create(
      NULL,
      "0",
      "0",
      NULL,
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
      "0",
      "0"
    );
  }

  return domain_billing_extra;
}


#ifdef domain_billing_extra_MAIN

void test_domain_billing_extra(int include_optional) {
    domain_billing_extra_t* domain_billing_extra_1 = instantiate_domain_billing_extra(include_optional);

	cJSON* jsondomain_billing_extra_1 = domain_billing_extra_convertToJSON(domain_billing_extra_1);
	printf("domain_billing_extra :\n%s\n", cJSON_Print(jsondomain_billing_extra_1));
	domain_billing_extra_t* domain_billing_extra_2 = domain_billing_extra_parseFromJSON(jsondomain_billing_extra_1);
	cJSON* jsondomain_billing_extra_2 = domain_billing_extra_convertToJSON(domain_billing_extra_2);
	printf("repeating domain_billing_extra:\n%s\n", cJSON_Print(jsondomain_billing_extra_2));
}

int main() {
  test_domain_billing_extra(1);
  test_domain_billing_extra(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_billing_extra_MAIN
#endif // domain_billing_extra_TEST
