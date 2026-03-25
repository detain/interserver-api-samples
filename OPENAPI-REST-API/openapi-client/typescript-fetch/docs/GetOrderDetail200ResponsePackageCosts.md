
# GetOrderDetail200ResponsePackageCosts


## Properties

Name | Type
------------ | -------------
`package_id` | number
`package_cost` | number
`currency` | string
`currencySymbol` | string

## Example

```typescript
import type { GetOrderDetail200ResponsePackageCosts } from ''

// TODO: Update the object below with actual values
const example = {
  "package_id": 11552,
  "package_cost": 5,
  "currency": USD,
  "currencySymbol": $,
} satisfies GetOrderDetail200ResponsePackageCosts

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as GetOrderDetail200ResponsePackageCosts
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


