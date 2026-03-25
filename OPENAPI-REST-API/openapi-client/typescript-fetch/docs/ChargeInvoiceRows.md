
# ChargeInvoiceRows

Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.

## Properties

Name | Type
------------ | -------------
`success` | boolean
`invoices` | [{ [key: string]: ChargeInvoiceRowsInvoicesValue; }](ChargeInvoiceRowsInvoicesValue.md)

## Example

```typescript
import type { ChargeInvoiceRows } from ''

// TODO: Update the object below with actual values
const example = {
  "success": null,
  "invoices": null,
} satisfies ChargeInvoiceRows

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ChargeInvoiceRows
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


