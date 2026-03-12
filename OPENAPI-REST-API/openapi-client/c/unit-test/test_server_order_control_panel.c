#ifndef server_order_control_panel_TEST
#define server_order_control_panel_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_control_panel_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_control_panel.h"
server_order_control_panel_t* instantiate_server_order_control_panel(int include_optional);



server_order_control_panel_t* instantiate_server_order_control_panel(int include_optional) {
  server_order_control_panel_t* server_order_control_panel = NULL;
  if (include_optional) {
    server_order_control_panel = server_order_control_panel_create(
      "9",
      80,
      "cpanel.gif",
      "cPanel ($45+)",
      "0",
      "0",
      0,
      ["1","2","4","5","8","17","23","30","51"],
      "$80.00",
      "$0.00"
    );
  } else {
    server_order_control_panel = server_order_control_panel_create(
      "9",
      80,
      "cpanel.gif",
      "cPanel ($45+)",
      "0",
      "0",
      0,
      ["1","2","4","5","8","17","23","30","51"],
      "$80.00",
      "$0.00"
    );
  }

  return server_order_control_panel;
}


#ifdef server_order_control_panel_MAIN

void test_server_order_control_panel(int include_optional) {
    server_order_control_panel_t* server_order_control_panel_1 = instantiate_server_order_control_panel(include_optional);

	cJSON* jsonserver_order_control_panel_1 = server_order_control_panel_convertToJSON(server_order_control_panel_1);
	printf("server_order_control_panel :\n%s\n", cJSON_Print(jsonserver_order_control_panel_1));
	server_order_control_panel_t* server_order_control_panel_2 = server_order_control_panel_parseFromJSON(jsonserver_order_control_panel_1);
	cJSON* jsonserver_order_control_panel_2 = server_order_control_panel_convertToJSON(server_order_control_panel_2);
	printf("repeating server_order_control_panel:\n%s\n", cJSON_Print(jsonserver_order_control_panel_2));
}

int main() {
  test_server_order_control_panel(1);
  test_server_order_control_panel(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_control_panel_MAIN
#endif // server_order_control_panel_TEST
