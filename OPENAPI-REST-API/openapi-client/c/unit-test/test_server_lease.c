#ifndef server_lease_TEST
#define server_lease_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_lease_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_lease.h"
server_lease_t* instantiate_server_lease(int include_optional);



server_lease_t* instantiate_server_lease(int include_optional) {
  server_lease_t* server_lease = NULL;
  if (include_optional) {
    server_lease = server_lease_create(
      "0c:c4:7a:af:35:00",
      false,
      "1"
    );
  } else {
    server_lease = server_lease_create(
      "0c:c4:7a:af:35:00",
      false,
      "1"
    );
  }

  return server_lease;
}


#ifdef server_lease_MAIN

void test_server_lease(int include_optional) {
    server_lease_t* server_lease_1 = instantiate_server_lease(include_optional);

	cJSON* jsonserver_lease_1 = server_lease_convertToJSON(server_lease_1);
	printf("server_lease :\n%s\n", cJSON_Print(jsonserver_lease_1));
	server_lease_t* server_lease_2 = server_lease_parseFromJSON(jsonserver_lease_1);
	cJSON* jsonserver_lease_2 = server_lease_convertToJSON(server_lease_2);
	printf("repeating server_lease:\n%s\n", cJSON_Print(jsonserver_lease_2));
}

int main() {
  test_server_lease(1);
  test_server_lease(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_lease_MAIN
#endif // server_lease_TEST
