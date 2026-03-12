#ifndef home_details_modules_quickservers_TEST
#define home_details_modules_quickservers_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_details_modules_quickservers_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_details_modules_quickservers.h"
home_details_modules_quickservers_t* instantiate_home_details_modules_quickservers(int include_optional);



home_details_modules_quickservers_t* instantiate_home_details_modules_quickservers(int include_optional) {
  home_details_modules_quickservers_t* home_details_modules_quickservers = NULL;
  if (include_optional) {
    home_details_modules_quickservers = home_details_modules_quickservers_create(
      "database",
      "view_qs",
      "Quick Servers",
      "order_quickserver",
      "view_quickservers_list"
    );
  } else {
    home_details_modules_quickservers = home_details_modules_quickservers_create(
      "database",
      "view_qs",
      "Quick Servers",
      "order_quickserver",
      "view_quickservers_list"
    );
  }

  return home_details_modules_quickservers;
}


#ifdef home_details_modules_quickservers_MAIN

void test_home_details_modules_quickservers(int include_optional) {
    home_details_modules_quickservers_t* home_details_modules_quickservers_1 = instantiate_home_details_modules_quickservers(include_optional);

	cJSON* jsonhome_details_modules_quickservers_1 = home_details_modules_quickservers_convertToJSON(home_details_modules_quickservers_1);
	printf("home_details_modules_quickservers :\n%s\n", cJSON_Print(jsonhome_details_modules_quickservers_1));
	home_details_modules_quickservers_t* home_details_modules_quickservers_2 = home_details_modules_quickservers_parseFromJSON(jsonhome_details_modules_quickservers_1);
	cJSON* jsonhome_details_modules_quickservers_2 = home_details_modules_quickservers_convertToJSON(home_details_modules_quickservers_2);
	printf("repeating home_details_modules_quickservers:\n%s\n", cJSON_Print(jsonhome_details_modules_quickservers_2));
}

int main() {
  test_home_details_modules_quickservers(1);
  test_home_details_modules_quickservers(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_details_modules_quickservers_MAIN
#endif // home_details_modules_quickservers_TEST
