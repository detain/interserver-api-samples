#ifndef server_switchport_TEST
#define server_switchport_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_switchport_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_switchport.h"
server_switchport_t* instantiate_server_switchport(int include_optional);



server_switchport_t* instantiate_server_switchport(int include_optional) {
  server_switchport_t* server_switchport = NULL;
  if (include_optional) {
    server_switchport = server_switchport_create(
      10414,
      "118",
      "edge1",
      "Ethernet1/33",
      "Ethernet1",
      "33",
      "12622",
      3497,
      [],
      []
    );
  } else {
    server_switchport = server_switchport_create(
      10414,
      "118",
      "edge1",
      "Ethernet1/33",
      "Ethernet1",
      "33",
      "12622",
      3497,
      [],
      []
    );
  }

  return server_switchport;
}


#ifdef server_switchport_MAIN

void test_server_switchport(int include_optional) {
    server_switchport_t* server_switchport_1 = instantiate_server_switchport(include_optional);

	cJSON* jsonserver_switchport_1 = server_switchport_convertToJSON(server_switchport_1);
	printf("server_switchport :\n%s\n", cJSON_Print(jsonserver_switchport_1));
	server_switchport_t* server_switchport_2 = server_switchport_parseFromJSON(jsonserver_switchport_1);
	cJSON* jsonserver_switchport_2 = server_switchport_convertToJSON(server_switchport_2);
	printf("repeating server_switchport:\n%s\n", cJSON_Print(jsonserver_switchport_2));
}

int main() {
  test_server_switchport(1);
  test_server_switchport(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_switchport_MAIN
#endif // server_switchport_TEST
