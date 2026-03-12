#ifndef ticket_post_details_TEST
#define ticket_post_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ticket_post_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ticket_post_details.h"
ticket_post_details_t* instantiate_ticket_post_details(int include_optional);



ticket_post_details_t* instantiate_ticket_post_details(int include_optional) {
  ticket_post_details_t* ticket_post_details = NULL;
  if (include_optional) {
    ticket_post_details = ticket_post_details_create(
    );
  } else {
    ticket_post_details = ticket_post_details_create(
    );
  }

  return ticket_post_details;
}


#ifdef ticket_post_details_MAIN

void test_ticket_post_details(int include_optional) {
    ticket_post_details_t* ticket_post_details_1 = instantiate_ticket_post_details(include_optional);

	cJSON* jsonticket_post_details_1 = ticket_post_details_convertToJSON(ticket_post_details_1);
	printf("ticket_post_details :\n%s\n", cJSON_Print(jsonticket_post_details_1));
	ticket_post_details_t* ticket_post_details_2 = ticket_post_details_parseFromJSON(jsonticket_post_details_1);
	cJSON* jsonticket_post_details_2 = ticket_post_details_convertToJSON(ticket_post_details_2);
	printf("repeating ticket_post_details:\n%s\n", cJSON_Print(jsonticket_post_details_2));
}

int main() {
  test_ticket_post_details(1);
  test_ticket_post_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // ticket_post_details_MAIN
#endif // ticket_post_details_TEST
