#ifndef get_scrub_ip_details_200_response_service_info_TEST
#define get_scrub_ip_details_200_response_service_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_scrub_ip_details_200_response_service_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_scrub_ip_details_200_response_service_info.h"
get_scrub_ip_details_200_response_service_info_t* instantiate_get_scrub_ip_details_200_response_service_info(int include_optional);



get_scrub_ip_details_200_response_service_info_t* instantiate_get_scrub_ip_details_200_response_service_info(int include_optional) {
  get_scrub_ip_details_200_response_service_info_t* get_scrub_ip_details_200_response_service_info = NULL;
  if (include_optional) {
    get_scrub_ip_details_200_response_service_info = get_scrub_ip_details_200_response_service_info_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      interserver_management_api_get_scrub_ip_details_200_response_service_info_SCRUBIPSTATUS_active,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    get_scrub_ip_details_200_response_service_info = get_scrub_ip_details_200_response_service_info_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      interserver_management_api_get_scrub_ip_details_200_response_service_info_SCRUBIPSTATUS_active,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return get_scrub_ip_details_200_response_service_info;
}


#ifdef get_scrub_ip_details_200_response_service_info_MAIN

void test_get_scrub_ip_details_200_response_service_info(int include_optional) {
    get_scrub_ip_details_200_response_service_info_t* get_scrub_ip_details_200_response_service_info_1 = instantiate_get_scrub_ip_details_200_response_service_info(include_optional);

	cJSON* jsonget_scrub_ip_details_200_response_service_info_1 = get_scrub_ip_details_200_response_service_info_convertToJSON(get_scrub_ip_details_200_response_service_info_1);
	printf("get_scrub_ip_details_200_response_service_info :\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_service_info_1));
	get_scrub_ip_details_200_response_service_info_t* get_scrub_ip_details_200_response_service_info_2 = get_scrub_ip_details_200_response_service_info_parseFromJSON(jsonget_scrub_ip_details_200_response_service_info_1);
	cJSON* jsonget_scrub_ip_details_200_response_service_info_2 = get_scrub_ip_details_200_response_service_info_convertToJSON(get_scrub_ip_details_200_response_service_info_2);
	printf("repeating get_scrub_ip_details_200_response_service_info:\n%s\n", cJSON_Print(jsonget_scrub_ip_details_200_response_service_info_2));
}

int main() {
  test_get_scrub_ip_details_200_response_service_info(1);
  test_get_scrub_ip_details_200_response_service_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_scrub_ip_details_200_response_service_info_MAIN
#endif // get_scrub_ip_details_200_response_service_info_TEST
