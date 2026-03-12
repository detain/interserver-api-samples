#ifndef server_ipmi_power_request_TEST
#define server_ipmi_power_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_ipmi_power_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_ipmi_power_request.h"
server_ipmi_power_request_t* instantiate_server_ipmi_power_request(int include_optional);



server_ipmi_power_request_t* instantiate_server_ipmi_power_request(int include_optional) {
  server_ipmi_power_request_t* server_ipmi_power_request = NULL;
  if (include_optional) {
    server_ipmi_power_request = server_ipmi_power_request_create(
      interserver_management_api_server_ipmi_power_request_ACTION_"on",
      5432
    );
  } else {
    server_ipmi_power_request = server_ipmi_power_request_create(
      interserver_management_api_server_ipmi_power_request_ACTION_"on",
      5432
    );
  }

  return server_ipmi_power_request;
}


#ifdef server_ipmi_power_request_MAIN

void test_server_ipmi_power_request(int include_optional) {
    server_ipmi_power_request_t* server_ipmi_power_request_1 = instantiate_server_ipmi_power_request(include_optional);

	cJSON* jsonserver_ipmi_power_request_1 = server_ipmi_power_request_convertToJSON(server_ipmi_power_request_1);
	printf("server_ipmi_power_request :\n%s\n", cJSON_Print(jsonserver_ipmi_power_request_1));
	server_ipmi_power_request_t* server_ipmi_power_request_2 = server_ipmi_power_request_parseFromJSON(jsonserver_ipmi_power_request_1);
	cJSON* jsonserver_ipmi_power_request_2 = server_ipmi_power_request_convertToJSON(server_ipmi_power_request_2);
	printf("repeating server_ipmi_power_request:\n%s\n", cJSON_Print(jsonserver_ipmi_power_request_2));
}

int main() {
  test_server_ipmi_power_request(1);
  test_server_ipmi_power_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_ipmi_power_request_MAIN
#endif // server_ipmi_power_request_TEST
