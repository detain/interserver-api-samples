#ifndef server_order_field_label_TEST
#define server_order_field_label_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_field_label_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_field_label.h"
server_order_field_label_t* instantiate_server_order_field_label(int include_optional);



server_order_field_label_t* instantiate_server_order_field_label(int include_optional) {
  server_order_field_label_t* server_order_field_label = NULL;
  if (include_optional) {
    server_order_field_label = server_order_field_label_create(
      "Bandwidth",
      1
    );
  } else {
    server_order_field_label = server_order_field_label_create(
      "Bandwidth",
      1
    );
  }

  return server_order_field_label;
}


#ifdef server_order_field_label_MAIN

void test_server_order_field_label(int include_optional) {
    server_order_field_label_t* server_order_field_label_1 = instantiate_server_order_field_label(include_optional);

	cJSON* jsonserver_order_field_label_1 = server_order_field_label_convertToJSON(server_order_field_label_1);
	printf("server_order_field_label :\n%s\n", cJSON_Print(jsonserver_order_field_label_1));
	server_order_field_label_t* server_order_field_label_2 = server_order_field_label_parseFromJSON(jsonserver_order_field_label_1);
	cJSON* jsonserver_order_field_label_2 = server_order_field_label_convertToJSON(server_order_field_label_2);
	printf("repeating server_order_field_label:\n%s\n", cJSON_Print(jsonserver_order_field_label_2));
}

int main() {
  test_server_order_field_label(1);
  test_server_order_field_label(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_field_label_MAIN
#endif // server_order_field_label_TEST
