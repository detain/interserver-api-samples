#ifndef dns_record_TEST
#define dns_record_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dns_record_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dns_record.h"
dns_record_t* instantiate_dns_record(int include_optional);



dns_record_t* instantiate_dns_record(int include_optional) {
  dns_record_t* dns_record = NULL;
  if (include_optional) {
    dns_record = dns_record_create(
      "472",
      "68",
      "hussfamily.com",
      interserver_management_api_dns_record__"NS",
      "cdns1.interserver.net",
      "86400",
      "0",
      "0",
      "0",
      "1"
    );
  } else {
    dns_record = dns_record_create(
      "472",
      "68",
      "hussfamily.com",
      interserver_management_api_dns_record__"NS",
      "cdns1.interserver.net",
      "86400",
      "0",
      "0",
      "0",
      "1"
    );
  }

  return dns_record;
}


#ifdef dns_record_MAIN

void test_dns_record(int include_optional) {
    dns_record_t* dns_record_1 = instantiate_dns_record(include_optional);

	cJSON* jsondns_record_1 = dns_record_convertToJSON(dns_record_1);
	printf("dns_record :\n%s\n", cJSON_Print(jsondns_record_1));
	dns_record_t* dns_record_2 = dns_record_parseFromJSON(jsondns_record_1);
	cJSON* jsondns_record_2 = dns_record_convertToJSON(dns_record_2);
	printf("repeating dns_record:\n%s\n", cJSON_Print(jsondns_record_2));
}

int main() {
  test_dns_record(1);
  test_dns_record(0);

  printf("Hello world \n");
  return 0;
}

#endif // dns_record_MAIN
#endif // dns_record_TEST
