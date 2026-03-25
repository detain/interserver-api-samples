
# QuickserverBillingDetails

Billing information for a QuickServer service including payment status, billing cycle, and cost.

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
`service_extra` | [QuickserverServiceExtra](QuickserverServiceExtra.md)
`service_extra_json` | string

## Example

```typescript
import type { QuickserverBillingDetails } from ''

// TODO: Update the object below with actual values
const example = {
  "service_last_invoice_date": April 11, 2023,
  "service_payment_status": Paid,
  "service_frequency": Monthly,
  "next_date": 2023-05-11T20:00:06.000Z,
  "service_next_invoice_date": May 11, 2023,
  "service_currency": USD,
  "service_currency_symbol": $,
  "service_cost_info": 49.00,
  "service_extra": null,
  "service_extra_json": {"platform":"kvm"},
} satisfies QuickserverBillingDetails

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as QuickserverBillingDetails
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


