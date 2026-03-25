
# ChargeInvoiceRowsInvoicesValue


## Properties

Name | Type
------------ | -------------
`invoices_id` | number
`invoices_description` | string
`invoices_amount` | number
`invoices_date` | string
`invoices_paid` | number
`invoices_due_date` | string
`invoices_currency` | string
`currency_symbol` | string
`invoices_date_formatted` | string
`paid_invoices` | [{ [key: string]: ChargeInvoiceRowsInvoicesValuePaidInvoicesValue; }](ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.md)

## Example

```typescript
import type { ChargeInvoiceRowsInvoicesValue } from ''

// TODO: Update the object below with actual values
const example = {
  "invoices_id": null,
  "invoices_description": null,
  "invoices_amount": null,
  "invoices_date": null,
  "invoices_paid": null,
  "invoices_due_date": null,
  "invoices_currency": null,
  "currency_symbol": null,
  "invoices_date_formatted": null,
  "paid_invoices": null,
} satisfies ChargeInvoiceRowsInvoicesValue

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ChargeInvoiceRowsInvoicesValue
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


