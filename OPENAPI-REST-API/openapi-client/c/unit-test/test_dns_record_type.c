#ifndef dns_record_type_TEST
#define dns_record_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dns_record_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dns_record_type.h"
dns_record_type_t* instantiate_dns_record_type(int include_optional);



dns_record_type_t* instantiate_dns_record_type(int include_optional) {
  dns_record_type_t* dns_record_type = NULL;
  if (include_optional) {
    dns_record_type = dns_record_type_create(
    );
  } else {
    dns_record_type = dns_record_type_create(
    );
  }

  return dns_record_type;
}


#ifdef dns_record_type_MAIN

void test_dns_record_type(int include_optional) {
    dns_record_type_t* dns_record_type_1 = instantiate_dns_record_type(include_optional);

	cJSON* jsondns_record_type_1 = dns_record_type_convertToJSON(dns_record_type_1);
	printf("dns_record_type :\n%s\n", cJSON_Print(jsondns_record_type_1));
	dns_record_type_t* dns_record_type_2 = dns_record_type_parseFromJSON(jsondns_record_type_1);
	cJSON* jsondns_record_type_2 = dns_record_type_convertToJSON(dns_record_type_2);
	printf("repeating dns_record_type:\n%s\n", cJSON_Print(jsondns_record_type_2));
}

int main() {
  test_dns_record_type(1);
  test_dns_record_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // dns_record_type_MAIN
#endif // dns_record_type_TEST
