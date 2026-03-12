#ifndef ticket_post_details_inner_TEST
#define ticket_post_details_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ticket_post_details_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ticket_post_details_inner.h"
ticket_post_details_inner_t* instantiate_ticket_post_details_inner(int include_optional);



ticket_post_details_inner_t* instantiate_ticket_post_details_inner(int include_optional) {
  ticket_post_details_inner_t* ticket_post_details_inner = NULL;
  if (include_optional) {
    ticket_post_details_inner = ticket_post_details_inner_create(
      56,
      "0",
      "0",
      interserver_management_api_ticket_post_details_inner_CREATOR_User,
      "0",
      "0",
      56,
      "0"
    );
  } else {
    ticket_post_details_inner = ticket_post_details_inner_create(
      56,
      "0",
      "0",
      interserver_management_api_ticket_post_details_inner_CREATOR_User,
      "0",
      "0",
      56,
      "0"
    );
  }

  return ticket_post_details_inner;
}


#ifdef ticket_post_details_inner_MAIN

void test_ticket_post_details_inner(int include_optional) {
    ticket_post_details_inner_t* ticket_post_details_inner_1 = instantiate_ticket_post_details_inner(include_optional);

	cJSON* jsonticket_post_details_inner_1 = ticket_post_details_inner_convertToJSON(ticket_post_details_inner_1);
	printf("ticket_post_details_inner :\n%s\n", cJSON_Print(jsonticket_post_details_inner_1));
	ticket_post_details_inner_t* ticket_post_details_inner_2 = ticket_post_details_inner_parseFromJSON(jsonticket_post_details_inner_1);
	cJSON* jsonticket_post_details_inner_2 = ticket_post_details_inner_convertToJSON(ticket_post_details_inner_2);
	printf("repeating ticket_post_details_inner:\n%s\n", cJSON_Print(jsonticket_post_details_inner_2));
}

int main() {
  test_ticket_post_details_inner(1);
  test_ticket_post_details_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // ticket_post_details_inner_MAIN
#endif // ticket_post_details_inner_TEST
