
# HomeDetailsModulesQuickservers

Dashboard module configuration for QuickServer services.

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
import type { HomeDetailsModulesQuickservers } from ''

// TODO: Update the object below with actual values
const example = {
  "icon": database,
  "view_link": view_qs,
  "heading": Quick Servers,
  "buy_link": order_quickserver,
  "list_link": view_quickservers_list,
} satisfies HomeDetailsModulesQuickservers

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as HomeDetailsModulesQuickservers
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


