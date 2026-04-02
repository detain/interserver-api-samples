#ifndef server_order_cpu_TEST
#define server_order_cpu_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_cpu_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_cpu.h"
server_order_cpu_t* instantiate_server_order_cpu(int include_optional);



server_order_cpu_t* instantiate_server_order_cpu(int include_optional) {
  server_order_cpu_t* server_order_cpu = NULL;
  if (include_optional) {
    server_order_cpu = server_order_cpu_create(
      "254",
      0,
      "ryzen.png",
      "AMD RYZEN 7900X",
      "High core and thread count...",
      "New York",
      "0",
      "0",
      "AMD",
      "4.7",
      "0",
      "1",
      "12",
      "1",
      "121148",
      75,
      "128",
      "128",
      "4",
      "4",
      "2",
      "yes",
      "0",
      "$0.00",
      "$75.00"
    );
  } else {
    server_order_cpu = server_order_cpu_create(
      "254",
      0,
      "ryzen.png",
      "AMD RYZEN 7900X",
      "High core and thread count...",
      "New York",
      "0",
      "0",
      "AMD",
      "4.7",
      "0",
      "1",
      "12",
      "1",
      "121148",
      75,
      "128",
      "128",
      "4",
      "4",
      "2",
      "yes",
      "0",
      "$0.00",
      "$75.00"
    );
  }

  return server_order_cpu;
}


#ifdef server_order_cpu_MAIN

void test_server_order_cpu(int include_optional) {
    server_order_cpu_t* server_order_cpu_1 = instantiate_server_order_cpu(include_optional);

	cJSON* jsonserver_order_cpu_1 = server_order_cpu_convertToJSON(server_order_cpu_1);
	printf("server_order_cpu :\n%s\n", cJSON_Print(jsonserver_order_cpu_1));
	server_order_cpu_t* server_order_cpu_2 = server_order_cpu_parseFromJSON(jsonserver_order_cpu_1);
	cJSON* jsonserver_order_cpu_2 = server_order_cpu_convertToJSON(server_order_cpu_2);
	printf("repeating server_order_cpu:\n%s\n", cJSON_Print(jsonserver_order_cpu_2));
}

int main() {
  test_server_order_cpu(1);
  test_server_order_cpu(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_cpu_MAIN
#endif // server_order_cpu_TEST
