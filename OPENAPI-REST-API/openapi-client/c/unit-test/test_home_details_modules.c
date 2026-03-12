#ifndef home_details_modules_TEST
#define home_details_modules_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_details_modules_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_details_modules.h"
home_details_modules_t* instantiate_home_details_modules(int include_optional);

#include "test_home_details_modules_domains.c"
#include "test_home_details_modules_webhosting.c"
#include "test_home_details_modules_vps.c"
#include "test_home_details_modules_licenses.c"
#include "test_home_details_modules_backups.c"
#include "test_home_details_modules_servers.c"
#include "test_home_details_modules_quickservers.c"


home_details_modules_t* instantiate_home_details_modules(int include_optional) {
  home_details_modules_t* home_details_modules = NULL;
  if (include_optional) {
    home_details_modules = home_details_modules_create(
       // false, not to have infinite recursion
      instantiate_home_details_modules_domains(0),
       // false, not to have infinite recursion
      instantiate_home_details_modules_webhosting(0),
       // false, not to have infinite recursion
      instantiate_home_details_modules_vps(0),
       // false, not to have infinite recursion
      instantiate_home_details_modules_licenses(0),
       // false, not to have infinite recursion
      instantiate_home_details_modules_backups(0),
       // false, not to have infinite recursion
      instantiate_home_details_modules_servers(0),
       // false, not to have infinite recursion
      instantiate_home_details_modules_quickservers(0)
    );
  } else {
    home_details_modules = home_details_modules_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return home_details_modules;
}


#ifdef home_details_modules_MAIN

void test_home_details_modules(int include_optional) {
    home_details_modules_t* home_details_modules_1 = instantiate_home_details_modules(include_optional);

	cJSON* jsonhome_details_modules_1 = home_details_modules_convertToJSON(home_details_modules_1);
	printf("home_details_modules :\n%s\n", cJSON_Print(jsonhome_details_modules_1));
	home_details_modules_t* home_details_modules_2 = home_details_modules_parseFromJSON(jsonhome_details_modules_1);
	cJSON* jsonhome_details_modules_2 = home_details_modules_convertToJSON(home_details_modules_2);
	printf("repeating home_details_modules:\n%s\n", cJSON_Print(jsonhome_details_modules_2));
}

int main() {
  test_home_details_modules(1);
  test_home_details_modules(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_details_modules_MAIN
#endif // home_details_modules_TEST
