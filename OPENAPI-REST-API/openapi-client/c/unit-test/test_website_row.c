#ifndef website_row_TEST
#define website_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_row.h"
website_row_t* instantiate_website_row(int include_optional);



website_row_t* instantiate_website_row(int include_optional) {
  website_row_t* website_row = NULL;
  if (include_optional) {
    website_row = website_row_create(
      "376359",
      "hussfamily.com",
      "5.99",
      "active",
      "Standard Web Hosting",
      "website for manhattan project."
    );
  } else {
    website_row = website_row_create(
      "376359",
      "hussfamily.com",
      "5.99",
      "active",
      "Standard Web Hosting",
      "website for manhattan project."
    );
  }

  return website_row;
}


#ifdef website_row_MAIN

void test_website_row(int include_optional) {
    website_row_t* website_row_1 = instantiate_website_row(include_optional);

	cJSON* jsonwebsite_row_1 = website_row_convertToJSON(website_row_1);
	printf("website_row :\n%s\n", cJSON_Print(jsonwebsite_row_1));
	website_row_t* website_row_2 = website_row_parseFromJSON(jsonwebsite_row_1);
	cJSON* jsonwebsite_row_2 = website_row_convertToJSON(website_row_2);
	printf("repeating website_row:\n%s\n", cJSON_Print(jsonwebsite_row_2));
}

int main() {
  test_website_row(1);
  test_website_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_row_MAIN
#endif // website_row_TEST
