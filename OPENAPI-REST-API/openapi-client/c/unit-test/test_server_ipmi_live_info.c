#ifndef server_ipmi_live_info_TEST
#define server_ipmi_live_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_ipmi_live_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_ipmi_live_info.h"
server_ipmi_live_info_t* instantiate_server_ipmi_live_info(int include_optional);



server_ipmi_live_info_t* instantiate_server_ipmi_live_info(int include_optional) {
  server_ipmi_live_info_t* server_ipmi_live_info = NULL;
  if (include_optional) {
    server_ipmi_live_info = server_ipmi_live_info_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    server_ipmi_live_info = server_ipmi_live_info_create(
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return server_ipmi_live_info;
}


#ifdef server_ipmi_live_info_MAIN

void test_server_ipmi_live_info(int include_optional) {
    server_ipmi_live_info_t* server_ipmi_live_info_1 = instantiate_server_ipmi_live_info(include_optional);

	cJSON* jsonserver_ipmi_live_info_1 = server_ipmi_live_info_convertToJSON(server_ipmi_live_info_1);
	printf("server_ipmi_live_info :\n%s\n", cJSON_Print(jsonserver_ipmi_live_info_1));
	server_ipmi_live_info_t* server_ipmi_live_info_2 = server_ipmi_live_info_parseFromJSON(jsonserver_ipmi_live_info_1);
	cJSON* jsonserver_ipmi_live_info_2 = server_ipmi_live_info_convertToJSON(server_ipmi_live_info_2);
	printf("repeating server_ipmi_live_info:\n%s\n", cJSON_Print(jsonserver_ipmi_live_info_2));
}

int main() {
  test_server_ipmi_live_info(1);
  test_server_ipmi_live_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_ipmi_live_info_MAIN
#endif // server_ipmi_live_info_TEST
