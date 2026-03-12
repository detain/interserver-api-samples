#ifndef domain_whois_privacy_request_TEST
#define domain_whois_privacy_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_whois_privacy_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_whois_privacy_request.h"
domain_whois_privacy_request_t* instantiate_domain_whois_privacy_request(int include_optional);



domain_whois_privacy_request_t* instantiate_domain_whois_privacy_request(int include_optional) {
  domain_whois_privacy_request_t* domain_whois_privacy_request = NULL;
  if (include_optional) {
    domain_whois_privacy_request = domain_whois_privacy_request_create(
      "enable",
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
      "0",
      "0",
      "0"
    );
  } else {
    domain_whois_privacy_request = domain_whois_privacy_request_create(
      "enable",
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
      "0",
      "0",
      "0"
    );
  }

  return domain_whois_privacy_request;
}


#ifdef domain_whois_privacy_request_MAIN

void test_domain_whois_privacy_request(int include_optional) {
    domain_whois_privacy_request_t* domain_whois_privacy_request_1 = instantiate_domain_whois_privacy_request(include_optional);

	cJSON* jsondomain_whois_privacy_request_1 = domain_whois_privacy_request_convertToJSON(domain_whois_privacy_request_1);
	printf("domain_whois_privacy_request :\n%s\n", cJSON_Print(jsondomain_whois_privacy_request_1));
	domain_whois_privacy_request_t* domain_whois_privacy_request_2 = domain_whois_privacy_request_parseFromJSON(jsondomain_whois_privacy_request_1);
	cJSON* jsondomain_whois_privacy_request_2 = domain_whois_privacy_request_convertToJSON(domain_whois_privacy_request_2);
	printf("repeating domain_whois_privacy_request:\n%s\n", cJSON_Print(jsondomain_whois_privacy_request_2));
}

int main() {
  test_domain_whois_privacy_request(1);
  test_domain_whois_privacy_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_whois_privacy_request_MAIN
#endif // domain_whois_privacy_request_TEST
