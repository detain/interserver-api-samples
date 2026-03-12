#ifndef get_scrub_ip_details_200_response_TEST
#define get_scrub_ip_details_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_scrub_ip_details_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_scrub_ip_details_200_response.h"
get_scrub_ip_details_200_response_t* instantiate_get_scrub_ip_details_200_response(int include_optional);

#include "test_get_scrub_ip_details_200_response_service_info.c"
#include "test_get_scrub_ip_details_200_response_billing_details.c"
#include "test_get_scrub_ip_details_200_response_extra_info_tables.c"
#include "test_get_scrub_ip_details_200_response_filter_firewall.c"


get_scrub_ip_details_200_response_t* instantiate_get_scrub_ip_details_200_response(int include_optional) {
  get_scrub_ip_details_200_response_t* get_scrub_ip_details_200_response = NULL;
  if (include_optional) {
    get_scrub_ip_details_200_response = get_scrub_ip_details_200_response_create(
       // false, not to have infinite recursion
      instantiate_get_scrub_ip_details_200_response_service_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_get_scrub_ip_details_200_response_billing_details(0),
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_get_scrub_ip_details_200_response_extra_info_tables(0),
       // false, not to have infinite recursion
      instantiate_get_scrub_ip_details_200_response_filter_firewall(0)
    );
  } else {
    get_scrub_ip_details_200_response = get_scrub_ip_details_200_response_create(
      NULL,
      list_createList(),
      NULL,
      "0",
      "0",
      "0",
      NULL,
      NULL
    );
  }

  return get_scrub_ip_details_200_response;
}


#ifdef get_scrub_ip_details_200_response_MAIN

void test_get_scrub_ip_details_200_response(int include_optional) {
    get_scrub_ip_details_200_response_t* get_scrub_ip_details_200_response_1 = instantiate_get_scrub_ip_details_200_response(include_optional);

	cJSON* jsonget_scrub_ip_details_200_response_1 = get_scrub_ip_details_200_response_convertToJSON(get_scrub_ip_details_200_response_1);
	printf("get_scrub_ip_details_200_response :\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_1));
	get_scrub_ip_details_200_response_t* get_scrub_ip_details_200_response_2 = get_scrub_ip_details_200_response_parseFromJSON(jsonget_scrub_ip_details_200_response_1);
	cJSON* jsonget_scrub_ip_details_200_response_2 = get_scrub_ip_details_200_response_convertToJSON(get_scrub_ip_details_200_response_2);
	printf("repeating get_scrub_ip_details_200_response:\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_2));
}

int main() {
  test_get_scrub_ip_details_200_response(1);
  test_get_scrub_ip_details_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_scrub_ip_details_200_response_MAIN
#endif // get_scrub_ip_details_200_response_TEST
