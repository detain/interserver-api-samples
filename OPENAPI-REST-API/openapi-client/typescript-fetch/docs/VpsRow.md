
# VpsRow

A result row from the `Vps` `GET` request.

## Properties

Name | Type
------------ | -------------
`vps_id` | string
`vps_name` | string
`repeat_invoices_cost` | string
`vps_hostname` | string
`vps_ip` | string
`vps_status` | string
`services_name` | string
`vps_comment` | string

## Example

```typescript
import type { VpsRow } from ''

// TODO: Update the object below with actual values
const example = {
  "vps_id": 100,
  "vps_name": Builder,
  "repeat_invoices_cost": 10.00,
  "vps_hostname": vps100,
  "vps_ip": 64.20.46.220,
  "vps_status": active,
  "services_name": KVM Windows VPS Slice,
  "vps_comment": ,
} satisfies VpsRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


