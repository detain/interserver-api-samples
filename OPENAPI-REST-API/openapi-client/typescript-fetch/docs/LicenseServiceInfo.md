
# LicenseServiceInfo


## Properties

Name | Type
------------ | -------------
`license_id` | string
`license_type` | string
`license_currency` | string
`license_order_date` | Date
`license_custid` | string
`license_ip` | string
`license_status` | string
`license_invoice` | string
`license_coupon` | string
`license_hostname` | string
`license_key` | string
`license_extra` | string

## Example

```typescript
import type { LicenseServiceInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "license_id": 386522,
  "license_type": 5034,
  "license_currency": USD,
  "license_order_date": 2020-01-14T10:48:14Z,
  "license_custid": 771282,
  "license_ip": 1.2.3.4,
  "license_status": active,
  "license_invoice": 18704419,
  "license_coupon": 1836,
  "license_hostname": ,
  "license_key": ,
  "license_extra": ,
} satisfies LicenseServiceInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as LicenseServiceInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


