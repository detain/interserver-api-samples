#ifndef home_services_domains_TEST
#define home_services_domains_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define home_services_domains_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/home_services_domains.h"
home_services_domains_t* instantiate_home_services_domains(int include_optional);

#include "test_home_services_domains_links.c"


home_services_domains_t* instantiate_home_services_domains(int include_optional) {
  home_services_domains_t* home_services_domains = NULL;
  if (include_optional) {
    home_services_domains = home_services_domains_create(
       // false, not to have infinite recursion
      instantiate_home_services_domains_links(0),
      5
    );
  } else {
    home_services_domains = home_services_domains_create(
      NULL,
      5
    );
  }

  return home_services_domains;
}


#ifdef home_services_domains_MAIN

void test_home_services_domains(int include_optional) {
    home_services_domains_t* home_services_domains_1 = instantiate_home_services_domains(include_optional);

	cJSON* jsonhome_services_domains_1 = home_services_domains_convertToJSON(home_services_domains_1);
	printf("home_services_domains :\n%s\n", cJSON_Print(jsonhome_services_domains_1));
	home_services_domains_t* home_services_domains_2 = home_services_domains_parseFromJSON(jsonhome_services_domains_1);
	cJSON* jsonhome_services_domains_2 = home_services_domains_convertToJSON(home_services_domains_2);
	printf("repeating home_services_domains:\n%s\n", cJSON_Print(jsonhome_services_domains_2));
}

int main() {
  test_home_services_domains(1);
  test_home_services_domains(0);

  printf("Hello world \n");
  return 0;
}

#endif // home_services_domains_MAIN
#endif // home_services_domains_TEST
