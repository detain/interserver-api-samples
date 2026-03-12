#ifndef server_order_TEST
#define server_order_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order.h"
server_order_t* instantiate_server_order(int include_optional);

#include "test_server_order_form_values.c"
#include "test_server_order_config_ids.c"
#include "test_server_order_field_labels.c"
#include "test_server_order_cpu_li.c"
#include "test_server_order_memory_li.c"
#include "test_server_order_bandwidth_li.c"
#include "test_server_order_ips_li.c"
#include "test_server_order_os_li.c"
#include "test_server_order_cp_li.c"


server_order_t* instantiate_server_order(int include_optional) {
  server_order_t* server_order = NULL;
  if (include_optional) {
    server_order = server_order_create(
       // false, not to have infinite recursion
      instantiate_server_order_form_values(0),
       // false, not to have infinite recursion
      instantiate_server_order_config_ids(0),
      184,
       // false, not to have infinite recursion
      instantiate_server_order_field_labels(0),
       // false, not to have infinite recursion
      instantiate_server_order_cpu_li(0),
       // false, not to have infinite recursion
      instantiate_server_order_memory_li(0),
       // false, not to have infinite recursion
      instantiate_server_order_bandwidth_li(0),
       // false, not to have infinite recursion
      instantiate_server_order_ips_li(0),
       // false, not to have infinite recursion
      instantiate_server_order_os_li(0),
       // false, not to have infinite recursion
      instantiate_server_order_cp_li(0),
      list_createList()
    );
  } else {
    server_order = server_order_create(
      NULL,
      NULL,
      184,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList()
    );
  }

  return server_order;
}


#ifdef server_order_MAIN

void test_server_order(int include_optional) {
    server_order_t* server_order_1 = instantiate_server_order(include_optional);

	cJSON* jsonserver_order_1 = server_order_convertToJSON(server_order_1);
	printf("server_order :\n%s\n", cJSON_Print(jsonserver_order_1));
	server_order_t* server_order_2 = server_order_parseFromJSON(jsonserver_order_1);
	cJSON* jsonserver_order_2 = server_order_convertToJSON(server_order_2);
	printf("repeating server_order:\n%s\n", cJSON_Print(jsonserver_order_2));
}

int main() {
  test_server_order(1);
  test_server_order(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_MAIN
#endif // server_order_TEST
