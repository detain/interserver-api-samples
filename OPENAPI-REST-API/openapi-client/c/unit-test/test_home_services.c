#ifndef home_services_TEST
#define home_services_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_services_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_services.h"
home_services_t* instantiate_home_services(int include_optional);

#include "test_home_services_domains.c"
#include "test_home_services_webhosting.c"
#include "test_home_services_vps.c"
#include "test_home_services_licenses.c"
#include "test_home_services_servers.c"
#include "test_home_services_backups.c"


home_services_t* instantiate_home_services(int include_optional) {
  home_services_t* home_services = NULL;
  if (include_optional) {
    home_services = home_services_create(
       // false, not to have infinite recursion
      instantiate_home_services_domains(0),
       // false, not to have infinite recursion
      instantiate_home_services_webhosting(0),
       // false, not to have infinite recursion
      instantiate_home_services_vps(0),
       // false, not to have infinite recursion
      instantiate_home_services_licenses(0),
       // false, not to have infinite recursion
      instantiate_home_services_servers(0),
       // false, not to have infinite recursion
      instantiate_home_services_backups(0)
    );
  } else {
    home_services = home_services_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return home_services;
}


#ifdef home_services_MAIN

void test_home_services(int include_optional) {
    home_services_t* home_services_1 = instantiate_home_services(include_optional);

	cJSON* jsonhome_services_1 = home_services_convertToJSON(home_services_1);
	printf("home_services :\n%s\n", cJSON_Print(jsonhome_services_1));
	home_services_t* home_services_2 = home_services_parseFromJSON(jsonhome_services_1);
	cJSON* jsonhome_services_2 = home_services_convertToJSON(home_services_2);
	printf("repeating home_services:\n%s\n", cJSON_Print(jsonhome_services_2));
}

int main() {
  test_home_services(1);
  test_home_services(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_services_MAIN
#endif // home_services_TEST
