#ifndef place_scrub_order_201_response_order_details_TEST
#define place_scrub_order_201_response_order_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define place_scrub_order_201_response_order_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/place_scrub_order_201_response_order_details.h"
place_scrub_order_201_response_order_details_t* instantiate_place_scrub_order_201_response_order_details(int include_optional);

#include "test_place_scrub_order_201_response_order_details_cj_params.c"


place_scrub_order_201_response_order_details_t* instantiate_place_scrub_order_201_response_order_details(int include_optional) {
  place_scrub_order_201_response_order_details_t* place_scrub_order_201_response_order_details = NULL;
  if (include_optional) {
    place_scrub_order_201_response_order_details = place_scrub_order_201_response_order_details_create(
      5,
      12346,
      2746273,
      "Scrub + Current Ip",
       // false, not to have infinite recursion
      instantiate_place_scrub_order_201_response_order_details_cj_params(0)
    );
  } else {
    place_scrub_order_201_response_order_details = place_scrub_order_201_response_order_details_create(
      5,
      12346,
      2746273,
      "Scrub + Current Ip",
      NULL
    );
  }

  return place_scrub_order_201_response_order_details;
}


#ifdef place_scrub_order_201_response_order_details_MAIN

void test_place_scrub_order_201_response_order_details(int include_optional) {
    place_scrub_order_201_response_order_details_t* place_scrub_order_201_response_order_details_1 = instantiate_place_scrub_order_201_response_order_details(include_optional);

	cJSON* jsonplace_scrub_order_201_response_order_details_1 = place_scrub_order_201_response_order_details_convertToJSON(place_scrub_order_201_response_order_details_1);
	printf("place_scrub_order_201_response_order_details :\n%s\n", cJSON_Print(jsonplace_scrub_order_201_response_order_details_1));
	place_scrub_order_201_response_order_details_t* place_scrub_order_201_response_order_details_2 = place_scrub_order_201_response_order_details_parseFromJSON(jsonplace_scrub_order_201_response_order_details_1);
	cJSON* jsonplace_scrub_order_201_response_order_details_2 = place_scrub_order_201_response_order_details_convertToJSON(place_scrub_order_201_response_order_details_2);
	printf("repeating place_scrub_order_201_response_order_details:\n%s\n", cJSON_Print(jsonplace_scrub_order_201_response_order_details_2));
}

int main() {
  test_place_scrub_order_201_response_order_details(1);
  test_place_scrub_order_201_response_order_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // place_scrub_order_201_response_order_details_MAIN
#endif // place_scrub_order_201_response_order_details_TEST
