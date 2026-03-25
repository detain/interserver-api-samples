
# BillingVerifyCcRequest

Payload for verifying a credit card through the verification flow.

## Properties

Name | Type
------------ | -------------
`idx` | number
`cc_ccv2` | string
`cc_amount1` | string
`cc_amount2` | string
`terms` | boolean

## Example

```typescript
import type { BillingVerifyCcRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "idx": null,
  "cc_ccv2": null,
  "cc_amount1": null,
  "cc_amount2": null,
  "terms": null,
} satisfies BillingVerifyCcRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BillingVerifyCcRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


