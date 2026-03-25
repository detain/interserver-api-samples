
# DomainBillingExtra

Extended billing context for a domain including registrar order details and contact info.

## Properties

Name | Type
------------ | -------------
`order` | [DomainOrderResponse](DomainOrderResponse.md)
`order_id` | string
`domain_id` | string
`provProcessPending` | [DomainProvProcessPending](DomainProvProcessPending.md)
`email` | string
`firstname` | string
`lastname` | string
`company` | string
`address` | string
`address2` | string
`address3` | string
`city` | string
`state` | string
`zip` | string
`country` | string
`phone` | string
`fax` | string

## Example

```typescript
import type { DomainBillingExtra } from ''

// TODO: Update the object below with actual values
const example = {
  "order": null,
  "order_id": null,
  "domain_id": null,
  "provProcessPending": null,
  "email": null,
  "firstname": null,
  "lastname": null,
  "company": null,
  "address": null,
  "address2": null,
  "address3": null,
  "city": null,
  "state": null,
  "zip": null,
  "country": null,
  "phone": null,
  "fax": null,
} satisfies DomainBillingExtra

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainBillingExtra
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


