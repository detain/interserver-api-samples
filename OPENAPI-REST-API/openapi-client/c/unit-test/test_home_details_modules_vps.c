#ifndef home_details_modules_vps_TEST
#define home_details_modules_vps_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_details_modules_vps_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_details_modules_vps.h"
home_details_modules_vps_t* instantiate_home_details_modules_vps(int include_optional);



home_details_modules_vps_t* instantiate_home_details_modules_vps(int include_optional) {
  home_details_modules_vps_t* home_details_modules_vps = NULL;
  if (include_optional) {
    home_details_modules_vps = home_details_modules_vps_create(
      "cloud-meatball",
      "view_vps",
      "VPS",
      "order_vps",
      "view_vps_list"
    );
  } else {
    home_details_modules_vps = home_details_modules_vps_create(
      "cloud-meatball",
      "view_vps",
      "VPS",
      "order_vps",
      "view_vps_list"
    );
  }

  return home_details_modules_vps;
}


#ifdef home_details_modules_vps_MAIN

void test_home_details_modules_vps(int include_optional) {
    home_details_modules_vps_t* home_details_modules_vps_1 = instantiate_home_details_modules_vps(include_optional);

	cJSON* jsonhome_details_modules_vps_1 = home_details_modules_vps_convertToJSON(home_details_modules_vps_1);
	printf("home_details_modules_vps :\n%s\n", cJSON_Print(jsonhome_details_modules_vps_1));
	home_details_modules_vps_t* home_details_modules_vps_2 = home_details_modules_vps_parseFromJSON(jsonhome_details_modules_vps_1);
	cJSON* jsonhome_details_modules_vps_2 = home_details_modules_vps_convertToJSON(home_details_modules_vps_2);
	printf("repeating home_details_modules_vps:\n%s\n", cJSON_Print(jsonhome_details_modules_vps_2));
}

int main() {
  test_home_details_modules_vps(1);
  test_home_details_modules_vps(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_details_modules_vps_MAIN
#endif // home_details_modules_vps_TEST
