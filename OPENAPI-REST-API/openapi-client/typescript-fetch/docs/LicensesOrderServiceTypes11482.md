
# LicensesOrderServiceTypes11482


## Properties

Name | Type
------------ | -------------
`services_id` | string
`services_name` | string
`services_cost` | string
`services_category` | string
`services_buyable` | string
`services_type` | string
`services_field1` | string
`services_field2` | string
`services_module` | string

## Example

```typescript
import type { LicensesOrderServiceTypes11482 } from ''

// TODO: Update the object below with actual values
const example = {
  "services_id": 11482,
  "services_name": DirectAdmin Standard,
  "services_cost": 21.75,
  "services_category": 506,
  "services_buyable": 1,
  "services_type": 506,
  "services_field1": 2704,Standard,
  "services_field2": Unlimited Accounts & Domains<br><br>The DirectAdmin standard license is best for medium to large shared-hosting and/or reseller-hosting companies. No limit on accounts or domains.,
  "services_module": licenses,
} satisfies LicensesOrderServiceTypes11482

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as LicensesOrderServiceTypes11482
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


