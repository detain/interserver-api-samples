#ifndef server_order_raid_TEST
#define server_order_raid_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_raid_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_raid.h"
server_order_raid_t* instantiate_server_order_raid(int include_optional);



server_order_raid_t* instantiate_server_order_raid(int include_optional) {
  server_order_raid_t* server_order_raid = NULL;
  if (include_optional) {
    server_order_raid = server_order_raid_create(
      "7",
      50,
      "raid.png",
      "Hardware Raid 5",
      "Hardware Raid 5",
      50,
      "1",
      "$50.00",
      "$50.00"
    );
  } else {
    server_order_raid = server_order_raid_create(
      "7",
      50,
      "raid.png",
      "Hardware Raid 5",
      "Hardware Raid 5",
      50,
      "1",
      "$50.00",
      "$50.00"
    );
  }

  return server_order_raid;
}


#ifdef server_order_raid_MAIN

void test_server_order_raid(int include_optional) {
    server_order_raid_t* server_order_raid_1 = instantiate_server_order_raid(include_optional);

	cJSON* jsonserver_order_raid_1 = server_order_raid_convertToJSON(server_order_raid_1);
	printf("server_order_raid :\n%s\n", cJSON_Print(jsonserver_order_raid_1));
	server_order_raid_t* server_order_raid_2 = server_order_raid_parseFromJSON(jsonserver_order_raid_1);
	cJSON* jsonserver_order_raid_2 = server_order_raid_convertToJSON(server_order_raid_2);
	printf("repeating server_order_raid:\n%s\n", cJSON_Print(jsonserver_order_raid_2));
}

int main() {
  test_server_order_raid(1);
  test_server_order_raid(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_raid_MAIN
#endif // server_order_raid_TEST
