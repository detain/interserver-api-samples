#ifndef servers_buy_now_response_TEST
#define servers_buy_now_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define servers_buy_now_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/servers_buy_now_response.h"
servers_buy_now_response_t* instantiate_servers_buy_now_response(int include_optional);

#include "test_servers_buy_now_response_order_details.c"


servers_buy_now_response_t* instantiate_servers_buy_now_response(int include_optional) {
  servers_buy_now_response_t* servers_buy_now_response = NULL;
  if (include_optional) {
    servers_buy_now_response = servers_buy_now_response_create(
      true,
      "Server order is placed.",
       // false, not to have infinite recursion
      instantiate_servers_buy_now_response_order_details(0)
    );
  } else {
    servers_buy_now_response = servers_buy_now_response_create(
      true,
      "Server order is placed.",
      NULL
    );
  }

  return servers_buy_now_response;
}


#ifdef servers_buy_now_response_MAIN

void test_servers_buy_now_response(int include_optional) {
    servers_buy_now_response_t* servers_buy_now_response_1 = instantiate_servers_buy_now_response(include_optional);

	cJSON* jsonservers_buy_now_response_1 = servers_buy_now_response_convertToJSON(servers_buy_now_response_1);
	printf("servers_buy_now_response :\n%s\n", cJSON_Print(jsonservers_buy_now_response_1));
	servers_buy_now_response_t* servers_buy_now_response_2 = servers_buy_now_response_parseFromJSON(jsonservers_buy_now_response_1);
	cJSON* jsonservers_buy_now_response_2 = servers_buy_now_response_convertToJSON(servers_buy_now_response_2);
	printf("repeating servers_buy_now_response:\n%s\n", cJSON_Print(jsonservers_buy_now_response_2));
}

int main() {
  test_servers_buy_now_response(1);
  test_servers_buy_now_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // servers_buy_now_response_MAIN
#endif // servers_buy_now_response_TEST
