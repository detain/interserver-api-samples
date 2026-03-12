#ifndef website_backups_inner_TEST
#define website_backups_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_backups_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_backups_inner.h"
website_backups_inner_t* instantiate_website_backups_inner(int include_optional);



website_backups_inner_t* instantiate_website_backups_inner(int include_optional) {
  website_backups_inner_t* website_backups_inner = NULL;
  if (include_optional) {
    website_backups_inner = website_backups_inner_create(
      "0",
      56
    );
  } else {
    website_backups_inner = website_backups_inner_create(
      "0",
      56
    );
  }

  return website_backups_inner;
}


#ifdef website_backups_inner_MAIN

void test_website_backups_inner(int include_optional) {
    website_backups_inner_t* website_backups_inner_1 = instantiate_website_backups_inner(include_optional);

	cJSON* jsonwebsite_backups_inner_1 = website_backups_inner_convertToJSON(website_backups_inner_1);
	printf("website_backups_inner :\n%s\n", cJSON_Print(jsonwebsite_backups_inner_1));
	website_backups_inner_t* website_backups_inner_2 = website_backups_inner_parseFromJSON(jsonwebsite_backups_inner_1);
	cJSON* jsonwebsite_backups_inner_2 = website_backups_inner_convertToJSON(website_backups_inner_2);
	printf("repeating website_backups_inner:\n%s\n", cJSON_Print(jsonwebsite_backups_inner_2));
}

int main() {
  test_website_backups_inner(1);
  test_website_backups_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_backups_inner_MAIN
#endif // website_backups_inner_TEST
