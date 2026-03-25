
# ServiceType

A general grouping of services within a category.

## Properties

Name | Type
------------ | -------------
`st_id` | number
`st_name` | string
`st_category` | number
`st_module` | string

## Example

```typescript
import type { ServiceType } from ''

// TODO: Update the object below with actual values
const example = {
  "st_id": 600,
  "st_name": Dedicated Server,
  "st_category": 600,
  "st_module": servers,
} satisfies ServiceType

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServiceType
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


