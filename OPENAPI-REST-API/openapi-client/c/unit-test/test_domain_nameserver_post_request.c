#ifndef domain_nameserver_post_request_TEST
#define domain_nameserver_post_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_nameserver_post_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_nameserver_post_request.h"
domain_nameserver_post_request_t* instantiate_domain_nameserver_post_request(int include_optional);



domain_nameserver_post_request_t* instantiate_domain_nameserver_post_request(int include_optional) {
  domain_nameserver_post_request_t* domain_nameserver_post_request = NULL;
  if (include_optional) {
    domain_nameserver_post_request = domain_nameserver_post_request_create(
      "ns1.host.com",
      "1.2.3.4Get"
    );
  } else {
    domain_nameserver_post_request = domain_nameserver_post_request_create(
      "ns1.host.com",
      "1.2.3.4Get"
    );
  }

  return domain_nameserver_post_request;
}


#ifdef domain_nameserver_post_request_MAIN

void test_domain_nameserver_post_request(int include_optional) {
    domain_nameserver_post_request_t* domain_nameserver_post_request_1 = instantiate_domain_nameserver_post_request(include_optional);

	cJSON* jsondomain_nameserver_post_request_1 = domain_nameserver_post_request_convertToJSON(domain_nameserver_post_request_1);
	printf("domain_nameserver_post_request :\n%s\n", cJSON_Print(jsondomain_nameserver_post_request_1));
	domain_nameserver_post_request_t* domain_nameserver_post_request_2 = domain_nameserver_post_request_parseFromJSON(jsondomain_nameserver_post_request_1);
	cJSON* jsondomain_nameserver_post_request_2 = domain_nameserver_post_request_convertToJSON(domain_nameserver_post_request_2);
	printf("repeating domain_nameserver_post_request:\n%s\n", cJSON_Print(jsondomain_nameserver_post_request_2));
}

int main() {
  test_domain_nameserver_post_request(1);
  test_domain_nameserver_post_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_nameserver_post_request_MAIN
#endif // domain_nameserver_post_request_TEST
