#ifndef home_details_modules_domains_TEST
#define home_details_modules_domains_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_details_modules_domains_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_details_modules_domains.h"
home_details_modules_domains_t* instantiate_home_details_modules_domains(int include_optional);



home_details_modules_domains_t* instantiate_home_details_modules_domains(int include_optional) {
  home_details_modules_domains_t* home_details_modules_domains = NULL;
  if (include_optional) {
    home_details_modules_domains = home_details_modules_domains_create(
      "globe",
      "view_domain",
      "Domains",
      "domain_order",
      "view_domains_list"
    );
  } else {
    home_details_modules_domains = home_details_modules_domains_create(
      "globe",
      "view_domain",
      "Domains",
      "domain_order",
      "view_domains_list"
    );
  }

  return home_details_modules_domains;
}


#ifdef home_details_modules_domains_MAIN

void test_home_details_modules_domains(int include_optional) {
    home_details_modules_domains_t* home_details_modules_domains_1 = instantiate_home_details_modules_domains(include_optional);

	cJSON* jsonhome_details_modules_domains_1 = home_details_modules_domains_convertToJSON(home_details_modules_domains_1);
	printf("home_details_modules_domains :\n%s\n", cJSON_Print(jsonhome_details_modules_domains_1));
	home_details_modules_domains_t* home_details_modules_domains_2 = home_details_modules_domains_parseFromJSON(jsonhome_details_modules_domains_1);
	cJSON* jsonhome_details_modules_domains_2 = home_details_modules_domains_convertToJSON(home_details_modules_domains_2);
	printf("repeating home_details_modules_domains:\n%s\n", cJSON_Print(jsonhome_details_modules_domains_2));
}

int main() {
  test_home_details_modules_domains(1);
  test_home_details_modules_domains(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_details_modules_domains_MAIN
#endif // home_details_modules_domains_TEST
