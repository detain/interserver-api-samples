#ifndef website_backups_TEST
#define website_backups_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_backups_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_backups.h"
website_backups_t* instantiate_website_backups(int include_optional);



website_backups_t* instantiate_website_backups(int include_optional) {
  website_backups_t* website_backups = NULL;
  if (include_optional) {
    website_backups = website_backups_create(
    );
  } else {
    website_backups = website_backups_create(
    );
  }

  return website_backups;
}


#ifdef website_backups_MAIN

void test_website_backups(int include_optional) {
    website_backups_t* website_backups_1 = instantiate_website_backups(include_optional);

	cJSON* jsonwebsite_backups_1 = website_backups_convertToJSON(website_backups_1);
	printf("website_backups :\n%s\n", cJSON_Print(jsonwebsite_backups_1));
	website_backups_t* website_backups_2 = website_backups_parseFromJSON(jsonwebsite_backups_1);
	cJSON* jsonwebsite_backups_2 = website_backups_convertToJSON(website_backups_2);
	printf("repeating website_backups:\n%s\n", cJSON_Print(jsonwebsite_backups_2));
}

int main() {
  test_website_backups(1);
  test_website_backups(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_backups_MAIN
#endif // website_backups_TEST
