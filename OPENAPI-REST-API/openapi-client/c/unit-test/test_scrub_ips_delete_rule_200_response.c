#ifndef scrub_ips_delete_rule_200_response_TEST
#define scrub_ips_delete_rule_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scrub_ips_delete_rule_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scrub_ips_delete_rule_200_response.h"
scrub_ips_delete_rule_200_response_t* instantiate_scrub_ips_delete_rule_200_response(int include_optional);



scrub_ips_delete_rule_200_response_t* instantiate_scrub_ips_delete_rule_200_response(int include_optional) {
  scrub_ips_delete_rule_200_response_t* scrub_ips_delete_rule_200_response = NULL;
  if (include_optional) {
    scrub_ips_delete_rule_200_response = scrub_ips_delete_rule_200_response_create(
      true,
      "Firewall Rule has been deleted."
    );
  } else {
    scrub_ips_delete_rule_200_response = scrub_ips_delete_rule_200_response_create(
      true,
      "Firewall Rule has been deleted."
    );
  }

  return scrub_ips_delete_rule_200_response;
}


#ifdef scrub_ips_delete_rule_200_response_MAIN

void test_scrub_ips_delete_rule_200_response(int include_optional) {
    scrub_ips_delete_rule_200_response_t* scrub_ips_delete_rule_200_response_1 = instantiate_scrub_ips_delete_rule_200_response(include_optional);

	cJSON* jsonscrub_ips_delete_rule_200_response_1 = scrub_ips_delete_rule_200_response_convertToJSON(scrub_ips_delete_rule_200_response_1);
	printf("scrub_ips_delete_rule_200_response :\n%s\n", cJSON_Print(jsonscrub_ips_delete_rule_200_response_1));
	scrub_ips_delete_rule_200_response_t* scrub_ips_delete_rule_200_response_2 = scrub_ips_delete_rule_200_response_parseFromJSON(jsonscrub_ips_delete_rule_200_response_1);
	cJSON* jsonscrub_ips_delete_rule_200_response_2 = scrub_ips_delete_rule_200_response_convertToJSON(scrub_ips_delete_rule_200_response_2);
	printf("repeating scrub_ips_delete_rule_200_response:\n%s\n", cJSON_Print(jsonscrub_ips_delete_rule_200_response_2));
}

int main() {
  test_scrub_ips_delete_rule_200_response(1);
  test_scrub_ips_delete_rule_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // scrub_ips_delete_rule_200_response_MAIN
#endif // scrub_ips_delete_rule_200_response_TEST
