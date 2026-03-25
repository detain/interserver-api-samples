
# ServiceCategory

A Category of Services.  This is the broadest grouping within a module.

## Properties

Name | Type
------------ | -------------
`category_id` | number
`category_name` | string
`category_tag` | string
`category_module` | string

## Example

```typescript
import type { ServiceCategory } from ''

// TODO: Update the object below with actual values
const example = {
  "category_id": 1,
  "category_name": OpenVZ Virtual Servers,
  "category_tag": openvz,
  "category_module": vps,
} satisfies ServiceCategory

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ServiceCategory
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


