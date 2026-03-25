
# BackupsOrder

Available backup storage packages and pricing for ordering a new backup service.

## Properties

Name | Type
------------ | -------------
`packageCosts` | [BackupsOrderPackageCosts](BackupsOrderPackageCosts.md)
`serviceTypes` | [BackupsOrderServiceTypes](BackupsOrderServiceTypes.md)

## Example

```typescript
import type { BackupsOrder } from ''

// TODO: Update the object below with actual values
const example = {
  "packageCosts": null,
  "serviceTypes": null,
} satisfies BackupsOrder

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BackupsOrder
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


