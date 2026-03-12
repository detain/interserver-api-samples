#ifndef place_scrub_order_201_response_order_details_cj_params_TEST
#define place_scrub_order_201_response_order_details_cj_params_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define place_scrub_order_201_response_order_details_cj_params_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/place_scrub_order_201_response_order_details_cj_params.h"
place_scrub_order_201_response_order_details_cj_params_t* instantiate_place_scrub_order_201_response_order_details_cj_params(int include_optional);



place_scrub_order_201_response_order_details_cj_params_t* instantiate_place_scrub_order_201_response_order_details_cj_params(int include_optional) {
  place_scrub_order_201_response_order_details_cj_params_t* place_scrub_order_201_response_order_details_cj_params = NULL;
  if (include_optional) {
    place_scrub_order_201_response_order_details_cj_params = place_scrub_order_201_response_order_details_cj_params_create(
      1684,
      2314,
      "scrub_ips12424",
      2242343242,
      "scrub_ips904",
      5,
      1,
      "USD"
    );
  } else {
    place_scrub_order_201_response_order_details_cj_params = place_scrub_order_201_response_order_details_cj_params_create(
      1684,
      2314,
      "scrub_ips12424",
      2242343242,
      "scrub_ips904",
      5,
      1,
      "USD"
    );
  }

  return place_scrub_order_201_response_order_details_cj_params;
}


#ifdef place_scrub_order_201_response_order_details_cj_params_MAIN

void test_place_scrub_order_201_response_order_details_cj_params(int include_optional) {
    place_scrub_order_201_response_order_details_cj_params_t* place_scrub_order_201_response_order_details_cj_params_1 = instantiate_place_scrub_order_201_response_order_details_cj_params(include_optional);

	cJSON* jsonplace_scrub_order_201_response_order_details_cj_params_1 = place_scrub_order_201_response_order_details_cj_params_convertToJSON(place_scrub_order_201_response_order_details_cj_params_1);
	printf("place_scrub_order_201_response_order_details_cj_params :\n%s\n", cJSON_Print(jsonplace_scrub_order_201_response_order_details_cj_params_1));
	place_scrub_order_201_response_order_details_cj_params_t* place_scrub_order_201_response_order_details_cj_params_2 = place_scrub_order_201_response_order_details_cj_params_parseFromJSON(jsonplace_scrub_order_201_response_order_details_cj_params_1);
	cJSON* jsonplace_scrub_order_201_response_order_details_cj_params_2 = place_scrub_order_201_response_order_details_cj_params_convertToJSON(place_scrub_order_201_response_order_details_cj_params_2);
	printf("repeating place_scrub_order_201_response_order_details_cj_params:\n%s\n", cJSON_Print(jsonplace_scrub_order_201_response_order_details_cj_params_2));
}

int main() {
  test_place_scrub_order_201_response_order_details_cj_params(1);
  test_place_scrub_order_201_response_order_details_cj_params(0);

  printf("Hello world \n");
  return 0;
}

#endif // place_scrub_order_201_response_order_details_cj_params_MAIN
#endif // place_scrub_order_201_response_order_details_cj_params_TEST
