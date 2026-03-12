#ifndef server_billing_details_TEST
#define server_billing_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_billing_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_billing_details.h"
server_billing_details_t* instantiate_server_billing_details(int include_optional);



server_billing_details_t* instantiate_server_billing_details(int include_optional) {
  server_billing_details_t* server_billing_details = NULL;
  if (include_optional) {
    server_billing_details = server_billing_details_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      "0"
    );
  } else {
    server_billing_details = server_billing_details_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      "0"
    );
  }

  return server_billing_details;
}


#ifdef server_billing_details_MAIN

void test_server_billing_details(int include_optional) {
    server_billing_details_t* server_billing_details_1 = instantiate_server_billing_details(include_optional);

	cJSON* jsonserver_billing_details_1 = server_billing_details_convertToJSON(server_billing_details_1);
	printf("server_billing_details :\n%s\n", cJSON_Print(jsonserver_billing_details_1));
	server_billing_details_t* server_billing_details_2 = server_billing_details_parseFromJSON(jsonserver_billing_details_1);
	cJSON* jsonserver_billing_details_2 = server_billing_details_convertToJSON(server_billing_details_2);
	printf("repeating server_billing_details:\n%s\n", cJSON_Print(jsonserver_billing_details_2));
}

int main() {
  test_server_billing_details(1);
  test_server_billing_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_billing_details_MAIN
#endif // server_billing_details_TEST
