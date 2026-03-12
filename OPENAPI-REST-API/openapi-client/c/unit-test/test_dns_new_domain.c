#ifndef dns_new_domain_TEST
#define dns_new_domain_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dns_new_domain_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dns_new_domain.h"
dns_new_domain_t* instantiate_dns_new_domain(int include_optional);



dns_new_domain_t* instantiate_dns_new_domain(int include_optional) {
  dns_new_domain_t* dns_new_domain = NULL;
  if (include_optional) {
    dns_new_domain = dns_new_domain_create(
      "mydomain.com",
      "1.2.3.4"
    );
  } else {
    dns_new_domain = dns_new_domain_create(
      "mydomain.com",
      "1.2.3.4"
    );
  }

  return dns_new_domain;
}


#ifdef dns_new_domain_MAIN

void test_dns_new_domain(int include_optional) {
    dns_new_domain_t* dns_new_domain_1 = instantiate_dns_new_domain(include_optional);

	cJSON* jsondns_new_domain_1 = dns_new_domain_convertToJSON(dns_new_domain_1);
	printf("dns_new_domain :\n%s\n", cJSON_Print(jsondns_new_domain_1));
	dns_new_domain_t* dns_new_domain_2 = dns_new_domain_parseFromJSON(jsondns_new_domain_1);
	cJSON* jsondns_new_domain_2 = dns_new_domain_convertToJSON(dns_new_domain_2);
	printf("repeating dns_new_domain:\n%s\n", cJSON_Print(jsondns_new_domain_2));
}

int main() {
  test_dns_new_domain(1);
  test_dns_new_domain(0);

  printf("Hello world \n");
  return 0;
}

#endif // dns_new_domain_MAIN
#endif // dns_new_domain_TEST
