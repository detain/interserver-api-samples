#ifndef server_order_form_values_TEST
#define server_order_form_values_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_form_values_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_form_values.h"
server_order_form_values_t* instantiate_server_order_form_values(int include_optional);



server_order_form_values_t* instantiate_server_order_form_values(int include_optional) {
  server_order_form_values_t* server_order_form_values = NULL;
  if (include_optional) {
    server_order_form_values = server_order_form_values_create(
      22,
      "3",
      "9",
      "5",
      5,
      "0",
      "16"
    );
  } else {
    server_order_form_values = server_order_form_values_create(
      22,
      "3",
      "9",
      "5",
      5,
      "0",
      "16"
    );
  }

  return server_order_form_values;
}


#ifdef server_order_form_values_MAIN

void test_server_order_form_values(int include_optional) {
    server_order_form_values_t* server_order_form_values_1 = instantiate_server_order_form_values(include_optional);

	cJSON* jsonserver_order_form_values_1 = server_order_form_values_convertToJSON(server_order_form_values_1);
	printf("server_order_form_values :\n%s\n", cJSON_Print(jsonserver_order_form_values_1));
	server_order_form_values_t* server_order_form_values_2 = server_order_form_values_parseFromJSON(jsonserver_order_form_values_1);
	cJSON* jsonserver_order_form_values_2 = server_order_form_values_convertToJSON(server_order_form_values_2);
	printf("repeating server_order_form_values:\n%s\n", cJSON_Print(jsonserver_order_form_values_2));
}

int main() {
  test_server_order_form_values(1);
  test_server_order_form_values(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_form_values_MAIN
#endif // server_order_form_values_TEST
