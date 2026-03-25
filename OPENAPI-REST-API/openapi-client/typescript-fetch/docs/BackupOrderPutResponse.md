
# BackupOrderPutResponse

Backup Order validation response

## Properties

Name | Type
------------ | -------------
`_continue` | boolean
`errors` | Array&lt;string&gt;
`serviceType` | number
`serviceCost` | string
`originalCost` | string
`repeatServiceCost` | string
`hostname` | string
`password` | string
`coupon` | string
`couponCode` | number

## Example

```typescript
import type { BackupOrderPutResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "_continue": null,
  "errors": null,
  "serviceType": null,
  "serviceCost": null,
  "originalCost": null,
  "repeatServiceCost": null,
  "hostname": null,
  "password": null,
  "coupon": null,
  "couponCode": null,
} satisfies BackupOrderPutResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BackupOrderPutResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


