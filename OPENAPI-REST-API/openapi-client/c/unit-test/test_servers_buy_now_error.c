#ifndef servers_buy_now_error_TEST
#define servers_buy_now_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define servers_buy_now_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/servers_buy_now_error.h"
servers_buy_now_error_t* instantiate_servers_buy_now_error(int include_optional);



servers_buy_now_error_t* instantiate_servers_buy_now_error(int include_optional) {
  servers_buy_now_error_t* servers_buy_now_error = NULL;
  if (include_optional) {
    servers_buy_now_error = servers_buy_now_error_create(
      false,
      "Unable to place order.",
      ["Server ID is missing.","Server Hostname is missing.;","Password must contain atleast 8 characters, one lowercase letter, one uppercase letter, one number & one special character"]
    );
  } else {
    servers_buy_now_error = servers_buy_now_error_create(
      false,
      "Unable to place order.",
      ["Server ID is missing.","Server Hostname is missing.;","Password must contain atleast 8 characters, one lowercase letter, one uppercase letter, one number & one special character"]
    );
  }

  return servers_buy_now_error;
}


#ifdef servers_buy_now_error_MAIN

void test_servers_buy_now_error(int include_optional) {
    servers_buy_now_error_t* servers_buy_now_error_1 = instantiate_servers_buy_now_error(include_optional);

	cJSON* jsonservers_buy_now_error_1 = servers_buy_now_error_convertToJSON(servers_buy_now_error_1);
	printf("servers_buy_now_error :\n%s\n", cJSON_Print(jsonservers_buy_now_error_1));
	servers_buy_now_error_t* servers_buy_now_error_2 = servers_buy_now_error_parseFromJSON(jsonservers_buy_now_error_1);
	cJSON* jsonservers_buy_now_error_2 = servers_buy_now_error_convertToJSON(servers_buy_now_error_2);
	printf("repeating servers_buy_now_error:\n%s\n", cJSON_Print(jsonservers_buy_now_error_2));
}

int main() {
  test_servers_buy_now_error(1);
  test_servers_buy_now_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // servers_buy_now_error_MAIN
#endif // servers_buy_now_error_TEST
