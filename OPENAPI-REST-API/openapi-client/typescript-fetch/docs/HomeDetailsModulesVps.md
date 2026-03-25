
# HomeDetailsModulesVps

Dashboard module configuration for VPS services.

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
import type { HomeDetailsModulesVps } from ''

// TODO: Update the object below with actual values
const example = {
  "icon": cloud-meatball,
  "view_link": view_vps,
  "heading": VPS,
  "buy_link": order_vps,
  "list_link": view_vps_list,
} satisfies HomeDetailsModulesVps

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as HomeDetailsModulesVps
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


