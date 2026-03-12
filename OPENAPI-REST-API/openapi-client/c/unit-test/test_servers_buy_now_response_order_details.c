#ifndef servers_buy_now_response_order_details_TEST
#define servers_buy_now_response_order_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define servers_buy_now_response_order_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/servers_buy_now_response_order_details.h"
servers_buy_now_response_order_details_t* instantiate_servers_buy_now_response_order_details(int include_optional);



servers_buy_now_response_order_details_t* instantiate_servers_buy_now_response_order_details(int include_optional) {
  servers_buy_now_response_order_details_t* servers_buy_now_response_order_details = NULL;
  if (include_optional) {
    servers_buy_now_response_order_details = servers_buy_now_response_order_details_create(
      1234,
      2342355
    );
  } else {
    servers_buy_now_response_order_details = servers_buy_now_response_order_details_create(
      1234,
      2342355
    );
  }

  return servers_buy_now_response_order_details;
}


#ifdef servers_buy_now_response_order_details_MAIN

void test_servers_buy_now_response_order_details(int include_optional) {
    servers_buy_now_response_order_details_t* servers_buy_now_response_order_details_1 = instantiate_servers_buy_now_response_order_details(include_optional);

	cJSON* jsonservers_buy_now_response_order_details_1 = servers_buy_now_response_order_details_convertToJSON(servers_buy_now_response_order_details_1);
	printf("servers_buy_now_response_order_details :\n%s\n", cJSON_Print(jsonservers_buy_now_response_order_details_1));
	servers_buy_now_response_order_details_t* servers_buy_now_response_order_details_2 = servers_buy_now_response_order_details_parseFromJSON(jsonservers_buy_now_response_order_details_1);
	cJSON* jsonservers_buy_now_response_order_details_2 = servers_buy_now_response_order_details_convertToJSON(servers_buy_now_response_order_details_2);
	printf("repeating servers_buy_now_response_order_details:\n%s\n", cJSON_Print(jsonservers_buy_now_response_order_details_2));
}

int main() {
  test_servers_buy_now_response_order_details(1);
  test_servers_buy_now_response_order_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // servers_buy_now_response_order_details_MAIN
#endif // servers_buy_now_response_order_details_TEST
