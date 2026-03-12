#ifndef template_request_TEST
#define template_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define template_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/template_request.h"
template_request_t* instantiate_template_request(int include_optional);



template_request_t* instantiate_template_request(int include_optional) {
  template_request_t* template_request = NULL;
  if (include_optional) {
    template_request = template_request_create(
      "ubuntu24",
      "0",
      "myUserPassword"
    );
  } else {
    template_request = template_request_create(
      "ubuntu24",
      "0",
      "myUserPassword"
    );
  }

  return template_request;
}


#ifdef template_request_MAIN

void test_template_request(int include_optional) {
    template_request_t* template_request_1 = instantiate_template_request(include_optional);

	cJSON* jsontemplate_request_1 = template_request_convertToJSON(template_request_1);
	printf("template_request :\n%s\n", cJSON_Print(jsontemplate_request_1));
	template_request_t* template_request_2 = template_request_parseFromJSON(jsontemplate_request_1);
	cJSON* jsontemplate_request_2 = template_request_convertToJSON(template_request_2);
	printf("repeating template_request:\n%s\n", cJSON_Print(jsontemplate_request_2));
}

int main() {
  test_template_request(1);
  test_template_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // template_request_MAIN
#endif // template_request_TEST
