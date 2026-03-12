#ifndef create_geo_rule_400_response_TEST
#define create_geo_rule_400_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define create_geo_rule_400_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/create_geo_rule_400_response.h"
create_geo_rule_400_response_t* instantiate_create_geo_rule_400_response(int include_optional);



create_geo_rule_400_response_t* instantiate_create_geo_rule_400_response(int include_optional) {
  create_geo_rule_400_response_t* create_geo_rule_400_response = NULL;
  if (include_optional) {
    create_geo_rule_400_response = create_geo_rule_400_response_create(
      false,
      "Bad Request",
      list_createList()
    );
  } else {
    create_geo_rule_400_response = create_geo_rule_400_response_create(
      false,
      "Bad Request",
      list_createList()
    );
  }

  return create_geo_rule_400_response;
}


#ifdef create_geo_rule_400_response_MAIN

void test_create_geo_rule_400_response(int include_optional) {
    create_geo_rule_400_response_t* create_geo_rule_400_response_1 = instantiate_create_geo_rule_400_response(include_optional);

	cJSON* jsoncreate_geo_rule_400_response_1 = create_geo_rule_400_response_convertToJSON(create_geo_rule_400_response_1);
	printf("create_geo_rule_400_response :\n%s\n", cJSON_Print(jsoncreate_geo_rule_400_response_1));
	create_geo_rule_400_response_t* create_geo_rule_400_response_2 = create_geo_rule_400_response_parseFromJSON(jsoncreate_geo_rule_400_response_1);
	cJSON* jsoncreate_geo_rule_400_response_2 = create_geo_rule_400_response_convertToJSON(create_geo_rule_400_response_2);
	printf("repeating create_geo_rule_400_response:\n%s\n", cJSON_Print(jsoncreate_geo_rule_400_response_2));
}

int main() {
  test_create_geo_rule_400_response(1);
  test_create_geo_rule_400_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // create_geo_rule_400_response_MAIN
#endif // create_geo_rule_400_response_TEST
