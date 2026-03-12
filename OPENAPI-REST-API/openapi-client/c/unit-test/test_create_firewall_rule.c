#ifndef create_firewall_rule_TEST
#define create_firewall_rule_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define create_firewall_rule_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/create_firewall_rule.h"
create_firewall_rule_t* instantiate_create_firewall_rule(int include_optional);



create_firewall_rule_t* instantiate_create_firewall_rule(int include_optional) {
  create_firewall_rule_t* create_firewall_rule = NULL;
  if (include_optional) {
    create_firewall_rule = create_firewall_rule_create(
      interserver_management_api_create_firewall_rule_PROTOCOLID_1,
      interserver_management_api_create_firewall_rule_XDPACTION_1,
      22,
      "0",
      1302
    );
  } else {
    create_firewall_rule = create_firewall_rule_create(
      interserver_management_api_create_firewall_rule_PROTOCOLID_1,
      interserver_management_api_create_firewall_rule_XDPACTION_1,
      22,
      "0",
      1302
    );
  }

  return create_firewall_rule;
}


#ifdef create_firewall_rule_MAIN

void test_create_firewall_rule(int include_optional) {
    create_firewall_rule_t* create_firewall_rule_1 = instantiate_create_firewall_rule(include_optional);

	cJSON* jsoncreate_firewall_rule_1 = create_firewall_rule_convertToJSON(create_firewall_rule_1);
	printf("create_firewall_rule :\n%s\n", cJSON_Print(jsoncreate_firewall_rule_1));
	create_firewall_rule_t* create_firewall_rule_2 = create_firewall_rule_parseFromJSON(jsoncreate_firewall_rule_1);
	cJSON* jsoncreate_firewall_rule_2 = create_firewall_rule_convertToJSON(create_firewall_rule_2);
	printf("repeating create_firewall_rule:\n%s\n", cJSON_Print(jsoncreate_firewall_rule_2));
}

int main() {
  test_create_firewall_rule(1);
  test_create_firewall_rule(0);

  printf("Hello world \n");
  return 0;
}

#endif // create_firewall_rule_MAIN
#endif // create_firewall_rule_TEST
