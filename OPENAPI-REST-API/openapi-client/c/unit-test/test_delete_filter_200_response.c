#ifndef delete_filter_200_response_TEST
#define delete_filter_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define delete_filter_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/delete_filter_200_response.h"
delete_filter_200_response_t* instantiate_delete_filter_200_response(int include_optional);



delete_filter_200_response_t* instantiate_delete_filter_200_response(int include_optional) {
  delete_filter_200_response_t* delete_filter_200_response = NULL;
  if (include_optional) {
    delete_filter_200_response = delete_filter_200_response_create(
      true,
      "Filter is deleted."
    );
  } else {
    delete_filter_200_response = delete_filter_200_response_create(
      true,
      "Filter is deleted."
    );
  }

  return delete_filter_200_response;
}


#ifdef delete_filter_200_response_MAIN

void test_delete_filter_200_response(int include_optional) {
    delete_filter_200_response_t* delete_filter_200_response_1 = instantiate_delete_filter_200_response(include_optional);

	cJSON* jsondelete_filter_200_response_1 = delete_filter_200_response_convertToJSON(delete_filter_200_response_1);
	printf("delete_filter_200_response :\n%s\n", cJSON_Print(jsondelete_filter_200_response_1));
	delete_filter_200_response_t* delete_filter_200_response_2 = delete_filter_200_response_parseFromJSON(jsondelete_filter_200_response_1);
	cJSON* jsondelete_filter_200_response_2 = delete_filter_200_response_convertToJSON(delete_filter_200_response_2);
	printf("repeating delete_filter_200_response:\n%s\n", cJSON_Print(jsondelete_filter_200_response_2));
}

int main() {
  test_delete_filter_200_response(1);
  test_delete_filter_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // delete_filter_200_response_MAIN
#endif // delete_filter_200_response_TEST
