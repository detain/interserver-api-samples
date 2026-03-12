#ifndef place_scrub_order_201_response_TEST
#define place_scrub_order_201_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define place_scrub_order_201_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/place_scrub_order_201_response.h"
place_scrub_order_201_response_t* instantiate_place_scrub_order_201_response(int include_optional);

#include "test_place_scrub_order_201_response_order_details.c"


place_scrub_order_201_response_t* instantiate_place_scrub_order_201_response(int include_optional) {
  place_scrub_order_201_response_t* place_scrub_order_201_response = NULL;
  if (include_optional) {
    place_scrub_order_201_response = place_scrub_order_201_response_create(
      true,
      "ScrubIp order is placed.",
       // false, not to have infinite recursion
      instantiate_place_scrub_order_201_response_order_details(0)
    );
  } else {
    place_scrub_order_201_response = place_scrub_order_201_response_create(
      true,
      "ScrubIp order is placed.",
      NULL
    );
  }

  return place_scrub_order_201_response;
}


#ifdef place_scrub_order_201_response_MAIN

void test_place_scrub_order_201_response(int include_optional) {
    place_scrub_order_201_response_t* place_scrub_order_201_response_1 = instantiate_place_scrub_order_201_response(include_optional);

	cJSON* jsonplace_scrub_order_201_response_1 = place_scrub_order_201_response_convertToJSON(place_scrub_order_201_response_1);
	printf("place_scrub_order_201_response :\n%s\n", cJSON_Print(jsonplace_scrub_order_201_response_1));
	place_scrub_order_201_response_t* place_scrub_order_201_response_2 = place_scrub_order_201_response_parseFromJSON(jsonplace_scrub_order_201_response_1);
	cJSON* jsonplace_scrub_order_201_response_2 = place_scrub_order_201_response_convertToJSON(place_scrub_order_201_response_2);
	printf("repeating place_scrub_order_201_response:\n%s\n", cJSON_Print(jsonplace_scrub_order_201_response_2));
}

int main() {
  test_place_scrub_order_201_response(1);
  test_place_scrub_order_201_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // place_scrub_order_201_response_MAIN
#endif // place_scrub_order_201_response_TEST
