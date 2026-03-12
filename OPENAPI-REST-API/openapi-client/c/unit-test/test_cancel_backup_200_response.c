#ifndef cancel_backup_200_response_TEST
#define cancel_backup_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cancel_backup_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cancel_backup_200_response.h"
cancel_backup_200_response_t* instantiate_cancel_backup_200_response(int include_optional);



cancel_backup_200_response_t* instantiate_cancel_backup_200_response(int include_optional) {
  cancel_backup_200_response_t* cancel_backup_200_response = NULL;
  if (include_optional) {
    cancel_backup_200_response = cancel_backup_200_response_create(
      1,
      "0"
    );
  } else {
    cancel_backup_200_response = cancel_backup_200_response_create(
      1,
      "0"
    );
  }

  return cancel_backup_200_response;
}


#ifdef cancel_backup_200_response_MAIN

void test_cancel_backup_200_response(int include_optional) {
    cancel_backup_200_response_t* cancel_backup_200_response_1 = instantiate_cancel_backup_200_response(include_optional);

	cJSON* jsoncancel_backup_200_response_1 = cancel_backup_200_response_convertToJSON(cancel_backup_200_response_1);
	printf("cancel_backup_200_response :\n%s\n", cJSON_Print(jsoncancel_backup_200_response_1));
	cancel_backup_200_response_t* cancel_backup_200_response_2 = cancel_backup_200_response_parseFromJSON(jsoncancel_backup_200_response_1);
	cJSON* jsoncancel_backup_200_response_2 = cancel_backup_200_response_convertToJSON(cancel_backup_200_response_2);
	printf("repeating cancel_backup_200_response:\n%s\n", cJSON_Print(jsoncancel_backup_200_response_2));
}

int main() {
  test_cancel_backup_200_response(1);
  test_cancel_backup_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // cancel_backup_200_response_MAIN
#endif // cancel_backup_200_response_TEST
