#ifndef create_filter_201_response_TEST
#define create_filter_201_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define create_filter_201_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/create_filter_201_response.h"
create_filter_201_response_t* instantiate_create_filter_201_response(int include_optional);



create_filter_201_response_t* instantiate_create_filter_201_response(int include_optional) {
  create_filter_201_response_t* create_filter_201_response = NULL;
  if (include_optional) {
    create_filter_201_response = create_filter_201_response_create(
      true,
      "New filter has been created."
    );
  } else {
    create_filter_201_response = create_filter_201_response_create(
      true,
      "New filter has been created."
    );
  }

  return create_filter_201_response;
}


#ifdef create_filter_201_response_MAIN

void test_create_filter_201_response(int include_optional) {
    create_filter_201_response_t* create_filter_201_response_1 = instantiate_create_filter_201_response(include_optional);

	cJSON* jsoncreate_filter_201_response_1 = create_filter_201_response_convertToJSON(create_filter_201_response_1);
	printf("create_filter_201_response :\n%s\n", cJSON_Print(jsoncreate_filter_201_response_1));
	create_filter_201_response_t* create_filter_201_response_2 = create_filter_201_response_parseFromJSON(jsoncreate_filter_201_response_1);
	cJSON* jsoncreate_filter_201_response_2 = create_filter_201_response_convertToJSON(create_filter_201_response_2);
	printf("repeating create_filter_201_response:\n%s\n", cJSON_Print(jsoncreate_filter_201_response_2));
}

int main() {
  test_create_filter_201_response(1);
  test_create_filter_201_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // create_filter_201_response_MAIN
#endif // create_filter_201_response_TEST
