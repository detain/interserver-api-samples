#ifndef home_services_licenses_TEST
#define home_services_licenses_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_services_licenses_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_services_licenses.h"
home_services_licenses_t* instantiate_home_services_licenses(int include_optional);

#include "test_home_services_licenses_links.c"


home_services_licenses_t* instantiate_home_services_licenses(int include_optional) {
  home_services_licenses_t* home_services_licenses = NULL;
  if (include_optional) {
    home_services_licenses = home_services_licenses_create(
       // false, not to have infinite recursion
      instantiate_home_services_licenses_links(0),
      1
    );
  } else {
    home_services_licenses = home_services_licenses_create(
      NULL,
      1
    );
  }

  return home_services_licenses;
}


#ifdef home_services_licenses_MAIN

void test_home_services_licenses(int include_optional) {
    home_services_licenses_t* home_services_licenses_1 = instantiate_home_services_licenses(include_optional);

	cJSON* jsonhome_services_licenses_1 = home_services_licenses_convertToJSON(home_services_licenses_1);
	printf("home_services_licenses :\n%s\n", cJSON_Print(jsonhome_services_licenses_1));
	home_services_licenses_t* home_services_licenses_2 = home_services_licenses_parseFromJSON(jsonhome_services_licenses_1);
	cJSON* jsonhome_services_licenses_2 = home_services_licenses_convertToJSON(home_services_licenses_2);
	printf("repeating home_services_licenses:\n%s\n", cJSON_Print(jsonhome_services_licenses_2));
}

int main() {
  test_home_services_licenses(1);
  test_home_services_licenses(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_services_licenses_MAIN
#endif // home_services_licenses_TEST
