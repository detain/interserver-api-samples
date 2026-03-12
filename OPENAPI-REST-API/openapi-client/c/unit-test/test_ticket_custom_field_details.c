#ifndef ticket_custom_field_details_TEST
#define ticket_custom_field_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ticket_custom_field_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ticket_custom_field_details.h"
ticket_custom_field_details_t* instantiate_ticket_custom_field_details(int include_optional);



ticket_custom_field_details_t* instantiate_ticket_custom_field_details(int include_optional) {
  ticket_custom_field_details_t* ticket_custom_field_details = NULL;
  if (include_optional) {
    ticket_custom_field_details = ticket_custom_field_details_create(
      interserver_management_api_ticket_custom_field_details_CUSTOMERSERVERACCESS_y,
      "0",
      "0",
      "0",
      56,
      56
    );
  } else {
    ticket_custom_field_details = ticket_custom_field_details_create(
      interserver_management_api_ticket_custom_field_details_CUSTOMERSERVERACCESS_y,
      "0",
      "0",
      "0",
      56,
      56
    );
  }

  return ticket_custom_field_details;
}


#ifdef ticket_custom_field_details_MAIN

void test_ticket_custom_field_details(int include_optional) {
    ticket_custom_field_details_t* ticket_custom_field_details_1 = instantiate_ticket_custom_field_details(include_optional);

	cJSON* jsonticket_custom_field_details_1 = ticket_custom_field_details_convertToJSON(ticket_custom_field_details_1);
	printf("ticket_custom_field_details :\n%s\n", cJSON_Print(jsonticket_custom_field_details_1));
	ticket_custom_field_details_t* ticket_custom_field_details_2 = ticket_custom_field_details_parseFromJSON(jsonticket_custom_field_details_1);
	cJSON* jsonticket_custom_field_details_2 = ticket_custom_field_details_convertToJSON(ticket_custom_field_details_2);
	printf("repeating ticket_custom_field_details:\n%s\n", cJSON_Print(jsonticket_custom_field_details_2));
}

int main() {
  test_ticket_custom_field_details(1);
  test_ticket_custom_field_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // ticket_custom_field_details_MAIN
#endif // ticket_custom_field_details_TEST
