#ifndef get_scrub_ip_details_200_response_extra_info_tables_TEST
#define get_scrub_ip_details_200_response_extra_info_tables_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_scrub_ip_details_200_response_extra_info_tables_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_scrub_ip_details_200_response_extra_info_tables.h"
get_scrub_ip_details_200_response_extra_info_tables_t* instantiate_get_scrub_ip_details_200_response_extra_info_tables(int include_optional);

#include "test_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips.c"


get_scrub_ip_details_200_response_extra_info_tables_t* instantiate_get_scrub_ip_details_200_response_extra_info_tables(int include_optional) {
  get_scrub_ip_details_200_response_extra_info_tables_t* get_scrub_ip_details_200_response_extra_info_tables = NULL;
  if (include_optional) {
    get_scrub_ip_details_200_response_extra_info_tables = get_scrub_ip_details_200_response_extra_info_tables_create(
       // false, not to have infinite recursion
      instantiate_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips(0)
    );
  } else {
    get_scrub_ip_details_200_response_extra_info_tables = get_scrub_ip_details_200_response_extra_info_tables_create(
      NULL
    );
  }

  return get_scrub_ip_details_200_response_extra_info_tables;
}


#ifdef get_scrub_ip_details_200_response_extra_info_tables_MAIN

void test_get_scrub_ip_details_200_response_extra_info_tables(int include_optional) {
    get_scrub_ip_details_200_response_extra_info_tables_t* get_scrub_ip_details_200_response_extra_info_tables_1 = instantiate_get_scrub_ip_details_200_response_extra_info_tables(include_optional);

	cJSON* jsonget_scrub_ip_details_200_response_extra_info_tables_1 = get_scrub_ip_details_200_response_extra_info_tables_convertToJSON(get_scrub_ip_details_200_response_extra_info_tables_1);
	printf("get_scrub_ip_details_200_response_extra_info_tables :\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_extra_info_tables_1));
	get_scrub_ip_details_200_response_extra_info_tables_t* get_scrub_ip_details_200_response_extra_info_tables_2 = get_scrub_ip_details_200_response_extra_info_tables_parseFromJSON(jsonget_scrub_ip_details_200_response_extra_info_tables_1);
	cJSON* jsonget_scrub_ip_details_200_response_extra_info_tables_2 = get_scrub_ip_details_200_response_extra_info_tables_convertToJSON(get_scrub_ip_details_200_response_extra_info_tables_2);
	printf("repeating get_scrub_ip_details_200_response_extra_info_tables:\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_extra_info_tables_2));
}

int main() {
  test_get_scrub_ip_details_200_response_extra_info_tables(1);
  test_get_scrub_ip_details_200_response_extra_info_tables(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_scrub_ip_details_200_response_extra_info_tables_MAIN
#endif // get_scrub_ip_details_200_response_extra_info_tables_TEST
