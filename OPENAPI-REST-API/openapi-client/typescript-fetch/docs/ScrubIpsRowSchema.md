
# ScrubIpsRowSchema


## Properties

Name | Type
------------ | -------------
`scrub_ip_id` | number
`repeat_invoices_cost` | number
`scrub_ip_ip` | string
`scrub_ip_status` | string
`services_name` | string

## Example

```typescript
import type { ScrubIpsRowSchema } from ''

// TODO: Update the object below with actual values
const example = {
  "scrub_ip_id": null,
  "repeat_invoices_cost": null,
  "scrub_ip_ip": null,
  "scrub_ip_status": null,
  "services_name": null,
} satisfies ScrubIpsRowSchema

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ScrubIpsRowSchema
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


