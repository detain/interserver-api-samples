#ifndef get_scrub_ip_details_200_response_filter_firewall_TEST
#define get_scrub_ip_details_200_response_filter_firewall_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_scrub_ip_details_200_response_filter_firewall_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_scrub_ip_details_200_response_filter_firewall.h"
get_scrub_ip_details_200_response_filter_firewall_t* instantiate_get_scrub_ip_details_200_response_filter_firewall(int include_optional);



get_scrub_ip_details_200_response_filter_firewall_t* instantiate_get_scrub_ip_details_200_response_filter_firewall(int include_optional) {
  get_scrub_ip_details_200_response_filter_firewall_t* get_scrub_ip_details_200_response_filter_firewall = NULL;
  if (include_optional) {
    get_scrub_ip_details_200_response_filter_firewall = get_scrub_ip_details_200_response_filter_firewall_create(
      list_createList(),
      list_createList(),
      56
    );
  } else {
    get_scrub_ip_details_200_response_filter_firewall = get_scrub_ip_details_200_response_filter_firewall_create(
      list_createList(),
      list_createList(),
      56
    );
  }

  return get_scrub_ip_details_200_response_filter_firewall;
}


#ifdef get_scrub_ip_details_200_response_filter_firewall_MAIN

void test_get_scrub_ip_details_200_response_filter_firewall(int include_optional) {
    get_scrub_ip_details_200_response_filter_firewall_t* get_scrub_ip_details_200_response_filter_firewall_1 = instantiate_get_scrub_ip_details_200_response_filter_firewall(include_optional);

	cJSON* jsonget_scrub_ip_details_200_response_filter_firewall_1 = get_scrub_ip_details_200_response_filter_firewall_convertToJSON(get_scrub_ip_details_200_response_filter_firewall_1);
	printf("get_scrub_ip_details_200_response_filter_firewall :\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_filter_firewall_1));
	get_scrub_ip_details_200_response_filter_firewall_t* get_scrub_ip_details_200_response_filter_firewall_2 = get_scrub_ip_details_200_response_filter_firewall_parseFromJSON(jsonget_scrub_ip_details_200_response_filter_firewall_1);
	cJSON* jsonget_scrub_ip_details_200_response_filter_firewall_2 = get_scrub_ip_details_200_response_filter_firewall_convertToJSON(get_scrub_ip_details_200_response_filter_firewall_2);
	printf("repeating get_scrub_ip_details_200_response_filter_firewall:\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_filter_firewall_2));
}

int main() {
  test_get_scrub_ip_details_200_response_filter_firewall(1);
  test_get_scrub_ip_details_200_response_filter_firewall(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_scrub_ip_details_200_response_filter_firewall_MAIN
#endif // get_scrub_ip_details_200_response_filter_firewall_TEST
