
# HomeDetailsModulesDomains

Dashboard module configuration for domain registration services.

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
import type { HomeDetailsModulesDomains } from ''

// TODO: Update the object below with actual values
const example = {
  "icon": globe,
  "view_link": view_domain,
  "heading": Domains,
  "buy_link": domain_order,
  "list_link": view_domains_list,
} satisfies HomeDetailsModulesDomains

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as HomeDetailsModulesDomains
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


