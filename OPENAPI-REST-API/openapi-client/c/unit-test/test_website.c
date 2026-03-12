#ifndef website_TEST
#define website_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website.h"
website_t* instantiate_website(int include_optional);

#include "test_website_service_info.c"
#include "test_website_billing_details.c"
#include "test_website_service_master.c"
#include "test_website_extra_info_tables.c"


website_t* instantiate_website(int include_optional) {
  website_t* website = NULL;
  if (include_optional) {
    website = website_create(
       // false, not to have infinite recursion
      instantiate_website_service_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_website_billing_details(0),
      "USD",
      "$",
       // false, not to have infinite recursion
      instantiate_website_service_master(0),
      "Web Hosting Direct Admin",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_website_extra_info_tables(0)
    );
  } else {
    website = website_create(
      NULL,
      list_createList(),
      NULL,
      "USD",
      "$",
      NULL,
      "Web Hosting Direct Admin",
      list_createList(),
      NULL
    );
  }

  return website;
}


#ifdef website_MAIN

void test_website(int include_optional) {
    website_t* website_1 = instantiate_website(include_optional);

	cJSON* jsonwebsite_1 = website_convertToJSON(website_1);
	printf("website :\n%s\n", cJSON_Print(jsonwebsite_1));
	website_t* website_2 = website_parseFromJSON(jsonwebsite_1);
	cJSON* jsonwebsite_2 = website_convertToJSON(website_2);
	printf("repeating website:\n%s\n", cJSON_Print(jsonwebsite_2));
}

int main() {
  test_website(1);
  test_website(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_MAIN
#endif // website_TEST
