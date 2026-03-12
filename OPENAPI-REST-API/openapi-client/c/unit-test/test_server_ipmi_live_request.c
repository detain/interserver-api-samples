#ifndef server_ipmi_live_request_TEST
#define server_ipmi_live_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_ipmi_live_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_ipmi_live_request.h"
server_ipmi_live_request_t* instantiate_server_ipmi_live_request(int include_optional);



server_ipmi_live_request_t* instantiate_server_ipmi_live_request(int include_optional) {
  server_ipmi_live_request_t* server_ipmi_live_request = NULL;
  if (include_optional) {
    server_ipmi_live_request = server_ipmi_live_request_create(
      "1.2.3.4",
      5431
    );
  } else {
    server_ipmi_live_request = server_ipmi_live_request_create(
      "1.2.3.4",
      5431
    );
  }

  return server_ipmi_live_request;
}


#ifdef server_ipmi_live_request_MAIN

void test_server_ipmi_live_request(int include_optional) {
    server_ipmi_live_request_t* server_ipmi_live_request_1 = instantiate_server_ipmi_live_request(include_optional);

	cJSON* jsonserver_ipmi_live_request_1 = server_ipmi_live_request_convertToJSON(server_ipmi_live_request_1);
	printf("server_ipmi_live_request :\n%s\n", cJSON_Print(jsonserver_ipmi_live_request_1));
	server_ipmi_live_request_t* server_ipmi_live_request_2 = server_ipmi_live_request_parseFromJSON(jsonserver_ipmi_live_request_1);
	cJSON* jsonserver_ipmi_live_request_2 = server_ipmi_live_request_convertToJSON(server_ipmi_live_request_2);
	printf("repeating server_ipmi_live_request:\n%s\n", cJSON_Print(jsonserver_ipmi_live_request_2));
}

int main() {
  test_server_ipmi_live_request(1);
  test_server_ipmi_live_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_ipmi_live_request_MAIN
#endif // server_ipmi_live_request_TEST
