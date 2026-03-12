#ifndef server_location1_TEST
#define server_location1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_location1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_location1.h"
server_location1_t* instantiate_server_location1(int include_optional);



server_location1_t* instantiate_server_location1(int include_optional) {
  server_location1_t* server_location1 = NULL;
  if (include_optional) {
    server_location1 = server_location1_create(
      56,
      "0",
      "0",
      "0",
      "0",
      56
    );
  } else {
    server_location1 = server_location1_create(
      56,
      "0",
      "0",
      "0",
      "0",
      56
    );
  }

  return server_location1;
}


#ifdef server_location1_MAIN

void test_server_location1(int include_optional) {
    server_location1_t* server_location1_1 = instantiate_server_location1(include_optional);

	cJSON* jsonserver_location1_1 = server_location1_convertToJSON(server_location1_1);
	printf("server_location1 :\n%s\n", cJSON_Print(jsonserver_location1_1));
	server_location1_t* server_location1_2 = server_location1_parseFromJSON(jsonserver_location1_1);
	cJSON* jsonserver_location1_2 = server_location1_convertToJSON(server_location1_2);
	printf("repeating server_location1:\n%s\n", cJSON_Print(jsonserver_location1_2));
}

int main() {
  test_server_location1(1);
  test_server_location1(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_location1_MAIN
#endif // server_location1_TEST
