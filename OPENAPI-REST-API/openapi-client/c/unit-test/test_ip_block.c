#ifndef ip_block_TEST
#define ip_block_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_block_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_block.h"
ip_block_t* instantiate_ip_block(int include_optional);



ip_block_t* instantiate_ip_block(int include_optional) {
  ip_block_t* ip_block = NULL;
  if (include_optional) {
    ip_block = ip_block_create(
      56,
      "0",
      "0",
      1.337
    );
  } else {
    ip_block = ip_block_create(
      56,
      "0",
      "0",
      1.337
    );
  }

  return ip_block;
}


#ifdef ip_block_MAIN

void test_ip_block(int include_optional) {
    ip_block_t* ip_block_1 = instantiate_ip_block(include_optional);

	cJSON* jsonip_block_1 = ip_block_convertToJSON(ip_block_1);
	printf("ip_block :\n%s\n", cJSON_Print(jsonip_block_1));
	ip_block_t* ip_block_2 = ip_block_parseFromJSON(jsonip_block_1);
	cJSON* jsonip_block_2 = ip_block_convertToJSON(ip_block_2);
	printf("repeating ip_block:\n%s\n", cJSON_Print(jsonip_block_2));
}

int main() {
  test_ip_block(1);
  test_ip_block(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_block_MAIN
#endif // ip_block_TEST
