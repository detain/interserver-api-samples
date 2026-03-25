
# DomainOrder

Ordering metadata for domain registration and transfers.

## Properties

Name | Type
------------ | -------------
`whoisPrivacyCost` | string
`services` | [DomainOrderServices](DomainOrderServices.md)
`tldServices` | object

## Example

```typescript
import type { DomainOrder } from ''

// TODO: Update the object below with actual values
const example = {
  "whoisPrivacyCost": 5,
  "services": null,
  "tldServices": null,
} satisfies DomainOrder

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainOrder
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


