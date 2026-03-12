#ifndef ticket_new_response_TEST
#define ticket_new_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ticket_new_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ticket_new_response.h"
ticket_new_response_t* instantiate_ticket_new_response(int include_optional);



ticket_new_response_t* instantiate_ticket_new_response(int include_optional) {
  ticket_new_response_t* ticket_new_response = NULL;
  if (include_optional) {
    ticket_new_response = ticket_new_response_create(
      "0",
      1,
      56
    );
  } else {
    ticket_new_response = ticket_new_response_create(
      "0",
      1,
      56
    );
  }

  return ticket_new_response;
}


#ifdef ticket_new_response_MAIN

void test_ticket_new_response(int include_optional) {
    ticket_new_response_t* ticket_new_response_1 = instantiate_ticket_new_response(include_optional);

	cJSON* jsonticket_new_response_1 = ticket_new_response_convertToJSON(ticket_new_response_1);
	printf("ticket_new_response :\n%s\n", cJSON_Print(jsonticket_new_response_1));
	ticket_new_response_t* ticket_new_response_2 = ticket_new_response_parseFromJSON(jsonticket_new_response_1);
	cJSON* jsonticket_new_response_2 = ticket_new_response_convertToJSON(ticket_new_response_2);
	printf("repeating ticket_new_response:\n%s\n", cJSON_Print(jsonticket_new_response_2));
}

int main() {
  test_ticket_new_response(1);
  test_ticket_new_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ticket_new_response_MAIN
#endif // ticket_new_response_TEST
