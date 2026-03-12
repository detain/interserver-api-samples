#ifndef scrub_ip_filter_types_filters_value_TEST
#define scrub_ip_filter_types_filters_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scrub_ip_filter_types_filters_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scrub_ip_filter_types_filters_value.h"
scrub_ip_filter_types_filters_value_t* instantiate_scrub_ip_filter_types_filters_value(int include_optional);



scrub_ip_filter_types_filters_value_t* instantiate_scrub_ip_filter_types_filters_value(int include_optional) {
  scrub_ip_filter_types_filters_value_t* scrub_ip_filter_types_filters_value = NULL;
  if (include_optional) {
    scrub_ip_filter_types_filters_value = scrub_ip_filter_types_filters_value_create(
      "0",
      "0"
    );
  } else {
    scrub_ip_filter_types_filters_value = scrub_ip_filter_types_filters_value_create(
      "0",
      "0"
    );
  }

  return scrub_ip_filter_types_filters_value;
}


#ifdef scrub_ip_filter_types_filters_value_MAIN

void test_scrub_ip_filter_types_filters_value(int include_optional) {
    scrub_ip_filter_types_filters_value_t* scrub_ip_filter_types_filters_value_1 = instantiate_scrub_ip_filter_types_filters_value(include_optional);

	cJSON* jsonscrub_ip_filter_types_filters_value_1 = scrub_ip_filter_types_filters_value_convertToJSON(scrub_ip_filter_types_filters_value_1);
	printf("scrub_ip_filter_types_filters_value :\n%s\n", cJSON_Print(jsonscrub_ip_filter_types_filters_value_1));
	scrub_ip_filter_types_filters_value_t* scrub_ip_filter_types_filters_value_2 = scrub_ip_filter_types_filters_value_parseFromJSON(jsonscrub_ip_filter_types_filters_value_1);
	cJSON* jsonscrub_ip_filter_types_filters_value_2 = scrub_ip_filter_types_filters_value_convertToJSON(scrub_ip_filter_types_filters_value_2);
	printf("repeating scrub_ip_filter_types_filters_value:\n%s\n", cJSON_Print(jsonscrub_ip_filter_types_filters_value_2));
}

int main() {
  test_scrub_ip_filter_types_filters_value(1);
  test_scrub_ip_filter_types_filters_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // scrub_ip_filter_types_filters_value_MAIN
#endif // scrub_ip_filter_types_filters_value_TEST
