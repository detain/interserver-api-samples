
# BackupBillingDetails


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
`service_extra` | string
`service_extra_json` | string

## Example

```typescript
import type { BackupBillingDetails } from ''

// TODO: Update the object below with actual values
const example = {
  "service_last_invoice_date": December 29, 2021,
  "service_payment_status": Paid,
  "service_frequency": Monthly,
  "next_date": 2022-01-29T14:09:57.000Z,
  "service_next_invoice_date": January 29, 2022,
  "service_currency": USD,
  "service_currency_symbol": $,
  "service_cost_info": 3,
  "service_extra": [],
  "service_extra_json": [],
} satisfies BackupBillingDetails

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BackupBillingDetails
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


