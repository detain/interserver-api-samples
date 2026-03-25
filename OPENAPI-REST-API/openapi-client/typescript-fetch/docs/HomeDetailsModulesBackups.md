
# HomeDetailsModulesBackups

Dashboard module configuration for backup storage services.

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
import type { HomeDetailsModulesBackups } from ''

// TODO: Update the object below with actual values
const example = {
  "icon": warehouse,
  "view_link": view_backup,
  "heading": Storages,
  "buy_link": order_storage,
  "list_link": view_backups_list,
} satisfies HomeDetailsModulesBackups

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as HomeDetailsModulesBackups
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


