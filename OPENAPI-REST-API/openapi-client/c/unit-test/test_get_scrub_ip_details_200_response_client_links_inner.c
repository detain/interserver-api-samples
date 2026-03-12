#ifndef get_scrub_ip_details_200_response_client_links_inner_TEST
#define get_scrub_ip_details_200_response_client_links_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_scrub_ip_details_200_response_client_links_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_scrub_ip_details_200_response_client_links_inner.h"
get_scrub_ip_details_200_response_client_links_inner_t* instantiate_get_scrub_ip_details_200_response_client_links_inner(int include_optional);



get_scrub_ip_details_200_response_client_links_inner_t* instantiate_get_scrub_ip_details_200_response_client_links_inner(int include_optional) {
  get_scrub_ip_details_200_response_client_links_inner_t* get_scrub_ip_details_200_response_client_links_inner = NULL;
  if (include_optional) {
    get_scrub_ip_details_200_response_client_links_inner = get_scrub_ip_details_200_response_client_links_inner_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    get_scrub_ip_details_200_response_client_links_inner = get_scrub_ip_details_200_response_client_links_inner_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return get_scrub_ip_details_200_response_client_links_inner;
}


#ifdef get_scrub_ip_details_200_response_client_links_inner_MAIN

void test_get_scrub_ip_details_200_response_client_links_inner(int include_optional) {
    get_scrub_ip_details_200_response_client_links_inner_t* get_scrub_ip_details_200_response_client_links_inner_1 = instantiate_get_scrub_ip_details_200_response_client_links_inner(include_optional);

	cJSON* jsonget_scrub_ip_details_200_response_client_links_inner_1 = get_scrub_ip_details_200_response_client_links_inner_convertToJSON(get_scrub_ip_details_200_response_client_links_inner_1);
	printf("get_scrub_ip_details_200_response_client_links_inner :\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_client_links_inner_1));
	get_scrub_ip_details_200_response_client_links_inner_t* get_scrub_ip_details_200_response_client_links_inner_2 = get_scrub_ip_details_200_response_client_links_inner_parseFromJSON(jsonget_scrub_ip_details_200_response_client_links_inner_1);
	cJSON* jsonget_scrub_ip_details_200_response_client_links_inner_2 = get_scrub_ip_details_200_response_client_links_inner_convertToJSON(get_scrub_ip_details_200_response_client_links_inner_2);
	printf("repeating get_scrub_ip_details_200_response_client_links_inner:\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_client_links_inner_2));
}

int main() {
  test_get_scrub_ip_details_200_response_client_links_inner(1);
  test_get_scrub_ip_details_200_response_client_links_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_scrub_ip_details_200_response_client_links_inner_MAIN
#endif // get_scrub_ip_details_200_response_client_links_inner_TEST
