
# VpsOrderServiceTypes32


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
import type { VpsOrderServiceTypes32 } from ''

// TODO: Update the object below with actual values
const example = {
  "services_id": 32,
  "services_name": KVM Windows VPS Slice,
  "services_cost": 10.00,
  "services_category": 2,
  "services_buyable": 1,
  "services_type": 1,
  "services_field1": slice,
  "services_field2": ,
  "services_module": vps,
} satisfies VpsOrderServiceTypes32

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsOrderServiceTypes32
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


