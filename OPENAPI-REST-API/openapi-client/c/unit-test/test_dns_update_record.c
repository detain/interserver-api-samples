#ifndef dns_update_record_TEST
#define dns_update_record_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dns_update_record_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dns_update_record.h"
dns_update_record_t* instantiate_dns_update_record(int include_optional);



dns_update_record_t* instantiate_dns_update_record(int include_optional) {
  dns_update_record_t* dns_update_record = NULL;
  if (include_optional) {
    dns_update_record = dns_update_record_create(
      "0",
      interserver_management_api_dns_update_record__"NS",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    dns_update_record = dns_update_record_create(
      "0",
      interserver_management_api_dns_update_record__"NS",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return dns_update_record;
}


#ifdef dns_update_record_MAIN

void test_dns_update_record(int include_optional) {
    dns_update_record_t* dns_update_record_1 = instantiate_dns_update_record(include_optional);

	cJSON* jsondns_update_record_1 = dns_update_record_convertToJSON(dns_update_record_1);
	printf("dns_update_record :\n%s\n", cJSON_Print(jsondns_update_record_1));
	dns_update_record_t* dns_update_record_2 = dns_update_record_parseFromJSON(jsondns_update_record_1);
	cJSON* jsondns_update_record_2 = dns_update_record_convertToJSON(dns_update_record_2);
	printf("repeating dns_update_record:\n%s\n", cJSON_Print(jsondns_update_record_2));
}

int main() {
  test_dns_update_record(1);
  test_dns_update_record(0);

  printf("Hello world \n");
  return 0;
}

#endif // dns_update_record_MAIN
#endif // dns_update_record_TEST
