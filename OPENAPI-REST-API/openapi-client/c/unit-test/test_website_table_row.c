#ifndef website_table_row_TEST
#define website_table_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_table_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_table_row.h"
website_table_row_t* instantiate_website_table_row(int include_optional);



website_table_row_t* instantiate_website_table_row(int include_optional) {
  website_table_row_t* website_table_row = NULL;
  if (include_optional) {
    website_table_row = website_table_row_create(
      "0",
      "0"
    );
  } else {
    website_table_row = website_table_row_create(
      "0",
      "0"
    );
  }

  return website_table_row;
}


#ifdef website_table_row_MAIN

void test_website_table_row(int include_optional) {
    website_table_row_t* website_table_row_1 = instantiate_website_table_row(include_optional);

	cJSON* jsonwebsite_table_row_1 = website_table_row_convertToJSON(website_table_row_1);
	printf("website_table_row :\n%s\n", cJSON_Print(jsonwebsite_table_row_1));
	website_table_row_t* website_table_row_2 = website_table_row_parseFromJSON(jsonwebsite_table_row_1);
	cJSON* jsonwebsite_table_row_2 = website_table_row_convertToJSON(website_table_row_2);
	printf("repeating website_table_row:\n%s\n", cJSON_Print(jsonwebsite_table_row_2));
}

int main() {
  test_website_table_row(1);
  test_website_table_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_table_row_MAIN
#endif // website_table_row_TEST
