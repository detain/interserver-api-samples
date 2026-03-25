
# VpsOrderPutRequest

request to validate a vps order

## Properties

Name | Type
------------ | -------------
`osDistro` | string
`slices` | number
`vpsPlatform` | string
`period` | number
`location` | number
`osVersion` | string
`hostname` | string
`rootpass` | string
`controlpanel` | string
`coupon` | string
`comment` | string

## Example

```typescript
import type { VpsOrderPutRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "osDistro": null,
  "slices": null,
  "vpsPlatform": null,
  "period": null,
  "location": null,
  "osVersion": null,
  "hostname": null,
  "rootpass": null,
  "controlpanel": null,
  "coupon": null,
  "comment": null,
} satisfies VpsOrderPutRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsOrderPutRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


