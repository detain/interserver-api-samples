#ifndef dns_list_item_TEST
#define dns_list_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dns_list_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dns_list_item.h"
dns_list_item_t* instantiate_dns_list_item(int include_optional);



dns_list_item_t* instantiate_dns_list_item(int include_optional) {
  dns_list_item_t* dns_list_item = NULL;
  if (include_optional) {
    dns_list_item = dns_list_item_create(
      56,
      "0",
      "0"
    );
  } else {
    dns_list_item = dns_list_item_create(
      56,
      "0",
      "0"
    );
  }

  return dns_list_item;
}


#ifdef dns_list_item_MAIN

void test_dns_list_item(int include_optional) {
    dns_list_item_t* dns_list_item_1 = instantiate_dns_list_item(include_optional);

	cJSON* jsondns_list_item_1 = dns_list_item_convertToJSON(dns_list_item_1);
	printf("dns_list_item :\n%s\n", cJSON_Print(jsondns_list_item_1));
	dns_list_item_t* dns_list_item_2 = dns_list_item_parseFromJSON(jsondns_list_item_1);
	cJSON* jsondns_list_item_2 = dns_list_item_convertToJSON(dns_list_item_2);
	printf("repeating dns_list_item:\n%s\n", cJSON_Print(jsondns_list_item_2));
}

int main() {
  test_dns_list_item(1);
  test_dns_list_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // dns_list_item_MAIN
#endif // dns_list_item_TEST
