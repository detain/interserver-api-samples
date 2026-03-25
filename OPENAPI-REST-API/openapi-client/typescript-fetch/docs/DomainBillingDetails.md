
# DomainBillingDetails

Billing information for a domain service including payment status, dates, and cost.

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
`service_extra` | [DomainBillingExtra](DomainBillingExtra.md)
`service_extra_json` | string

## Example

```typescript
import type { DomainBillingDetails } from ''

// TODO: Update the object below with actual values
const example = {
  "service_last_invoice_date": null,
  "service_payment_status": null,
  "service_frequency": null,
  "next_date": null,
  "service_next_invoice_date": null,
  "service_currency": null,
  "service_currency_symbol": null,
  "service_cost_info": null,
  "service_extra": null,
  "service_extra_json": null,
} satisfies DomainBillingDetails

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainBillingDetails
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


