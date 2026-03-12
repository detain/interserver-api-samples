#ifndef home_details_modules_licenses_TEST
#define home_details_modules_licenses_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_details_modules_licenses_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_details_modules_licenses.h"
home_details_modules_licenses_t* instantiate_home_details_modules_licenses(int include_optional);



home_details_modules_licenses_t* instantiate_home_details_modules_licenses(int include_optional) {
  home_details_modules_licenses_t* home_details_modules_licenses = NULL;
  if (include_optional) {
    home_details_modules_licenses = home_details_modules_licenses_create(
      "id-card",
      "view_license",
      "Licenses",
      "order_license",
      "view_licenses_list"
    );
  } else {
    home_details_modules_licenses = home_details_modules_licenses_create(
      "id-card",
      "view_license",
      "Licenses",
      "order_license",
      "view_licenses_list"
    );
  }

  return home_details_modules_licenses;
}


#ifdef home_details_modules_licenses_MAIN

void test_home_details_modules_licenses(int include_optional) {
    home_details_modules_licenses_t* home_details_modules_licenses_1 = instantiate_home_details_modules_licenses(include_optional);

	cJSON* jsonhome_details_modules_licenses_1 = home_details_modules_licenses_convertToJSON(home_details_modules_licenses_1);
	printf("home_details_modules_licenses :\n%s\n", cJSON_Print(jsonhome_details_modules_licenses_1));
	home_details_modules_licenses_t* home_details_modules_licenses_2 = home_details_modules_licenses_parseFromJSON(jsonhome_details_modules_licenses_1);
	cJSON* jsonhome_details_modules_licenses_2 = home_details_modules_licenses_convertToJSON(home_details_modules_licenses_2);
	printf("repeating home_details_modules_licenses:\n%s\n", cJSON_Print(jsonhome_details_modules_licenses_2));
}

int main() {
  test_home_details_modules_licenses(1);
  test_home_details_modules_licenses(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_details_modules_licenses_MAIN
#endif // home_details_modules_licenses_TEST
