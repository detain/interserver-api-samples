#ifndef home_TEST
#define home_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home.h"
home_t* instantiate_home(int include_optional);

#include "test_home_ticket_status.c"
#include "test_home_ticket_status_view.c"
#include "test_home_details.c"
#include "test_home_services.c"


home_t* instantiate_home(int include_optional) {
  home_t* home = NULL;
  if (include_optional) {
    home = home_create(
      "99.88.77.66",
      "14:58:pm - 17 Aug, 2023",
      "$",
      "$23.50",
      5,
      "$0.60",
      "John",
      "user@domain.com",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_home_ticket_status(0),
       // false, not to have infinite recursion
      instantiate_home_ticket_status_view(0),
       // false, not to have infinite recursion
      instantiate_home_details(0),
       // false, not to have infinite recursion
      instantiate_home_services(0),
      "100"
    );
  } else {
    home = home_create(
      "99.88.77.66",
      "14:58:pm - 17 Aug, 2023",
      "$",
      "$23.50",
      5,
      "$0.60",
      "John",
      "user@domain.com",
      list_createList(),
      NULL,
      NULL,
      NULL,
      NULL,
      "100"
    );
  }

  return home;
}


#ifdef home_MAIN

void test_home(int include_optional) {
    home_t* home_1 = instantiate_home(include_optional);

	cJSON* jsonhome_1 = home_convertToJSON(home_1);
	printf("home :\n%s\n", cJSON_Print(jsonhome_1));
	home_t* home_2 = home_parseFromJSON(jsonhome_1);
	cJSON* jsonhome_2 = home_convertToJSON(home_2);
	printf("repeating home:\n%s\n", cJSON_Print(jsonhome_2));
}

int main() {
  test_home(1);
  test_home(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_MAIN
#endif // home_TEST
