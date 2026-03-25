
# GetOrderDetail200ResponseServiceTypesInner


## Properties

Name | Type
------------ | -------------
`services_id` | number
`services_name` | string
`services_cost` | number
`services_field1` | string
`services_field2` | string
`services_module` | string

## Example

```typescript
import type { GetOrderDetail200ResponseServiceTypesInner } from ''

// TODO: Update the object below with actual values
const example = {
  "services_id": 11552,
  "services_name": Current IP + Scrub,
  "services_cost": 5,
  "services_field1": ,
  "services_field2": ,
  "services_module": scrub_ips,
} satisfies GetOrderDetail200ResponseServiceTypesInner

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as GetOrderDetail200ResponseServiceTypesInner
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


