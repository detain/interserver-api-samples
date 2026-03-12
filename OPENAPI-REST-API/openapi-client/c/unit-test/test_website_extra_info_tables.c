#ifndef website_extra_info_tables_TEST
#define website_extra_info_tables_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_extra_info_tables_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_extra_info_tables.h"
website_extra_info_tables_t* instantiate_website_extra_info_tables(int include_optional);

#include "test_website_table.c"
#include "test_website_table.c"
#include "test_website_table.c"


website_extra_info_tables_t* instantiate_website_extra_info_tables(int include_optional) {
  website_extra_info_tables_t* website_extra_info_tables = NULL;
  if (include_optional) {
    website_extra_info_tables = website_extra_info_tables_create(
       // false, not to have infinite recursion
      instantiate_website_table(0),
       // false, not to have infinite recursion
      instantiate_website_table(0),
       // false, not to have infinite recursion
      instantiate_website_table(0)
    );
  } else {
    website_extra_info_tables = website_extra_info_tables_create(
      NULL,
      NULL,
      NULL
    );
  }

  return website_extra_info_tables;
}


#ifdef website_extra_info_tables_MAIN

void test_website_extra_info_tables(int include_optional) {
    website_extra_info_tables_t* website_extra_info_tables_1 = instantiate_website_extra_info_tables(include_optional);

	cJSON* jsonwebsite_extra_info_tables_1 = website_extra_info_tables_convertToJSON(website_extra_info_tables_1);
	printf("website_extra_info_tables :\n%s\n", cJSON_Print(jsonwebsite_extra_info_tables_1));
	website_extra_info_tables_t* website_extra_info_tables_2 = website_extra_info_tables_parseFromJSON(jsonwebsite_extra_info_tables_1);
	cJSON* jsonwebsite_extra_info_tables_2 = website_extra_info_tables_convertToJSON(website_extra_info_tables_2);
	printf("repeating website_extra_info_tables:\n%s\n", cJSON_Print(jsonwebsite_extra_info_tables_2));
}

int main() {
  test_website_extra_info_tables(1);
  test_website_extra_info_tables(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_extra_info_tables_MAIN
#endif // website_extra_info_tables_TEST
