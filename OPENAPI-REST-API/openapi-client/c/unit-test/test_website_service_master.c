#ifndef website_service_master_TEST
#define website_service_master_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_service_master_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_service_master.h"
website_service_master_t* instantiate_website_service_master(int include_optional);



website_service_master_t* instantiate_website_service_master(int include_optional) {
  website_service_master_t* website_service_master = NULL;
  if (include_optional) {
    website_service_master = website_service_master_create(
      "543",
      "vda4200.is.cc",
      "74.50.80.15",
      "206",
      "0",
      "2062",
      "196",
      "6.55",
      "2023-08-17T23:01:02.000Z",
      "300",
      "58984",
      "0",
      "vda4200a.trouble-free.net",
      "vda4200b.trouble-free.net"
    );
  } else {
    website_service_master = website_service_master_create(
      "543",
      "vda4200.is.cc",
      "74.50.80.15",
      "206",
      "0",
      "2062",
      "196",
      "6.55",
      "2023-08-17T23:01:02.000Z",
      "300",
      "58984",
      "0",
      "vda4200a.trouble-free.net",
      "vda4200b.trouble-free.net"
    );
  }

  return website_service_master;
}


#ifdef website_service_master_MAIN

void test_website_service_master(int include_optional) {
    website_service_master_t* website_service_master_1 = instantiate_website_service_master(include_optional);

	cJSON* jsonwebsite_service_master_1 = website_service_master_convertToJSON(website_service_master_1);
	printf("website_service_master :\n%s\n", cJSON_Print(jsonwebsite_service_master_1));
	website_service_master_t* website_service_master_2 = website_service_master_parseFromJSON(jsonwebsite_service_master_1);
	cJSON* jsonwebsite_service_master_2 = website_service_master_convertToJSON(website_service_master_2);
	printf("repeating website_service_master:\n%s\n", cJSON_Print(jsonwebsite_service_master_2));
}

int main() {
  test_website_service_master(1);
  test_website_service_master(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_service_master_MAIN
#endif // website_service_master_TEST
