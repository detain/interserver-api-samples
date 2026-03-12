#ifndef place_buy_now_server_request_TEST
#define place_buy_now_server_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define place_buy_now_server_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/place_buy_now_server_request.h"
place_buy_now_server_request_t* instantiate_place_buy_now_server_request(int include_optional);



place_buy_now_server_request_t* instantiate_place_buy_now_server_request(int include_optional) {
  place_buy_now_server_request_t* place_buy_now_server_request = NULL;
  if (include_optional) {
    place_buy_now_server_request = place_buy_now_server_request_create(
      2343,
      "server.int.com",
      "uD1c!@cgD"
    );
  } else {
    place_buy_now_server_request = place_buy_now_server_request_create(
      2343,
      "server.int.com",
      "uD1c!@cgD"
    );
  }

  return place_buy_now_server_request;
}


#ifdef place_buy_now_server_request_MAIN

void test_place_buy_now_server_request(int include_optional) {
    place_buy_now_server_request_t* place_buy_now_server_request_1 = instantiate_place_buy_now_server_request(include_optional);

	cJSON* jsonplace_buy_now_server_request_1 = place_buy_now_server_request_convertToJSON(place_buy_now_server_request_1);
	printf("place_buy_now_server_request :\n%s\n", cJSON_Print(jsonplace_buy_now_server_request_1));
	place_buy_now_server_request_t* place_buy_now_server_request_2 = place_buy_now_server_request_parseFromJSON(jsonplace_buy_now_server_request_1);
	cJSON* jsonplace_buy_now_server_request_2 = place_buy_now_server_request_convertToJSON(place_buy_now_server_request_2);
	printf("repeating place_buy_now_server_request:\n%s\n", cJSON_Print(jsonplace_buy_now_server_request_2));
}

int main() {
  test_place_buy_now_server_request(1);
  test_place_buy_now_server_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // place_buy_now_server_request_MAIN
#endif // place_buy_now_server_request_TEST
