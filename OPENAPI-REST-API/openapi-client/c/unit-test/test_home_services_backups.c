#ifndef home_services_backups_TEST
#define home_services_backups_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_services_backups_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_services_backups.h"
home_services_backups_t* instantiate_home_services_backups(int include_optional);



home_services_backups_t* instantiate_home_services_backups(int include_optional) {
  home_services_backups_t* home_services_backups = NULL;
  if (include_optional) {
    home_services_backups = home_services_backups_create(
      list_createList(),
      0
    );
  } else {
    home_services_backups = home_services_backups_create(
      list_createList(),
      0
    );
  }

  return home_services_backups;
}


#ifdef home_services_backups_MAIN

void test_home_services_backups(int include_optional) {
    home_services_backups_t* home_services_backups_1 = instantiate_home_services_backups(include_optional);

	cJSON* jsonhome_services_backups_1 = home_services_backups_convertToJSON(home_services_backups_1);
	printf("home_services_backups :\n%s\n", cJSON_Print(jsonhome_services_backups_1));
	home_services_backups_t* home_services_backups_2 = home_services_backups_parseFromJSON(jsonhome_services_backups_1);
	cJSON* jsonhome_services_backups_2 = home_services_backups_convertToJSON(home_services_backups_2);
	printf("repeating home_services_backups:\n%s\n", cJSON_Print(jsonhome_services_backups_2));
}

int main() {
  test_home_services_backups(1);
  test_home_services_backups(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_services_backups_MAIN
#endif // home_services_backups_TEST
