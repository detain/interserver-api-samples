#ifndef scrub_ip_filter_types_TEST
#define scrub_ip_filter_types_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scrub_ip_filter_types_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scrub_ip_filter_types.h"
scrub_ip_filter_types_t* instantiate_scrub_ip_filter_types(int include_optional);



scrub_ip_filter_types_t* instantiate_scrub_ip_filter_types(int include_optional) {
  scrub_ip_filter_types_t* scrub_ip_filter_types = NULL;
  if (include_optional) {
    scrub_ip_filter_types = scrub_ip_filter_types_create(
      1,
      list_createList()
    );
  } else {
    scrub_ip_filter_types = scrub_ip_filter_types_create(
      1,
      list_createList()
    );
  }

  return scrub_ip_filter_types;
}


#ifdef scrub_ip_filter_types_MAIN

void test_scrub_ip_filter_types(int include_optional) {
    scrub_ip_filter_types_t* scrub_ip_filter_types_1 = instantiate_scrub_ip_filter_types(include_optional);

	cJSON* jsonscrub_ip_filter_types_1 = scrub_ip_filter_types_convertToJSON(scrub_ip_filter_types_1);
	printf("scrub_ip_filter_types :\n%s\n", cJSON_Print(jsonscrub_ip_filter_types_1));
	scrub_ip_filter_types_t* scrub_ip_filter_types_2 = scrub_ip_filter_types_parseFromJSON(jsonscrub_ip_filter_types_1);
	cJSON* jsonscrub_ip_filter_types_2 = scrub_ip_filter_types_convertToJSON(scrub_ip_filter_types_2);
	printf("repeating scrub_ip_filter_types:\n%s\n", cJSON_Print(jsonscrub_ip_filter_types_2));
}

int main() {
  test_scrub_ip_filter_types(1);
  test_scrub_ip_filter_types(0);

  printf("Hello world \n");
  return 0;
}

#endif // scrub_ip_filter_types_MAIN
#endif // scrub_ip_filter_types_TEST
