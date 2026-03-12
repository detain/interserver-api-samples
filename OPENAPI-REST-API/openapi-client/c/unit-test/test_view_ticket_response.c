#ifndef view_ticket_response_TEST
#define view_ticket_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define view_ticket_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/view_ticket_response.h"
view_ticket_response_t* instantiate_view_ticket_response(int include_optional);

#include "test_ticket_details.c"
#include "test_ticket_custom_field_details.c"


view_ticket_response_t* instantiate_view_ticket_response(int include_optional) {
  view_ticket_response_t* view_ticket_response = NULL;
  if (include_optional) {
    view_ticket_response = view_ticket_response_create(
      1,
       // false, not to have infinite recursion
      instantiate_ticket_details(0),
       // false, not to have infinite recursion
      instantiate_ticket_custom_field_details(0),
      list_createList()
    );
  } else {
    view_ticket_response = view_ticket_response_create(
      1,
      NULL,
      NULL,
      list_createList()
    );
  }

  return view_ticket_response;
}


#ifdef view_ticket_response_MAIN

void test_view_ticket_response(int include_optional) {
    view_ticket_response_t* view_ticket_response_1 = instantiate_view_ticket_response(include_optional);

	cJSON* jsonview_ticket_response_1 = view_ticket_response_convertToJSON(view_ticket_response_1);
	printf("view_ticket_response :\n%s\n", cJSON_Print(jsonview_ticket_response_1));
	view_ticket_response_t* view_ticket_response_2 = view_ticket_response_parseFromJSON(jsonview_ticket_response_1);
	cJSON* jsonview_ticket_response_2 = view_ticket_response_convertToJSON(view_ticket_response_2);
	printf("repeating view_ticket_response:\n%s\n", cJSON_Print(jsonview_ticket_response_2));
}

int main() {
  test_view_ticket_response(1);
  test_view_ticket_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // view_ticket_response_MAIN
#endif // view_ticket_response_TEST
