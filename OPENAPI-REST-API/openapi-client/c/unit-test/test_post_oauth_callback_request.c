#ifndef post_oauth_callback_request_TEST
#define post_oauth_callback_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define post_oauth_callback_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/post_oauth_callback_request.h"
post_oauth_callback_request_t* instantiate_post_oauth_callback_request(int include_optional);



post_oauth_callback_request_t* instantiate_post_oauth_callback_request(int include_optional) {
  post_oauth_callback_request_t* post_oauth_callback_request = NULL;
  if (include_optional) {
    post_oauth_callback_request = post_oauth_callback_request_create(
      "0"
    );
  } else {
    post_oauth_callback_request = post_oauth_callback_request_create(
      "0"
    );
  }

  return post_oauth_callback_request;
}


#ifdef post_oauth_callback_request_MAIN

void test_post_oauth_callback_request(int include_optional) {
    post_oauth_callback_request_t* post_oauth_callback_request_1 = instantiate_post_oauth_callback_request(include_optional);

	cJSON* jsonpost_oauth_callback_request_1 = post_oauth_callback_request_convertToJSON(post_oauth_callback_request_1);
	printf("post_oauth_callback_request :\n%s\n", cJSON_Print(jsonpost_oauth_callback_request_1));
	post_oauth_callback_request_t* post_oauth_callback_request_2 = post_oauth_callback_request_parseFromJSON(jsonpost_oauth_callback_request_1);
	cJSON* jsonpost_oauth_callback_request_2 = post_oauth_callback_request_convertToJSON(post_oauth_callback_request_2);
	printf("repeating post_oauth_callback_request:\n%s\n", cJSON_Print(jsonpost_oauth_callback_request_2));
}

int main() {
  test_post_oauth_callback_request(1);
  test_post_oauth_callback_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // post_oauth_callback_request_MAIN
#endif // post_oauth_callback_request_TEST
