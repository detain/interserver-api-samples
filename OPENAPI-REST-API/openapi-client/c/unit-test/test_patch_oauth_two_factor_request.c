#ifndef patch_oauth_two_factor_request_TEST
#define patch_oauth_two_factor_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define patch_oauth_two_factor_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/patch_oauth_two_factor_request.h"
patch_oauth_two_factor_request_t* instantiate_patch_oauth_two_factor_request(int include_optional);



patch_oauth_two_factor_request_t* instantiate_patch_oauth_two_factor_request(int include_optional) {
  patch_oauth_two_factor_request_t* patch_oauth_two_factor_request = NULL;
  if (include_optional) {
    patch_oauth_two_factor_request = patch_oauth_two_factor_request_create(
      56,
      "0"
    );
  } else {
    patch_oauth_two_factor_request = patch_oauth_two_factor_request_create(
      56,
      "0"
    );
  }

  return patch_oauth_two_factor_request;
}


#ifdef patch_oauth_two_factor_request_MAIN

void test_patch_oauth_two_factor_request(int include_optional) {
    patch_oauth_two_factor_request_t* patch_oauth_two_factor_request_1 = instantiate_patch_oauth_two_factor_request(include_optional);

	cJSON* jsonpatch_oauth_two_factor_request_1 = patch_oauth_two_factor_request_convertToJSON(patch_oauth_two_factor_request_1);
	printf("patch_oauth_two_factor_request :\n%s\n", cJSON_Print(jsonpatch_oauth_two_factor_request_1));
	patch_oauth_two_factor_request_t* patch_oauth_two_factor_request_2 = patch_oauth_two_factor_request_parseFromJSON(jsonpatch_oauth_two_factor_request_1);
	cJSON* jsonpatch_oauth_two_factor_request_2 = patch_oauth_two_factor_request_convertToJSON(patch_oauth_two_factor_request_2);
	printf("repeating patch_oauth_two_factor_request:\n%s\n", cJSON_Print(jsonpatch_oauth_two_factor_request_2));
}

int main() {
  test_patch_oauth_two_factor_request(1);
  test_patch_oauth_two_factor_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // patch_oauth_two_factor_request_MAIN
#endif // patch_oauth_two_factor_request_TEST
