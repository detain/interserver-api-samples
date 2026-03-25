
# BackupOrderPutRequest

Parameters to submit to validate your backup order

## Properties

Name | Type
------------ | -------------
`validateOnly` | boolean
`serviceType` | number
`coupon` | string

## Example

```typescript
import type { BackupOrderPutRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "validateOnly": null,
  "serviceType": null,
  "coupon": null,
} satisfies BackupOrderPutRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BackupOrderPutRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


