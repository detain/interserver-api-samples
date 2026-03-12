#ifndef server_order_field_labels_TEST
#define server_order_field_labels_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_order_field_labels_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_order_field_labels.h"
server_order_field_labels_t* instantiate_server_order_field_labels(int include_optional);

#include "test_server_order_field_label.c"
#include "test_server_order_field_label.c"
#include "test_server_order_field_label.c"
#include "test_server_order_field_label.c"
#include "test_server_order_field_label.c"
#include "test_server_order_field_label.c"
#include "test_server_order_field_label.c"


server_order_field_labels_t* instantiate_server_order_field_labels(int include_optional) {
  server_order_field_labels_t* server_order_field_labels = NULL;
  if (include_optional) {
    server_order_field_labels = server_order_field_labels_create(
       // false, not to have infinite recursion
      instantiate_server_order_field_label(0),
       // false, not to have infinite recursion
      instantiate_server_order_field_label(0),
       // false, not to have infinite recursion
      instantiate_server_order_field_label(0),
       // false, not to have infinite recursion
      instantiate_server_order_field_label(0),
       // false, not to have infinite recursion
      instantiate_server_order_field_label(0),
       // false, not to have infinite recursion
      instantiate_server_order_field_label(0),
       // false, not to have infinite recursion
      instantiate_server_order_field_label(0)
    );
  } else {
    server_order_field_labels = server_order_field_labels_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return server_order_field_labels;
}


#ifdef server_order_field_labels_MAIN

void test_server_order_field_labels(int include_optional) {
    server_order_field_labels_t* server_order_field_labels_1 = instantiate_server_order_field_labels(include_optional);

	cJSON* jsonserver_order_field_labels_1 = server_order_field_labels_convertToJSON(server_order_field_labels_1);
	printf("server_order_field_labels :\n%s\n", cJSON_Print(jsonserver_order_field_labels_1));
	server_order_field_labels_t* server_order_field_labels_2 = server_order_field_labels_parseFromJSON(jsonserver_order_field_labels_1);
	cJSON* jsonserver_order_field_labels_2 = server_order_field_labels_convertToJSON(server_order_field_labels_2);
	printf("repeating server_order_field_labels:\n%s\n", cJSON_Print(jsonserver_order_field_labels_2));
}

int main() {
  test_server_order_field_labels(1);
  test_server_order_field_labels(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_order_field_labels_MAIN
#endif // server_order_field_labels_TEST
