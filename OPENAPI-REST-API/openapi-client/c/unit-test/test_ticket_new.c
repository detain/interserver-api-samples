#ifndef ticket_new_TEST
#define ticket_new_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ticket_new_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ticket_new.h"
ticket_new_t* instantiate_ticket_new(int include_optional);



ticket_new_t* instantiate_ticket_new(int include_optional) {
  ticket_new_t* ticket_new = NULL;
  if (include_optional) {
    ticket_new = ticket_new_create(
      "0",
      "0",
      56,
      "0"
    );
  } else {
    ticket_new = ticket_new_create(
      "0",
      "0",
      56,
      "0"
    );
  }

  return ticket_new;
}


#ifdef ticket_new_MAIN

void test_ticket_new(int include_optional) {
    ticket_new_t* ticket_new_1 = instantiate_ticket_new(include_optional);

	cJSON* jsonticket_new_1 = ticket_new_convertToJSON(ticket_new_1);
	printf("ticket_new :\n%s\n", cJSON_Print(jsonticket_new_1));
	ticket_new_t* ticket_new_2 = ticket_new_parseFromJSON(jsonticket_new_1);
	cJSON* jsonticket_new_2 = ticket_new_convertToJSON(ticket_new_2);
	printf("repeating ticket_new:\n%s\n", cJSON_Print(jsonticket_new_2));
}

int main() {
  test_ticket_new(1);
  test_ticket_new(0);

  printf("Hello world \n");
  return 0;
}

#endif // ticket_new_MAIN
#endif // ticket_new_TEST
