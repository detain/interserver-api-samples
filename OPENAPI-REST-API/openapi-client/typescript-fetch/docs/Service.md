
# Service

An individual package tied to one of our services.

## Properties

Name | Type
------------ | -------------
`services_id` | number
`services_name` | string
`services_cost` | number
`services_currency` | string
`services_category` | number
`services_buyable` | boolean
`services_type` | number
`services_field1` | string
`services_field2` | string
`services_module` | string

## Example

```typescript
import type { Service } from ''

// TODO: Update the object below with actual values
const example = {
  "services_id": 31,
  "services_name": OpenVZ VPS Slice,
  "services_cost": 6.0,
  "services_currency": USD,
  "services_category": 1,
  "services_buyable": true,
  "services_type": 6,
  "services_field1": slice,
  "services_field2": null,
  "services_module": vps,
} satisfies Service

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as Service
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


