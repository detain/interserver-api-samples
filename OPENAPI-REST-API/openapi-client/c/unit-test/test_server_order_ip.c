#ifndef server_order_ip_TEST
#define server_order_ip_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_ip_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_ip.h"
server_order_ip_t* instantiate_server_order_ip(int include_optional);



server_order_ip_t* instantiate_server_order_ip(int include_optional) {
  server_order_ip_t* server_order_ip = NULL;
  if (include_optional) {
    server_order_ip = server_order_ip_create(
      "9",
      0,
      "ips.jpg",
      "1 Vlan Ip (/30)",
      "1 IP In personal Vlan",
      "1",
      0,
      "$0.00",
      "$0.00"
    );
  } else {
    server_order_ip = server_order_ip_create(
      "9",
      0,
      "ips.jpg",
      "1 Vlan Ip (/30)",
      "1 IP In personal Vlan",
      "1",
      0,
      "$0.00",
      "$0.00"
    );
  }

  return server_order_ip;
}


#ifdef server_order_ip_MAIN

void test_server_order_ip(int include_optional) {
    server_order_ip_t* server_order_ip_1 = instantiate_server_order_ip(include_optional);

	cJSON* jsonserver_order_ip_1 = server_order_ip_convertToJSON(server_order_ip_1);
	printf("server_order_ip :\n%s\n", cJSON_Print(jsonserver_order_ip_1));
	server_order_ip_t* server_order_ip_2 = server_order_ip_parseFromJSON(jsonserver_order_ip_1);
	cJSON* jsonserver_order_ip_2 = server_order_ip_convertToJSON(server_order_ip_2);
	printf("repeating server_order_ip:\n%s\n", cJSON_Print(jsonserver_order_ip_2));
}

int main() {
  test_server_order_ip(1);
  test_server_order_ip(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_ip_MAIN
#endif // server_order_ip_TEST
