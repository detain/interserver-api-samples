
# LicenseRow

A result row from the `Licenses` `GET` request.

## Properties

Name | Type
------------ | -------------
`license_id` | string
`license_hostname` | string
`license_ip` | string
`services_name` | string
`cost` | string
`license_status` | string
`invoices_paid` | string
`invoices_date` | Date

## Example

```typescript
import type { LicenseRow } from ''

// TODO: Update the object below with actual values
const example = {
  "license_id": 386111,
  "license_hostname": ,
  "license_ip": 66.45.228.100,
  "services_name": Imunify360 up to 30 users,
  "cost": 25.00,
  "license_status": canceled,
  "invoices_paid": 1,
  "invoices_date": 2019-08-28T14:27:22Z,
} satisfies LicenseRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as LicenseRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


