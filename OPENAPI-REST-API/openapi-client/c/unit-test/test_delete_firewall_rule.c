#ifndef delete_firewall_rule_TEST
#define delete_firewall_rule_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define delete_firewall_rule_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/delete_firewall_rule.h"
delete_firewall_rule_t* instantiate_delete_firewall_rule(int include_optional);



delete_firewall_rule_t* instantiate_delete_firewall_rule(int include_optional) {
  delete_firewall_rule_t* delete_firewall_rule = NULL;
  if (include_optional) {
    delete_firewall_rule = delete_firewall_rule_create(
      2045
    );
  } else {
    delete_firewall_rule = delete_firewall_rule_create(
      2045
    );
  }

  return delete_firewall_rule;
}


#ifdef delete_firewall_rule_MAIN

void test_delete_firewall_rule(int include_optional) {
    delete_firewall_rule_t* delete_firewall_rule_1 = instantiate_delete_firewall_rule(include_optional);

	cJSON* jsondelete_firewall_rule_1 = delete_firewall_rule_convertToJSON(delete_firewall_rule_1);
	printf("delete_firewall_rule :\n%s\n", cJSON_Print(jsondelete_firewall_rule_1));
	delete_firewall_rule_t* delete_firewall_rule_2 = delete_firewall_rule_parseFromJSON(jsondelete_firewall_rule_1);
	cJSON* jsondelete_firewall_rule_2 = delete_firewall_rule_convertToJSON(delete_firewall_rule_2);
	printf("repeating delete_firewall_rule:\n%s\n", cJSON_Print(jsondelete_firewall_rule_2));
}

int main() {
  test_delete_firewall_rule(1);
  test_delete_firewall_rule(0);

  printf("Hello world \n");
  return 0;
}

#endif // delete_firewall_rule_MAIN
#endif // delete_firewall_rule_TEST
