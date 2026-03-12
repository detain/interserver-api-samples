#ifndef server_order_bandwidth_TEST
#define server_order_bandwidth_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_bandwidth_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_bandwidth.h"
server_order_bandwidth_t* instantiate_server_order_bandwidth(int include_optional);



server_order_bandwidth_t* instantiate_server_order_bandwidth(int include_optional) {
  server_order_bandwidth_t* server_order_bandwidth = NULL;
  if (include_optional) {
    server_order_bandwidth = server_order_bandwidth_create(
      "15",
      0,
      "bandwidth.jpg",
      "150TB (10Gb Port)",
      " - 2000GB Bandwidth...",
      "Standard",
      "4000",
      "1",
      15,
      "$0.00",
      "$15.00"
    );
  } else {
    server_order_bandwidth = server_order_bandwidth_create(
      "15",
      0,
      "bandwidth.jpg",
      "150TB (10Gb Port)",
      " - 2000GB Bandwidth...",
      "Standard",
      "4000",
      "1",
      15,
      "$0.00",
      "$15.00"
    );
  }

  return server_order_bandwidth;
}


#ifdef server_order_bandwidth_MAIN

void test_server_order_bandwidth(int include_optional) {
    server_order_bandwidth_t* server_order_bandwidth_1 = instantiate_server_order_bandwidth(include_optional);

	cJSON* jsonserver_order_bandwidth_1 = server_order_bandwidth_convertToJSON(server_order_bandwidth_1);
	printf("server_order_bandwidth :\n%s\n", cJSON_Print(jsonserver_order_bandwidth_1));
	server_order_bandwidth_t* server_order_bandwidth_2 = server_order_bandwidth_parseFromJSON(jsonserver_order_bandwidth_1);
	cJSON* jsonserver_order_bandwidth_2 = server_order_bandwidth_convertToJSON(server_order_bandwidth_2);
	printf("repeating server_order_bandwidth:\n%s\n", cJSON_Print(jsonserver_order_bandwidth_2));
}

int main() {
  test_server_order_bandwidth(1);
  test_server_order_bandwidth(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_bandwidth_MAIN
#endif // server_order_bandwidth_TEST
