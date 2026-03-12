#ifndef website_table_TEST
#define website_table_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_table_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_table.h"
website_table_t* instantiate_website_table(int include_optional);



website_table_t* instantiate_website_table(int include_optional) {
  website_table_t* website_table = NULL;
  if (include_optional) {
    website_table = website_table_create(
      "0",
      list_createList()
    );
  } else {
    website_table = website_table_create(
      "0",
      list_createList()
    );
  }

  return website_table;
}


#ifdef website_table_MAIN

void test_website_table(int include_optional) {
    website_table_t* website_table_1 = instantiate_website_table(include_optional);

	cJSON* jsonwebsite_table_1 = website_table_convertToJSON(website_table_1);
	printf("website_table :\n%s\n", cJSON_Print(jsonwebsite_table_1));
	website_table_t* website_table_2 = website_table_parseFromJSON(jsonwebsite_table_1);
	cJSON* jsonwebsite_table_2 = website_table_convertToJSON(website_table_2);
	printf("repeating website_table:\n%s\n", cJSON_Print(jsonwebsite_table_2));
}

int main() {
  test_website_table(1);
  test_website_table(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_table_MAIN
#endif // website_table_TEST
