#ifndef server_locations_TEST
#define server_locations_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_locations_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_locations.h"
server_locations_t* instantiate_server_locations(int include_optional);

#include "test_server_location1.c"


server_locations_t* instantiate_server_locations(int include_optional) {
  server_locations_t* server_locations = NULL;
  if (include_optional) {
    server_locations = server_locations_create(
       // false, not to have infinite recursion
      instantiate_server_location1(0)
    );
  } else {
    server_locations = server_locations_create(
      NULL
    );
  }

  return server_locations;
}


#ifdef server_locations_MAIN

void test_server_locations(int include_optional) {
    server_locations_t* server_locations_1 = instantiate_server_locations(include_optional);

	cJSON* jsonserver_locations_1 = server_locations_convertToJSON(server_locations_1);
	printf("server_locations :\n%s\n", cJSON_Print(jsonserver_locations_1));
	server_locations_t* server_locations_2 = server_locations_parseFromJSON(jsonserver_locations_1);
	cJSON* jsonserver_locations_2 = server_locations_convertToJSON(server_locations_2);
	printf("repeating server_locations:\n%s\n", cJSON_Print(jsonserver_locations_2));
}

int main() {
  test_server_locations(1);
  test_server_locations(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_locations_MAIN
#endif // server_locations_TEST
