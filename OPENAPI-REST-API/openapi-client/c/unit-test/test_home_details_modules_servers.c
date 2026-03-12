#ifndef home_details_modules_servers_TEST
#define home_details_modules_servers_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_details_modules_servers_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_details_modules_servers.h"
home_details_modules_servers_t* instantiate_home_details_modules_servers(int include_optional);



home_details_modules_servers_t* instantiate_home_details_modules_servers(int include_optional) {
  home_details_modules_servers_t* home_details_modules_servers = NULL;
  if (include_optional) {
    home_details_modules_servers = home_details_modules_servers_create(
      "server",
      "view_server",
      "Dedicated Servers",
      "order_server",
      "view_servers_list"
    );
  } else {
    home_details_modules_servers = home_details_modules_servers_create(
      "server",
      "view_server",
      "Dedicated Servers",
      "order_server",
      "view_servers_list"
    );
  }

  return home_details_modules_servers;
}


#ifdef home_details_modules_servers_MAIN

void test_home_details_modules_servers(int include_optional) {
    home_details_modules_servers_t* home_details_modules_servers_1 = instantiate_home_details_modules_servers(include_optional);

	cJSON* jsonhome_details_modules_servers_1 = home_details_modules_servers_convertToJSON(home_details_modules_servers_1);
	printf("home_details_modules_servers :\n%s\n", cJSON_Print(jsonhome_details_modules_servers_1));
	home_details_modules_servers_t* home_details_modules_servers_2 = home_details_modules_servers_parseFromJSON(jsonhome_details_modules_servers_1);
	cJSON* jsonhome_details_modules_servers_2 = home_details_modules_servers_convertToJSON(home_details_modules_servers_2);
	printf("repeating home_details_modules_servers:\n%s\n", cJSON_Print(jsonhome_details_modules_servers_2));
}

int main() {
  test_home_details_modules_servers(1);
  test_home_details_modules_servers(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_details_modules_servers_MAIN
#endif // home_details_modules_servers_TEST
