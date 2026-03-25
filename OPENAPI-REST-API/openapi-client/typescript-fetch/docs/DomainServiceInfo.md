
# DomainServiceInfo

Detailed domain service record for a domain order.

## Properties

Name | Type
------------ | -------------
`domain_id` | string
`domain_hostname` | string
`domain_username` | string
`domain_password` | string
`domain_type` | string
`domain_currency` | string
`domain_expire_date` | string
`domain_order_date` | string
`domain_custid` | string
`domain_status` | string
`domain_invoice` | string
`domain_coupon` | string

## Example

```typescript
import type { DomainServiceInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "domain_id": null,
  "domain_hostname": null,
  "domain_username": null,
  "domain_password": null,
  "domain_type": null,
  "domain_currency": null,
  "domain_expire_date": null,
  "domain_order_date": null,
  "domain_custid": null,
  "domain_status": null,
  "domain_invoice": null,
  "domain_coupon": null,
} satisfies DomainServiceInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainServiceInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


