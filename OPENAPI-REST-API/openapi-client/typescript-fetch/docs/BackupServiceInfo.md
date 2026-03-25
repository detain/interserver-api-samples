
# BackupServiceInfo

Core service record for a backup storage service including ID, status, quota, and billing details.

## Properties

Name | Type
------------ | -------------
`backup_id` | string
`backup_server` | string
`backup_username` | string
`backup_type` | string
`backup_currency` | string
`backup_order_date` | string
`backup_custid` | string
`backup_quota` | string
`backup_ip` | string
`backup_status` | string
`backup_invoice` | string
`backup_coupon` | string
`backup_extra` | string
`backup_server_status` | string
`backup_comment` | string

## Example

```typescript
import type { BackupServiceInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "backup_id": 21163,
  "backup_server": 38,
  "backup_username": st21163,
  "backup_type": 10831,
  "backup_currency": USD,
  "backup_order_date": 2021-12-29T14:09:57.000Z,
  "backup_custid": 2773,
  "backup_quota": 0,
  "backup_ip": 64.20.55.234,
  "backup_status": canceled,
  "backup_invoice": 19591007,
  "backup_coupon": 0,
  "backup_extra": [],
  "backup_server_status": deleted,
  "backup_comment": null,
} satisfies BackupServiceInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BackupServiceInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


