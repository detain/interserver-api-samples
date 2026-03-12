#ifndef deny_rule_new_TEST
#define deny_rule_new_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deny_rule_new_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deny_rule_new.h"
deny_rule_new_t* instantiate_deny_rule_new(int include_optional);



deny_rule_new_t* instantiate_deny_rule_new(int include_optional) {
  deny_rule_new_t* deny_rule_new = NULL;
  if (include_optional) {
    deny_rule_new = deny_rule_new_create(
      interserver_management_api_deny_rule_new_TYPE_"email",
      "domeinwo@server.guesshost.net",
      "mb20682"
    );
  } else {
    deny_rule_new = deny_rule_new_create(
      interserver_management_api_deny_rule_new_TYPE_"email",
      "domeinwo@server.guesshost.net",
      "mb20682"
    );
  }

  return deny_rule_new;
}


#ifdef deny_rule_new_MAIN

void test_deny_rule_new(int include_optional) {
    deny_rule_new_t* deny_rule_new_1 = instantiate_deny_rule_new(include_optional);

	cJSON* jsondeny_rule_new_1 = deny_rule_new_convertToJSON(deny_rule_new_1);
	printf("deny_rule_new :\n%s\n", cJSON_Print(jsondeny_rule_new_1));
	deny_rule_new_t* deny_rule_new_2 = deny_rule_new_parseFromJSON(jsondeny_rule_new_1);
	cJSON* jsondeny_rule_new_2 = deny_rule_new_convertToJSON(deny_rule_new_2);
	printf("repeating deny_rule_new:\n%s\n", cJSON_Print(jsondeny_rule_new_2));
}

int main() {
  test_deny_rule_new(1);
  test_deny_rule_new(0);

  printf("Hello world \n");
  return 0;
}

#endif // deny_rule_new_MAIN
#endif // deny_rule_new_TEST
