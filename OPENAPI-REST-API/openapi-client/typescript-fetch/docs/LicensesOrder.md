
# LicensesOrder

Available license packages and pricing for ordering a new software license.

## Properties

Name | Type
------------ | -------------
`serviceCategories` | [LicensesOrderServiceCategories](LicensesOrderServiceCategories.md)
`packageCosts` | [LicensesOrderPackageCosts](LicensesOrderPackageCosts.md)
`serviceTypes` | [LicensesOrderServiceTypes](LicensesOrderServiceTypes.md)

## Example

```typescript
import type { LicensesOrder } from ''

// TODO: Update the object below with actual values
const example = {
  "serviceCategories": null,
  "packageCosts": null,
  "serviceTypes": null,
} satisfies LicensesOrder

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as LicensesOrder
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


