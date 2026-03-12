#ifndef patch_oauth_two_factor_200_response_TEST
#define patch_oauth_two_factor_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define patch_oauth_two_factor_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/patch_oauth_two_factor_200_response.h"
patch_oauth_two_factor_200_response_t* instantiate_patch_oauth_two_factor_200_response(int include_optional);



patch_oauth_two_factor_200_response_t* instantiate_patch_oauth_two_factor_200_response(int include_optional) {
  patch_oauth_two_factor_200_response_t* patch_oauth_two_factor_200_response = NULL;
  if (include_optional) {
    patch_oauth_two_factor_200_response = patch_oauth_two_factor_200_response_create(
      1
    );
  } else {
    patch_oauth_two_factor_200_response = patch_oauth_two_factor_200_response_create(
      1
    );
  }

  return patch_oauth_two_factor_200_response;
}


#ifdef patch_oauth_two_factor_200_response_MAIN

void test_patch_oauth_two_factor_200_response(int include_optional) {
    patch_oauth_two_factor_200_response_t* patch_oauth_two_factor_200_response_1 = instantiate_patch_oauth_two_factor_200_response(include_optional);

	cJSON* jsonpatch_oauth_two_factor_200_response_1 = patch_oauth_two_factor_200_response_convertToJSON(patch_oauth_two_factor_200_response_1);
	printf("patch_oauth_two_factor_200_response :\n%s\n", cJSON_Print(jsonpatch_oauth_two_factor_200_response_1));
	patch_oauth_two_factor_200_response_t* patch_oauth_two_factor_200_response_2 = patch_oauth_two_factor_200_response_parseFromJSON(jsonpatch_oauth_two_factor_200_response_1);
	cJSON* jsonpatch_oauth_two_factor_200_response_2 = patch_oauth_two_factor_200_response_convertToJSON(patch_oauth_two_factor_200_response_2);
	printf("repeating patch_oauth_two_factor_200_response:\n%s\n", cJSON_Print(jsonpatch_oauth_two_factor_200_response_2));
}

int main() {
  test_patch_oauth_two_factor_200_response(1);
  test_patch_oauth_two_factor_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // patch_oauth_two_factor_200_response_MAIN
#endif // patch_oauth_two_factor_200_response_TEST
