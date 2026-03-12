#ifndef home_services_vps_TEST
#define home_services_vps_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_services_vps_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_services_vps.h"
home_services_vps_t* instantiate_home_services_vps(int include_optional);

#include "test_home_services_vps_links.c"


home_services_vps_t* instantiate_home_services_vps(int include_optional) {
  home_services_vps_t* home_services_vps = NULL;
  if (include_optional) {
    home_services_vps = home_services_vps_create(
       // false, not to have infinite recursion
      instantiate_home_services_vps_links(0),
      20
    );
  } else {
    home_services_vps = home_services_vps_create(
      NULL,
      20
    );
  }

  return home_services_vps;
}


#ifdef home_services_vps_MAIN

void test_home_services_vps(int include_optional) {
    home_services_vps_t* home_services_vps_1 = instantiate_home_services_vps(include_optional);

	cJSON* jsonhome_services_vps_1 = home_services_vps_convertToJSON(home_services_vps_1);
	printf("home_services_vps :\n%s\n", cJSON_Print(jsonhome_services_vps_1));
	home_services_vps_t* home_services_vps_2 = home_services_vps_parseFromJSON(jsonhome_services_vps_1);
	cJSON* jsonhome_services_vps_2 = home_services_vps_convertToJSON(home_services_vps_2);
	printf("repeating home_services_vps:\n%s\n", cJSON_Print(jsonhome_services_vps_2));
}

int main() {
  test_home_services_vps(1);
  test_home_services_vps(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_services_vps_MAIN
#endif // home_services_vps_TEST
