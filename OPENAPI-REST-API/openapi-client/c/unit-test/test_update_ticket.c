#ifndef update_ticket_TEST
#define update_ticket_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_ticket_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_ticket.h"
update_ticket_t* instantiate_update_ticket(int include_optional);



update_ticket_t* instantiate_update_ticket(int include_optional) {
  update_ticket_t* update_ticket = NULL;
  if (include_optional) {
    update_ticket = update_ticket_create(
      "0",
      "0",
      interserver_management_api_update_ticket_CUSTOMERSERVERACCESS_y,
      "0",
      "0",
      "0",
      56
    );
  } else {
    update_ticket = update_ticket_create(
      "0",
      "0",
      interserver_management_api_update_ticket_CUSTOMERSERVERACCESS_y,
      "0",
      "0",
      "0",
      56
    );
  }

  return update_ticket;
}


#ifdef update_ticket_MAIN

void test_update_ticket(int include_optional) {
    update_ticket_t* update_ticket_1 = instantiate_update_ticket(include_optional);

	cJSON* jsonupdate_ticket_1 = update_ticket_convertToJSON(update_ticket_1);
	printf("update_ticket :\n%s\n", cJSON_Print(jsonupdate_ticket_1));
	update_ticket_t* update_ticket_2 = update_ticket_parseFromJSON(jsonupdate_ticket_1);
	cJSON* jsonupdate_ticket_2 = update_ticket_convertToJSON(update_ticket_2);
	printf("repeating update_ticket:\n%s\n", cJSON_Print(jsonupdate_ticket_2));
}

int main() {
  test_update_ticket(1);
  test_update_ticket(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_ticket_MAIN
#endif // update_ticket_TEST
