
# LicenseBillingDetails

Billing information for a software license including payment status, billing cycle, and cost.

## Properties

Name | Type
------------ | -------------
`service_last_invoice_date` | string
`service_payment_status` | string
`service_frequency` | string
`next_date` | Date
`service_next_invoice_date` | string
`service_currency` | string
`service_currency_symbol` | string
`service_coupon` | string
`service_cost_info` | string
`service_extra` | Array&lt;string&gt;
`service_extra_json` | string

## Example

```typescript
import type { LicenseBillingDetails } from ''

// TODO: Update the object below with actual values
const example = {
  "service_last_invoice_date": August 14, 2023,
  "service_payment_status": Paid,
  "service_frequency": Monthly,
  "next_date": 2023-09-14T09:39:46Z,
  "service_next_invoice_date": September 14, 2023,
  "service_currency": USD,
  "service_currency_symbol": $,
  "service_coupon": ACOUPONFORLICENSES,
  "service_cost_info": 0.00,
  "service_extra": null,
  "service_extra_json": [""],
} satisfies LicenseBillingDetails

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as LicenseBillingDetails
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


