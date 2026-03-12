#ifndef home_ticket_status_view_TEST
#define home_ticket_status_view_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_ticket_status_view_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_ticket_status_view.h"
home_ticket_status_view_t* instantiate_home_ticket_status_view(int include_optional);



home_ticket_status_view_t* instantiate_home_ticket_status_view(int include_optional) {
  home_ticket_status_view_t* home_ticket_status_view = NULL;
  if (include_optional) {
    home_ticket_status_view = home_ticket_status_view_create(
      "Open",
      "On Hold",
      "Closed"
    );
  } else {
    home_ticket_status_view = home_ticket_status_view_create(
      "Open",
      "On Hold",
      "Closed"
    );
  }

  return home_ticket_status_view;
}


#ifdef home_ticket_status_view_MAIN

void test_home_ticket_status_view(int include_optional) {
    home_ticket_status_view_t* home_ticket_status_view_1 = instantiate_home_ticket_status_view(include_optional);

	cJSON* jsonhome_ticket_status_view_1 = home_ticket_status_view_convertToJSON(home_ticket_status_view_1);
	printf("home_ticket_status_view :\n%s\n", cJSON_Print(jsonhome_ticket_status_view_1));
	home_ticket_status_view_t* home_ticket_status_view_2 = home_ticket_status_view_parseFromJSON(jsonhome_ticket_status_view_1);
	cJSON* jsonhome_ticket_status_view_2 = home_ticket_status_view_convertToJSON(home_ticket_status_view_2);
	printf("repeating home_ticket_status_view:\n%s\n", cJSON_Print(jsonhome_ticket_status_view_2));
}

int main() {
  test_home_ticket_status_view(1);
  test_home_ticket_status_view(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_ticket_status_view_MAIN
#endif // home_ticket_status_view_TEST
