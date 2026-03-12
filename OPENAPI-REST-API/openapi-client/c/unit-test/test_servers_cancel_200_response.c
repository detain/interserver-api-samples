#ifndef servers_cancel_200_response_TEST
#define servers_cancel_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define servers_cancel_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/servers_cancel_200_response.h"
servers_cancel_200_response_t* instantiate_servers_cancel_200_response(int include_optional);



servers_cancel_200_response_t* instantiate_servers_cancel_200_response(int include_optional) {
  servers_cancel_200_response_t* servers_cancel_200_response = NULL;
  if (include_optional) {
    servers_cancel_200_response = servers_cancel_200_response_create(
      1,
      "0"
    );
  } else {
    servers_cancel_200_response = servers_cancel_200_response_create(
      1,
      "0"
    );
  }

  return servers_cancel_200_response;
}


#ifdef servers_cancel_200_response_MAIN

void test_servers_cancel_200_response(int include_optional) {
    servers_cancel_200_response_t* servers_cancel_200_response_1 = instantiate_servers_cancel_200_response(include_optional);

	cJSON* jsonservers_cancel_200_response_1 = servers_cancel_200_response_convertToJSON(servers_cancel_200_response_1);
	printf("servers_cancel_200_response :\n%s\n", cJSON_Print(jsonservers_cancel_200_response_1));
	servers_cancel_200_response_t* servers_cancel_200_response_2 = servers_cancel_200_response_parseFromJSON(jsonservers_cancel_200_response_1);
	cJSON* jsonservers_cancel_200_response_2 = servers_cancel_200_response_convertToJSON(servers_cancel_200_response_2);
	printf("repeating servers_cancel_200_response:\n%s\n", cJSON_Print(jsonservers_cancel_200_response_2));
}

int main() {
  test_servers_cancel_200_response(1);
  test_servers_cancel_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // servers_cancel_200_response_MAIN
#endif // servers_cancel_200_response_TEST
