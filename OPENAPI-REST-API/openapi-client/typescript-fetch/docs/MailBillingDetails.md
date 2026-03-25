
# MailBillingDetails

Billing information for a mail service including payment status, billing cycle, and cost.

## Properties

Name | Type
------------ | -------------
`service_last_invoice_date` | string
`service_payment_status` | string
`service_frequency` | string
`next_date` | string
`service_next_invoice_date` | string
`service_currency` | string
`service_currency_symbol` | string
`service_cost_info` | string
`service_extra` | Array&lt;string&gt;
`service_extra_json` | string

## Example

```typescript
import type { MailBillingDetails } from ''

// TODO: Update the object below with actual values
const example = {
  "service_last_invoice_date": July 16, 2023,
  "service_payment_status": Unpaid,
  "service_frequency": Monthly,
  "next_date": 2023-08-16T00:55:05.000Z,
  "service_next_invoice_date": August 16, 2023,
  "service_currency": USD,
  "service_currency_symbol": $,
  "service_cost_info": 1.00,
  "service_extra": [],
  "service_extra_json": [],
} satisfies MailBillingDetails

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailBillingDetails
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


