
# DomainOrderTldServices

Example map of TLDs to service IDs for domain ordering.

## Properties

Name | Type
------------ | -------------
`_asia` | number
`_be` | number
`_biz` | number
`_ca` | number

## Example

```typescript
import type { DomainOrderTldServices } from ''

// TODO: Update the object below with actual values
const example = {
  "_asia": 10001,
  "_be": 10002,
  "_biz": 10003,
  "_ca": 10004,
} satisfies DomainOrderTldServices

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainOrderTldServices
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


