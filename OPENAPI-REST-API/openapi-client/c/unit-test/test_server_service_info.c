#ifndef server_service_info_TEST
#define server_service_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_service_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_service_info.h"
server_service_info_t* instantiate_server_service_info(int include_optional);



server_service_info_t* instantiate_server_service_info(int include_optional) {
  server_service_info_t* server_service_info = NULL;
  if (include_optional) {
    server_service_info = server_service_info_create(
      "16058",
      "myserver.host.com",
      "771282",
      "600",
      "USD",
      "2020-05-08T17:22:36.000Z",
      "18738142",
      "0",
      "active",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      null,
      "0",
      "1588972956",
      "230",
      null,
      "0",
      "0",
      "1",
      "38",
      "22",
      "20",
      null,
      "3",
      "5",
      "30",
      null,
      "0",
      "[]"
    );
  } else {
    server_service_info = server_service_info_create(
      "16058",
      "myserver.host.com",
      "771282",
      "600",
      "USD",
      "2020-05-08T17:22:36.000Z",
      "18738142",
      "0",
      "active",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      null,
      "0",
      "1588972956",
      "230",
      null,
      "0",
      "0",
      "1",
      "38",
      "22",
      "20",
      null,
      "3",
      "5",
      "30",
      null,
      "0",
      "[]"
    );
  }

  return server_service_info;
}


#ifdef server_service_info_MAIN

void test_server_service_info(int include_optional) {
    server_service_info_t* server_service_info_1 = instantiate_server_service_info(include_optional);

	cJSON* jsonserver_service_info_1 = server_service_info_convertToJSON(server_service_info_1);
	printf("server_service_info :\n%s\n", cJSON_Print(jsonserver_service_info_1));
	server_service_info_t* server_service_info_2 = server_service_info_parseFromJSON(jsonserver_service_info_1);
	cJSON* jsonserver_service_info_2 = server_service_info_convertToJSON(server_service_info_2);
	printf("repeating server_service_info:\n%s\n", cJSON_Print(jsonserver_service_info_2));
}

int main() {
  test_server_service_info(1);
  test_server_service_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_service_info_MAIN
#endif // server_service_info_TEST
