#ifndef quickservers_cancel_200_response_TEST
#define quickservers_cancel_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickservers_cancel_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickservers_cancel_200_response.h"
quickservers_cancel_200_response_t* instantiate_quickservers_cancel_200_response(int include_optional);



quickservers_cancel_200_response_t* instantiate_quickservers_cancel_200_response(int include_optional) {
  quickservers_cancel_200_response_t* quickservers_cancel_200_response = NULL;
  if (include_optional) {
    quickservers_cancel_200_response = quickservers_cancel_200_response_create(
      1,
      "0"
    );
  } else {
    quickservers_cancel_200_response = quickservers_cancel_200_response_create(
      1,
      "0"
    );
  }

  return quickservers_cancel_200_response;
}


#ifdef quickservers_cancel_200_response_MAIN

void test_quickservers_cancel_200_response(int include_optional) {
    quickservers_cancel_200_response_t* quickservers_cancel_200_response_1 = instantiate_quickservers_cancel_200_response(include_optional);

	cJSON* jsonquickservers_cancel_200_response_1 = quickservers_cancel_200_response_convertToJSON(quickservers_cancel_200_response_1);
	printf("quickservers_cancel_200_response :\n%s\n", cJSON_Print(jsonquickservers_cancel_200_response_1));
	quickservers_cancel_200_response_t* quickservers_cancel_200_response_2 = quickservers_cancel_200_response_parseFromJSON(jsonquickservers_cancel_200_response_1);
	cJSON* jsonquickservers_cancel_200_response_2 = quickservers_cancel_200_response_convertToJSON(quickservers_cancel_200_response_2);
	printf("repeating quickservers_cancel_200_response:\n%s\n", cJSON_Print(jsonquickservers_cancel_200_response_2));
}

int main() {
  test_quickservers_cancel_200_response(1);
  test_quickservers_cancel_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickservers_cancel_200_response_MAIN
#endif // quickservers_cancel_200_response_TEST
