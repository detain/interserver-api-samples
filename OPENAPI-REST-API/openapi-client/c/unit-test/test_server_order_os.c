#ifndef server_order_os_TEST
#define server_order_os_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_os_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_os.h"
server_order_os_t* instantiate_server_order_os(int include_optional);



server_order_os_t* instantiate_server_order_os(int include_optional) {
  server_order_os_t* server_order_os = NULL;
  if (include_optional) {
    server_order_os = server_order_os_create(
      "51",
      0,
      "0",
      "AlmaLinux",
      "0",
      0,
      "1",
      "$0.00",
      "$0.00"
    );
  } else {
    server_order_os = server_order_os_create(
      "51",
      0,
      "0",
      "AlmaLinux",
      "0",
      0,
      "1",
      "$0.00",
      "$0.00"
    );
  }

  return server_order_os;
}


#ifdef server_order_os_MAIN

void test_server_order_os(int include_optional) {
    server_order_os_t* server_order_os_1 = instantiate_server_order_os(include_optional);

	cJSON* jsonserver_order_os_1 = server_order_os_convertToJSON(server_order_os_1);
	printf("server_order_os :\n%s\n", cJSON_Print(jsonserver_order_os_1));
	server_order_os_t* server_order_os_2 = server_order_os_parseFromJSON(jsonserver_order_os_1);
	cJSON* jsonserver_order_os_2 = server_order_os_convertToJSON(server_order_os_2);
	printf("repeating server_order_os:\n%s\n", cJSON_Print(jsonserver_order_os_2));
}

int main() {
  test_server_order_os(1);
  test_server_order_os(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_os_MAIN
#endif // server_order_os_TEST
