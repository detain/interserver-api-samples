#ifndef website_service_info_TEST
#define website_service_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_service_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_service_info.h"
website_service_info_t* instantiate_website_service_info(int include_optional);



website_service_info_t* instantiate_website_service_info(int include_optional) {
  website_service_info_t* website_service_info = NULL;
  if (include_optional) {
    website_service_info = website_service_info_create(
      "1196829",
      "543",
      "11363",
      "USD",
      "2023-03-16T22:51:54.000Z",
      "85872",
      "74.50.80.15",
      "active",
      "20261994",
      "1690",
      "[]",
      "vintagevultures.com",
      "0",
      "vintagev",
      "0"
    );
  } else {
    website_service_info = website_service_info_create(
      "1196829",
      "543",
      "11363",
      "USD",
      "2023-03-16T22:51:54.000Z",
      "85872",
      "74.50.80.15",
      "active",
      "20261994",
      "1690",
      "[]",
      "vintagevultures.com",
      "0",
      "vintagev",
      "0"
    );
  }

  return website_service_info;
}


#ifdef website_service_info_MAIN

void test_website_service_info(int include_optional) {
    website_service_info_t* website_service_info_1 = instantiate_website_service_info(include_optional);

	cJSON* jsonwebsite_service_info_1 = website_service_info_convertToJSON(website_service_info_1);
	printf("website_service_info :\n%s\n", cJSON_Print(jsonwebsite_service_info_1));
	website_service_info_t* website_service_info_2 = website_service_info_parseFromJSON(jsonwebsite_service_info_1);
	cJSON* jsonwebsite_service_info_2 = website_service_info_convertToJSON(website_service_info_2);
	printf("repeating website_service_info:\n%s\n", cJSON_Print(jsonwebsite_service_info_2));
}

int main() {
  test_website_service_info(1);
  test_website_service_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_service_info_MAIN
#endif // website_service_info_TEST
