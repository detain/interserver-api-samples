
# MailServiceInfo


## Properties

Name | Type
------------ | -------------
`mail_id` | string
`mail_type` | string
`mail_currency` | string
`mail_order_date` | string
`mail_custid` | string
`mail_quota` | string
`mail_status` | string
`mail_invoice` | string
`mail_username` | string
`mail_ip` | string
`mail_coupon` | string
`mail_extra` | string
`mail_server_status` | string
`mail_comment` | string

## Example

```typescript
import type { MailServiceInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "mail_id": 43171,
  "mail_type": 10880,
  "mail_currency": USD,
  "mail_order_date": 2023-07-16T00:55:05.000Z,
  "mail_custid": 771282,
  "mail_quota": 0,
  "mail_status": expired,
  "mail_invoice": 20410322,
  "mail_username": ,
  "mail_ip": ,
  "mail_coupon": 0,
  "mail_extra": [],
  "mail_server_status": ,
  "mail_comment": ,
} satisfies MailServiceInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailServiceInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


