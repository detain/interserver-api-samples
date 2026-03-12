#ifndef deny_rule_record_TEST
#define deny_rule_record_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deny_rule_record_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deny_rule_record.h"
deny_rule_record_t* instantiate_deny_rule_record(int include_optional);



deny_rule_record_t* instantiate_deny_rule_record(int include_optional) {
  deny_rule_record_t* deny_rule_record = NULL;
  if (include_optional) {
    deny_rule_record = deny_rule_record_create(
      interserver_management_api_deny_rule_record_TYPE_"email",
      "domeinwo@server.guesshost.net",
      41124,
      "2022-03-22 19:16:35",
      "mb20682"
    );
  } else {
    deny_rule_record = deny_rule_record_create(
      interserver_management_api_deny_rule_record_TYPE_"email",
      "domeinwo@server.guesshost.net",
      41124,
      "2022-03-22 19:16:35",
      "mb20682"
    );
  }

  return deny_rule_record;
}


#ifdef deny_rule_record_MAIN

void test_deny_rule_record(int include_optional) {
    deny_rule_record_t* deny_rule_record_1 = instantiate_deny_rule_record(include_optional);

	cJSON* jsondeny_rule_record_1 = deny_rule_record_convertToJSON(deny_rule_record_1);
	printf("deny_rule_record :\n%s\n", cJSON_Print(jsondeny_rule_record_1));
	deny_rule_record_t* deny_rule_record_2 = deny_rule_record_parseFromJSON(jsondeny_rule_record_1);
	cJSON* jsondeny_rule_record_2 = deny_rule_record_convertToJSON(deny_rule_record_2);
	printf("repeating deny_rule_record:\n%s\n", cJSON_Print(jsondeny_rule_record_2));
}

int main() {
  test_deny_rule_record(1);
  test_deny_rule_record(0);

  printf("Hello world \n");
  return 0;
}

#endif // deny_rule_record_MAIN
#endif // deny_rule_record_TEST
