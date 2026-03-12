#ifndef home_details_TEST
#define home_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_details.h"
home_details_t* instantiate_home_details(int include_optional);

#include "test_home_details_modules.c"


home_details_t* instantiate_home_details(int include_optional) {
  home_details_t* home_details = NULL;
  if (include_optional) {
    home_details = home_details_create(
       // false, not to have infinite recursion
      instantiate_home_details_modules(0)
    );
  } else {
    home_details = home_details_create(
      NULL
    );
  }

  return home_details;
}


#ifdef home_details_MAIN

void test_home_details(int include_optional) {
    home_details_t* home_details_1 = instantiate_home_details(include_optional);

	cJSON* jsonhome_details_1 = home_details_convertToJSON(home_details_1);
	printf("home_details :\n%s\n", cJSON_Print(jsonhome_details_1));
	home_details_t* home_details_2 = home_details_parseFromJSON(jsonhome_details_1);
	cJSON* jsonhome_details_2 = home_details_convertToJSON(home_details_2);
	printf("repeating home_details:\n%s\n", cJSON_Print(jsonhome_details_2));
}

int main() {
  test_home_details(1);
  test_home_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_details_MAIN
#endif // home_details_TEST
