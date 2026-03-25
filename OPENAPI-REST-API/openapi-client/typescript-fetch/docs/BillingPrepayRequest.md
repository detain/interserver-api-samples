
# BillingPrepayRequest

Request payload for creating a new prepay balance.

## Properties

Name | Type
------------ | -------------
`module` | string
`amount` | number
`automatic_use` | string

## Example

```typescript
import type { BillingPrepayRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "module": null,
  "amount": null,
  "automatic_use": 1,
} satisfies BillingPrepayRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BillingPrepayRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


