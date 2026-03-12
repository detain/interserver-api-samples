#ifndef server_row_TEST
#define server_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_row.h"
server_row_t* instantiate_server_row(int include_optional);



server_row_t* instantiate_server_row(int include_optional) {
  server_row_t* server_row = NULL;
  if (include_optional) {
    server_row = server_row_create(
      "8404",
      "detain@interserver.net",
      "testsignup.is.net",
      "deleted"
    );
  } else {
    server_row = server_row_create(
      "8404",
      "detain@interserver.net",
      "testsignup.is.net",
      "deleted"
    );
  }

  return server_row;
}


#ifdef server_row_MAIN

void test_server_row(int include_optional) {
    server_row_t* server_row_1 = instantiate_server_row(include_optional);

	cJSON* jsonserver_row_1 = server_row_convertToJSON(server_row_1);
	printf("server_row :\n%s\n", cJSON_Print(jsonserver_row_1));
	server_row_t* server_row_2 = server_row_parseFromJSON(jsonserver_row_1);
	cJSON* jsonserver_row_2 = server_row_convertToJSON(server_row_2);
	printf("repeating server_row:\n%s\n", cJSON_Print(jsonserver_row_2));
}

int main() {
  test_server_row(1);
  test_server_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_row_MAIN
#endif // server_row_TEST
