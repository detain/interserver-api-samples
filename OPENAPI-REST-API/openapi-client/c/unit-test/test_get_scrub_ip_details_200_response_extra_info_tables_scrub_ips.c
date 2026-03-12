#ifndef get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_TEST
#define get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_scrub_ip_details_200_response_extra_info_tables_scrub_ips.h"
get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t* instantiate_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips(int include_optional);



get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t* instantiate_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips(int include_optional) {
  get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t* get_scrub_ip_details_200_response_extra_info_tables_scrub_ips = NULL;
  if (include_optional) {
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_create(
      "0",
      list_createList()
    );
  } else {
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_create(
      "0",
      list_createList()
    );
  }

  return get_scrub_ip_details_200_response_extra_info_tables_scrub_ips;
}


#ifdef get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_MAIN

void test_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips(int include_optional) {
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t* get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_1 = instantiate_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips(include_optional);

	cJSON* jsonget_scrub_ip_details_200_response_extra_info_tables_scrub_ips_1 = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_convertToJSON(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_1);
	printf("get_scrub_ip_details_200_response_extra_info_tables_scrub_ips :\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_extra_info_tables_scrub_ips_1));
	get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t* get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_2 = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_parseFromJSON(jsonget_scrub_ip_details_200_response_extra_info_tables_scrub_ips_1);
	cJSON* jsonget_scrub_ip_details_200_response_extra_info_tables_scrub_ips_2 = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_convertToJSON(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_2);
	printf("repeating get_scrub_ip_details_200_response_extra_info_tables_scrub_ips:\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_extra_info_tables_scrub_ips_2));
}

int main() {
  test_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips(1);
  test_get_scrub_ip_details_200_response_extra_info_tables_scrub_ips(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_MAIN
#endif // get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_TEST
