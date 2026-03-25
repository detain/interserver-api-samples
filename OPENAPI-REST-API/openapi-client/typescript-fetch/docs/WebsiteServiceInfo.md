
# WebsiteServiceInfo


## Properties

Name | Type
------------ | -------------
`website_id` | string
`website_server` | string
`website_type` | string
`website_currency` | string
`website_order_date` | string
`website_custid` | string
`website_ip` | string
`website_status` | string
`website_invoice` | string
`website_coupon` | string
`website_extra` | string
`website_hostname` | string
`website_comment` | string
`website_username` | string
`website_server_status` | string

## Example

```typescript
import type { WebsiteServiceInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "website_id": 1196829,
  "website_server": 543,
  "website_type": 11363,
  "website_currency": USD,
  "website_order_date": 2023-03-16T22:51:54.000Z,
  "website_custid": 85872,
  "website_ip": 74.50.80.15,
  "website_status": active,
  "website_invoice": 20261994,
  "website_coupon": 1690,
  "website_extra": [],
  "website_hostname": vintagevultures.com,
  "website_comment": null,
  "website_username": vintagev,
  "website_server_status": null,
} satisfies WebsiteServiceInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as WebsiteServiceInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


