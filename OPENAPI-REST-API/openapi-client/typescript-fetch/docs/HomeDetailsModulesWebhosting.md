
# HomeDetailsModulesWebhosting

Dashboard module configuration for webhosting services.

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
import type { HomeDetailsModulesWebhosting } from ''

// TODO: Update the object below with actual values
const example = {
  "icon": window-maximize,
  "view_link": view_website,
  "heading": Web Hosting,
  "buy_link": order_website,
  "list_link": view_websites_list,
} satisfies HomeDetailsModulesWebhosting

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as HomeDetailsModulesWebhosting
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


