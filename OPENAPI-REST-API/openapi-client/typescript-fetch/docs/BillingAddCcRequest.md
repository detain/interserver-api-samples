
# BillingAddCcRequest

Request to add a new creditcard into the system.

## Properties

Name | Type
------------ | -------------
`name` | string
`address` | string
`city` | string
`state` | string
`country` | string
`zip` | string
`cc` | string
`cc_exp` | string
`cc_ccv2` | string

## Example

```typescript
import type { BillingAddCcRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "name": null,
  "address": null,
  "city": null,
  "state": null,
  "country": null,
  "zip": null,
  "cc": null,
  "cc_exp": null,
  "cc_ccv2": null,
} satisfies BillingAddCcRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BillingAddCcRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


