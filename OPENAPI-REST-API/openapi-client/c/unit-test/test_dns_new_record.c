#ifndef dns_new_record_TEST
#define dns_new_record_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dns_new_record_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dns_new_record.h"
dns_new_record_t* instantiate_dns_new_record(int include_optional);



dns_new_record_t* instantiate_dns_new_record(int include_optional) {
  dns_new_record_t* dns_new_record = NULL;
  if (include_optional) {
    dns_new_record = dns_new_record_create(
      "myfamily.com",
      interserver_management_api_dns_new_record__"NS",
      "127.0.0.1",
      86400,
      0
    );
  } else {
    dns_new_record = dns_new_record_create(
      "myfamily.com",
      interserver_management_api_dns_new_record__"NS",
      "127.0.0.1",
      86400,
      0
    );
  }

  return dns_new_record;
}


#ifdef dns_new_record_MAIN

void test_dns_new_record(int include_optional) {
    dns_new_record_t* dns_new_record_1 = instantiate_dns_new_record(include_optional);

	cJSON* jsondns_new_record_1 = dns_new_record_convertToJSON(dns_new_record_1);
	printf("dns_new_record :\n%s\n", cJSON_Print(jsondns_new_record_1));
	dns_new_record_t* dns_new_record_2 = dns_new_record_parseFromJSON(jsondns_new_record_1);
	cJSON* jsondns_new_record_2 = dns_new_record_convertToJSON(dns_new_record_2);
	printf("repeating dns_new_record:\n%s\n", cJSON_Print(jsondns_new_record_2));
}

int main() {
  test_dns_new_record(1);
  test_dns_new_record(0);

  printf("Hello world \n");
  return 0;
}

#endif // dns_new_record_MAIN
#endif // dns_new_record_TEST
