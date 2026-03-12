#ifndef create_rule_500_response_TEST
#define create_rule_500_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define create_rule_500_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/create_rule_500_response.h"
create_rule_500_response_t* instantiate_create_rule_500_response(int include_optional);



create_rule_500_response_t* instantiate_create_rule_500_response(int include_optional) {
  create_rule_500_response_t* create_rule_500_response = NULL;
  if (include_optional) {
    create_rule_500_response = create_rule_500_response_create(
      false,
      "Unable to create new firewall Rule."
    );
  } else {
    create_rule_500_response = create_rule_500_response_create(
      false,
      "Unable to create new firewall Rule."
    );
  }

  return create_rule_500_response;
}


#ifdef create_rule_500_response_MAIN

void test_create_rule_500_response(int include_optional) {
    create_rule_500_response_t* create_rule_500_response_1 = instantiate_create_rule_500_response(include_optional);

	cJSON* jsoncreate_rule_500_response_1 = create_rule_500_response_convertToJSON(create_rule_500_response_1);
	printf("create_rule_500_response :\n%s\n", cJSON_Print(jsoncreate_rule_500_response_1));
	create_rule_500_response_t* create_rule_500_response_2 = create_rule_500_response_parseFromJSON(jsoncreate_rule_500_response_1);
	cJSON* jsoncreate_rule_500_response_2 = create_rule_500_response_convertToJSON(create_rule_500_response_2);
	printf("repeating create_rule_500_response:\n%s\n", cJSON_Print(jsoncreate_rule_500_response_2));
}

int main() {
  test_create_rule_500_response(1);
  test_create_rule_500_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // create_rule_500_response_MAIN
#endif // create_rule_500_response_TEST
