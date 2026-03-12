#ifndef ip_limit_range_TEST
#define ip_limit_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_limit_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_limit_range.h"
ip_limit_range_t* instantiate_ip_limit_range(int include_optional);



ip_limit_range_t* instantiate_ip_limit_range(int include_optional) {
  ip_limit_range_t* ip_limit_range = NULL;
  if (include_optional) {
    ip_limit_range = ip_limit_range_create(
      "1.2.3.0",
      "1.2.3.255"
    );
  } else {
    ip_limit_range = ip_limit_range_create(
      "1.2.3.0",
      "1.2.3.255"
    );
  }

  return ip_limit_range;
}


#ifdef ip_limit_range_MAIN

void test_ip_limit_range(int include_optional) {
    ip_limit_range_t* ip_limit_range_1 = instantiate_ip_limit_range(include_optional);

	cJSON* jsonip_limit_range_1 = ip_limit_range_convertToJSON(ip_limit_range_1);
	printf("ip_limit_range :\n%s\n", cJSON_Print(jsonip_limit_range_1));
	ip_limit_range_t* ip_limit_range_2 = ip_limit_range_parseFromJSON(jsonip_limit_range_1);
	cJSON* jsonip_limit_range_2 = ip_limit_range_convertToJSON(ip_limit_range_2);
	printf("repeating ip_limit_range:\n%s\n", cJSON_Print(jsonip_limit_range_2));
}

int main() {
  test_ip_limit_range(1);
  test_ip_limit_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_limit_range_MAIN
#endif // ip_limit_range_TEST
