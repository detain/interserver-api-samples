
# HomeDetailsModulesLicenses

Dashboard module configuration for software license services.

## Properties

Name | Type
------------ | -------------
`icon` | string
`view_link` | string
`heading` | string
`buy_link` | string
`list_link` | string

## Example

```typescript
import type { HomeDetailsModulesLicenses } from ''

// TODO: Update the object below with actual values
const example = {
  "icon": id-card,
  "view_link": view_license,
  "heading": Licenses,
  "buy_link": order_license,
  "list_link": view_licenses_list,
} satisfies HomeDetailsModulesLicenses

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as HomeDetailsModulesLicenses
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


