#ifndef charge_invoice_rows_invoices_value_TEST
#define charge_invoice_rows_invoices_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define charge_invoice_rows_invoices_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/charge_invoice_rows_invoices_value.h"
charge_invoice_rows_invoices_value_t* instantiate_charge_invoice_rows_invoices_value(int include_optional);



charge_invoice_rows_invoices_value_t* instantiate_charge_invoice_rows_invoices_value(int include_optional) {
  charge_invoice_rows_invoices_value_t* charge_invoice_rows_invoices_value = NULL;
  if (include_optional) {
    charge_invoice_rows_invoices_value = charge_invoice_rows_invoices_value_create(
      1.337,
      "0",
      1.337,
      "0",
      interserver_management_api_charge_invoice_rows_invoices_value_INVOICESPAID_0,
      "0",
      "0",
      "0",
      "0",
      list_createList()
    );
  } else {
    charge_invoice_rows_invoices_value = charge_invoice_rows_invoices_value_create(
      1.337,
      "0",
      1.337,
      "0",
      interserver_management_api_charge_invoice_rows_invoices_value_INVOICESPAID_0,
      "0",
      "0",
      "0",
      "0",
      list_createList()
    );
  }

  return charge_invoice_rows_invoices_value;
}


#ifdef charge_invoice_rows_invoices_value_MAIN

void test_charge_invoice_rows_invoices_value(int include_optional) {
    charge_invoice_rows_invoices_value_t* charge_invoice_rows_invoices_value_1 = instantiate_charge_invoice_rows_invoices_value(include_optional);

	cJSON* jsoncharge_invoice_rows_invoices_value_1 = charge_invoice_rows_invoices_value_convertToJSON(charge_invoice_rows_invoices_value_1);
	printf("charge_invoice_rows_invoices_value :\n%s\n", cJSON_Print(jsoncharge_invoice_rows_invoices_value_1));
	charge_invoice_rows_invoices_value_t* charge_invoice_rows_invoices_value_2 = charge_invoice_rows_invoices_value_parseFromJSON(jsoncharge_invoice_rows_invoices_value_1);
	cJSON* jsoncharge_invoice_rows_invoices_value_2 = charge_invoice_rows_invoices_value_convertToJSON(charge_invoice_rows_invoices_value_2);
	printf("repeating charge_invoice_rows_invoices_value:\n%s\n", cJSON_Print(jsoncharge_invoice_rows_invoices_value_2));
}

int main() {
  test_charge_invoice_rows_invoices_value(1);
  test_charge_invoice_rows_invoices_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // charge_invoice_rows_invoices_value_MAIN
#endif // charge_invoice_rows_invoices_value_TEST
