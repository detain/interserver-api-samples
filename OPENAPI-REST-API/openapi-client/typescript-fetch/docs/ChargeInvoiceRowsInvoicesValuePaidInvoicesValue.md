
# ChargeInvoiceRowsInvoicesValuePaidInvoicesValue


## Properties

Name | Type
------------ | -------------
`invoices_id` | string
`invoices_description` | string
`invoices_amount` | number
`invoices_date` | string
`invoices_currency` | string
`currency_symbol` | string
`invoices_date_formatted` | string
`payment_type` | string
`refund_invoices` | [{ [key: string]: ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue; }](ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue.md)

## Example

```typescript
import type { ChargeInvoiceRowsInvoicesValuePaidInvoicesValue } from ''

// TODO: Update the object below with actual values
const example = {
  "invoices_id": null,
  "invoices_description": null,
  "invoices_amount": null,
  "invoices_date": null,
  "invoices_currency": null,
  "currency_symbol": null,
  "invoices_date_formatted": null,
  "payment_type": null,
  "refund_invoices": null,
} satisfies ChargeInvoiceRowsInvoicesValuePaidInvoicesValue

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ChargeInvoiceRowsInvoicesValuePaidInvoicesValue
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


