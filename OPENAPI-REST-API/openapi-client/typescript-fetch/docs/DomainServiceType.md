
# DomainServiceType

Service type definition for a domain registration, including name, pricing, and category.

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
import type { DomainServiceType } from ''

// TODO: Update the object below with actual values
const example = {
  "services_id": null,
  "services_name": null,
  "services_cost": null,
  "services_category": null,
  "services_buyable": null,
  "services_type": null,
  "services_field1": null,
  "services_field2": null,
  "services_module": null,
} satisfies DomainServiceType

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainServiceType
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


