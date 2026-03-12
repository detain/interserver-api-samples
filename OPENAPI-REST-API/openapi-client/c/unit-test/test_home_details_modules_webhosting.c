#ifndef home_details_modules_webhosting_TEST
#define home_details_modules_webhosting_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_details_modules_webhosting_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_details_modules_webhosting.h"
home_details_modules_webhosting_t* instantiate_home_details_modules_webhosting(int include_optional);



home_details_modules_webhosting_t* instantiate_home_details_modules_webhosting(int include_optional) {
  home_details_modules_webhosting_t* home_details_modules_webhosting = NULL;
  if (include_optional) {
    home_details_modules_webhosting = home_details_modules_webhosting_create(
      "window-maximize",
      "view_website",
      "Web Hosting",
      "order_website",
      "view_websites_list"
    );
  } else {
    home_details_modules_webhosting = home_details_modules_webhosting_create(
      "window-maximize",
      "view_website",
      "Web Hosting",
      "order_website",
      "view_websites_list"
    );
  }

  return home_details_modules_webhosting;
}


#ifdef home_details_modules_webhosting_MAIN

void test_home_details_modules_webhosting(int include_optional) {
    home_details_modules_webhosting_t* home_details_modules_webhosting_1 = instantiate_home_details_modules_webhosting(include_optional);

	cJSON* jsonhome_details_modules_webhosting_1 = home_details_modules_webhosting_convertToJSON(home_details_modules_webhosting_1);
	printf("home_details_modules_webhosting :\n%s\n", cJSON_Print(jsonhome_details_modules_webhosting_1));
	home_details_modules_webhosting_t* home_details_modules_webhosting_2 = home_details_modules_webhosting_parseFromJSON(jsonhome_details_modules_webhosting_1);
	cJSON* jsonhome_details_modules_webhosting_2 = home_details_modules_webhosting_convertToJSON(home_details_modules_webhosting_2);
	printf("repeating home_details_modules_webhosting:\n%s\n", cJSON_Print(jsonhome_details_modules_webhosting_2));
}

int main() {
  test_home_details_modules_webhosting(1);
  test_home_details_modules_webhosting(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_details_modules_webhosting_MAIN
#endif // home_details_modules_webhosting_TEST
