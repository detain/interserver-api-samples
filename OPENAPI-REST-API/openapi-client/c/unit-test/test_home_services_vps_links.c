#ifndef home_services_vps_links_TEST
#define home_services_vps_links_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_services_vps_links_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_services_vps_links.h"
home_services_vps_links_t* instantiate_home_services_vps_links(int include_optional);



home_services_vps_links_t* instantiate_home_services_vps_links(int include_optional) {
  home_services_vps_links_t* home_services_vps_links = NULL;
  if (include_optional) {
    home_services_vps_links = home_services_vps_links_create(
      "vps465503",
      "vps2500081",
      "vps2578866"
    );
  } else {
    home_services_vps_links = home_services_vps_links_create(
      "vps465503",
      "vps2500081",
      "vps2578866"
    );
  }

  return home_services_vps_links;
}


#ifdef home_services_vps_links_MAIN

void test_home_services_vps_links(int include_optional) {
    home_services_vps_links_t* home_services_vps_links_1 = instantiate_home_services_vps_links(include_optional);

	cJSON* jsonhome_services_vps_links_1 = home_services_vps_links_convertToJSON(home_services_vps_links_1);
	printf("home_services_vps_links :\n%s\n", cJSON_Print(jsonhome_services_vps_links_1));
	home_services_vps_links_t* home_services_vps_links_2 = home_services_vps_links_parseFromJSON(jsonhome_services_vps_links_1);
	cJSON* jsonhome_services_vps_links_2 = home_services_vps_links_convertToJSON(home_services_vps_links_2);
	printf("repeating home_services_vps_links:\n%s\n", cJSON_Print(jsonhome_services_vps_links_2));
}

int main() {
  test_home_services_vps_links(1);
  test_home_services_vps_links(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_services_vps_links_MAIN
#endif // home_services_vps_links_TEST
