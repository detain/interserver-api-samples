#ifndef home_ticket_status_TEST
#define home_ticket_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_ticket_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_ticket_status.h"
home_ticket_status_t* instantiate_home_ticket_status(int include_optional);



home_ticket_status_t* instantiate_home_ticket_status(int include_optional) {
  home_ticket_status_t* home_ticket_status = NULL;
  if (include_optional) {
    home_ticket_status = home_ticket_status_create(
      4,
      5
    );
  } else {
    home_ticket_status = home_ticket_status_create(
      4,
      5
    );
  }

  return home_ticket_status;
}


#ifdef home_ticket_status_MAIN

void test_home_ticket_status(int include_optional) {
    home_ticket_status_t* home_ticket_status_1 = instantiate_home_ticket_status(include_optional);

	cJSON* jsonhome_ticket_status_1 = home_ticket_status_convertToJSON(home_ticket_status_1);
	printf("home_ticket_status :\n%s\n", cJSON_Print(jsonhome_ticket_status_1));
	home_ticket_status_t* home_ticket_status_2 = home_ticket_status_parseFromJSON(jsonhome_ticket_status_1);
	cJSON* jsonhome_ticket_status_2 = home_ticket_status_convertToJSON(home_ticket_status_2);
	printf("repeating home_ticket_status:\n%s\n", cJSON_Print(jsonhome_ticket_status_2));
}

int main() {
  test_home_ticket_status(1);
  test_home_ticket_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_ticket_status_MAIN
#endif // home_ticket_status_TEST
