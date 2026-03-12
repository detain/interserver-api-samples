#ifndef home_services_webhosting_TEST
#define home_services_webhosting_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_services_webhosting_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_services_webhosting.h"
home_services_webhosting_t* instantiate_home_services_webhosting(int include_optional);

#include "test_home_services_webhosting_links.c"


home_services_webhosting_t* instantiate_home_services_webhosting(int include_optional) {
  home_services_webhosting_t* home_services_webhosting = NULL;
  if (include_optional) {
    home_services_webhosting = home_services_webhosting_create(
       // false, not to have infinite recursion
      instantiate_home_services_webhosting_links(0),
      8
    );
  } else {
    home_services_webhosting = home_services_webhosting_create(
      NULL,
      8
    );
  }

  return home_services_webhosting;
}


#ifdef home_services_webhosting_MAIN

void test_home_services_webhosting(int include_optional) {
    home_services_webhosting_t* home_services_webhosting_1 = instantiate_home_services_webhosting(include_optional);

	cJSON* jsonhome_services_webhosting_1 = home_services_webhosting_convertToJSON(home_services_webhosting_1);
	printf("home_services_webhosting :\n%s\n", cJSON_Print(jsonhome_services_webhosting_1));
	home_services_webhosting_t* home_services_webhosting_2 = home_services_webhosting_parseFromJSON(jsonhome_services_webhosting_1);
	cJSON* jsonhome_services_webhosting_2 = home_services_webhosting_convertToJSON(home_services_webhosting_2);
	printf("repeating home_services_webhosting:\n%s\n", cJSON_Print(jsonhome_services_webhosting_2));
}

int main() {
  test_home_services_webhosting(1);
  test_home_services_webhosting(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_services_webhosting_MAIN
#endif // home_services_webhosting_TEST
