#ifndef home_details_modules_backups_TEST
#define home_details_modules_backups_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_details_modules_backups_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_details_modules_backups.h"
home_details_modules_backups_t* instantiate_home_details_modules_backups(int include_optional);



home_details_modules_backups_t* instantiate_home_details_modules_backups(int include_optional) {
  home_details_modules_backups_t* home_details_modules_backups = NULL;
  if (include_optional) {
    home_details_modules_backups = home_details_modules_backups_create(
      "warehouse",
      "view_backup",
      "Storages",
      "order_storage",
      "view_backups_list"
    );
  } else {
    home_details_modules_backups = home_details_modules_backups_create(
      "warehouse",
      "view_backup",
      "Storages",
      "order_storage",
      "view_backups_list"
    );
  }

  return home_details_modules_backups;
}


#ifdef home_details_modules_backups_MAIN

void test_home_details_modules_backups(int include_optional) {
    home_details_modules_backups_t* home_details_modules_backups_1 = instantiate_home_details_modules_backups(include_optional);

	cJSON* jsonhome_details_modules_backups_1 = home_details_modules_backups_convertToJSON(home_details_modules_backups_1);
	printf("home_details_modules_backups :\n%s\n", cJSON_Print(jsonhome_details_modules_backups_1));
	home_details_modules_backups_t* home_details_modules_backups_2 = home_details_modules_backups_parseFromJSON(jsonhome_details_modules_backups_1);
	cJSON* jsonhome_details_modules_backups_2 = home_details_modules_backups_convertToJSON(home_details_modules_backups_2);
	printf("repeating home_details_modules_backups:\n%s\n", cJSON_Print(jsonhome_details_modules_backups_2));
}

int main() {
  test_home_details_modules_backups(1);
  test_home_details_modules_backups(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_details_modules_backups_MAIN
#endif // home_details_modules_backups_TEST
