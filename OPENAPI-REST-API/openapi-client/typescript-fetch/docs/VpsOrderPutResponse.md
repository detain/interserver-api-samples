
# VpsOrderPutResponse

Response from VPS order validation request

## Properties

Name | Type
------------ | -------------
`_continue` | boolean
`errors` | Array&lt;any&gt;
`coupon_code` | number
`service_cost` | number
`slice_cost` | number
`service_type` | number
`repeat_slice_cost` | number
`original_slice_cost` | number
`original_cost` | number
`repeat_service_cost` | number
`monthly_service_cost` | number
`custid` | string
`os` | string
`slices` | string
`platform` | string
`controlpanel` | string
`period` | number
`location` | number
`version` | string
`hostname` | string
`coupon` | string
`rootpass` | string

## Example

```typescript
import type { VpsOrderPutResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "_continue": null,
  "errors": null,
  "coupon_code": null,
  "service_cost": null,
  "slice_cost": null,
  "service_type": null,
  "repeat_slice_cost": null,
  "original_slice_cost": null,
  "original_cost": null,
  "repeat_service_cost": null,
  "monthly_service_cost": null,
  "custid": null,
  "os": null,
  "slices": null,
  "platform": null,
  "controlpanel": null,
  "period": null,
  "location": null,
  "version": null,
  "hostname": null,
  "coupon": null,
  "rootpass": null,
} satisfies VpsOrderPutResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsOrderPutResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


