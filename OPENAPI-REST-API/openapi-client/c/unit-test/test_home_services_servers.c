#ifndef home_services_servers_TEST
#define home_services_servers_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_services_servers_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_services_servers.h"
home_services_servers_t* instantiate_home_services_servers(int include_optional);

#include "test_home_services_servers_links.c"


home_services_servers_t* instantiate_home_services_servers(int include_optional) {
  home_services_servers_t* home_services_servers = NULL;
  if (include_optional) {
    home_services_servers = home_services_servers_create(
       // false, not to have infinite recursion
      instantiate_home_services_servers_links(0),
      1
    );
  } else {
    home_services_servers = home_services_servers_create(
      NULL,
      1
    );
  }

  return home_services_servers;
}


#ifdef home_services_servers_MAIN

void test_home_services_servers(int include_optional) {
    home_services_servers_t* home_services_servers_1 = instantiate_home_services_servers(include_optional);

	cJSON* jsonhome_services_servers_1 = home_services_servers_convertToJSON(home_services_servers_1);
	printf("home_services_servers :\n%s\n", cJSON_Print(jsonhome_services_servers_1));
	home_services_servers_t* home_services_servers_2 = home_services_servers_parseFromJSON(jsonhome_services_servers_1);
	cJSON* jsonhome_services_servers_2 = home_services_servers_convertToJSON(home_services_servers_2);
	printf("repeating home_services_servers:\n%s\n", cJSON_Print(jsonhome_services_servers_2));
}

int main() {
  test_home_services_servers(1);
  test_home_services_servers(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_services_servers_MAIN
#endif // home_services_servers_TEST
