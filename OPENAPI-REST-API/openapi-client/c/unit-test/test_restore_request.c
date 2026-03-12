#ifndef restore_request_TEST
#define restore_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define restore_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/restore_request.h"
restore_request_t* instantiate_restore_request(int include_optional);



restore_request_t* instantiate_restore_request(int include_optional) {
  restore_request_t* restore_request = NULL;
  if (include_optional) {
    restore_request = restore_request_create(
      "0",
      "0"
    );
  } else {
    restore_request = restore_request_create(
      "0",
      "0"
    );
  }

  return restore_request;
}


#ifdef restore_request_MAIN

void test_restore_request(int include_optional) {
    restore_request_t* restore_request_1 = instantiate_restore_request(include_optional);

	cJSON* jsonrestore_request_1 = restore_request_convertToJSON(restore_request_1);
	printf("restore_request :\n%s\n", cJSON_Print(jsonrestore_request_1));
	restore_request_t* restore_request_2 = restore_request_parseFromJSON(jsonrestore_request_1);
	cJSON* jsonrestore_request_2 = restore_request_convertToJSON(restore_request_2);
	printf("repeating restore_request:\n%s\n", cJSON_Print(jsonrestore_request_2));
}

int main() {
  test_restore_request(1);
  test_restore_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // restore_request_MAIN
#endif // restore_request_TEST
