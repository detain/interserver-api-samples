#ifndef website_client_link_TEST
#define website_client_link_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_client_link_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_client_link.h"
website_client_link_t* instantiate_website_client_link(int include_optional);



website_client_link_t* instantiate_website_client_link(int include_optional) {
  website_client_link_t* website_client_link = NULL;
  if (include_optional) {
    website_client_link = website_client_link_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    website_client_link = website_client_link_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return website_client_link;
}


#ifdef website_client_link_MAIN

void test_website_client_link(int include_optional) {
    website_client_link_t* website_client_link_1 = instantiate_website_client_link(include_optional);

	cJSON* jsonwebsite_client_link_1 = website_client_link_convertToJSON(website_client_link_1);
	printf("website_client_link :\n%s\n", cJSON_Print(jsonwebsite_client_link_1));
	website_client_link_t* website_client_link_2 = website_client_link_parseFromJSON(jsonwebsite_client_link_1);
	cJSON* jsonwebsite_client_link_2 = website_client_link_convertToJSON(website_client_link_2);
	printf("repeating website_client_link:\n%s\n", cJSON_Print(jsonwebsite_client_link_2));
}

int main() {
  test_website_client_link(1);
  test_website_client_link(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_client_link_MAIN
#endif // website_client_link_TEST
