
# VpsBillingDetails

Billing information for a VPS service including payment status, billing cycle, and cost.

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
`service_coupon` | string
`service_cost_info` | string
`service_extra` | [VpsServiceExtra](VpsServiceExtra.md)
`service_extra_json` | string

## Example

```typescript
import type { VpsBillingDetails } from ''

// TODO: Update the object below with actual values
const example = {
  "service_last_invoice_date": July 26, 2023,
  "service_payment_status": Paid,
  "service_frequency": Monthly,
  "next_date": 2023-08-26T09:41:12.000Z,
  "service_next_invoice_date": August 26, 2023,
  "service_currency": USD,
  "service_currency_symbol": $,
  "service_coupon": TheCouponIUsed,
  "service_cost_info": 0.00,
  "service_extra": null,
  "service_extra_json": {"spice":5903,"snapshots":[{"name":"third","used":36490445,"date":1692095220},{"name":"second","used":40894464,"date":1692181620},{"name":"first","used":54735668,"date":1692268020}]},
} satisfies VpsBillingDetails

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsBillingDetails
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


