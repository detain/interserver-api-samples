#ifndef post_website_buy_ip_request_TEST
#define post_website_buy_ip_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define post_website_buy_ip_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/post_website_buy_ip_request.h"
post_website_buy_ip_request_t* instantiate_post_website_buy_ip_request(int include_optional);



post_website_buy_ip_request_t* instantiate_post_website_buy_ip_request(int include_optional) {
  post_website_buy_ip_request_t* post_website_buy_ip_request = NULL;
  if (include_optional) {
    post_website_buy_ip_request = post_website_buy_ip_request_create(
      list_createList()
    );
  } else {
    post_website_buy_ip_request = post_website_buy_ip_request_create(
      list_createList()
    );
  }

  return post_website_buy_ip_request;
}


#ifdef post_website_buy_ip_request_MAIN

void test_post_website_buy_ip_request(int include_optional) {
    post_website_buy_ip_request_t* post_website_buy_ip_request_1 = instantiate_post_website_buy_ip_request(include_optional);

	cJSON* jsonpost_website_buy_ip_request_1 = post_website_buy_ip_request_convertToJSON(post_website_buy_ip_request_1);
	printf("post_website_buy_ip_request :\n%s\n", cJSON_Print(jsonpost_website_buy_ip_request_1));
	post_website_buy_ip_request_t* post_website_buy_ip_request_2 = post_website_buy_ip_request_parseFromJSON(jsonpost_website_buy_ip_request_1);
	cJSON* jsonpost_website_buy_ip_request_2 = post_website_buy_ip_request_convertToJSON(post_website_buy_ip_request_2);
	printf("repeating post_website_buy_ip_request:\n%s\n", cJSON_Print(jsonpost_website_buy_ip_request_2));
}

int main() {
  test_post_website_buy_ip_request(1);
  test_post_website_buy_ip_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // post_website_buy_ip_request_MAIN
#endif // post_website_buy_ip_request_TEST
