#ifndef ticket_details_TEST
#define ticket_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ticket_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ticket_details.h"
ticket_details_t* instantiate_ticket_details(int include_optional);



ticket_details_t* instantiate_ticket_details(int include_optional) {
  ticket_details_t* ticket_details = NULL;
  if (include_optional) {
    ticket_details = ticket_details_create(
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    ticket_details = ticket_details_create(
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return ticket_details;
}


#ifdef ticket_details_MAIN

void test_ticket_details(int include_optional) {
    ticket_details_t* ticket_details_1 = instantiate_ticket_details(include_optional);

	cJSON* jsonticket_details_1 = ticket_details_convertToJSON(ticket_details_1);
	printf("ticket_details :\n%s\n", cJSON_Print(jsonticket_details_1));
	ticket_details_t* ticket_details_2 = ticket_details_parseFromJSON(jsonticket_details_1);
	cJSON* jsonticket_details_2 = ticket_details_convertToJSON(ticket_details_2);
	printf("repeating ticket_details:\n%s\n", cJSON_Print(jsonticket_details_2));
}

int main() {
  test_ticket_details(1);
  test_ticket_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // ticket_details_MAIN
#endif // ticket_details_TEST
