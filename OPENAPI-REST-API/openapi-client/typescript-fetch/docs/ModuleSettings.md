
# ModuleSettings

The settings for a module.

## Properties

Name | Type
------------ | -------------
`SERVICE_ID_OFFSET` | number
`USE_REPEAT_INVOICE` | boolean
`USE_PACKAGES` | boolean
`BILLING_DAYS_OFFSET` | number
`IMGNAME` | string
`REPEAT_BILLING_METHOD` | number
`DELETE_PENDING_DAYS` | number
`SUSPEND_DAYS` | number
`SUSPEND_WARNING_DAYS` | number
`TITLE` | string
`MENUNAME` | string
`EMAIL_FROM` | string
`TBLNAME` | string
`TABLE` | string
`TITLE_FIELD` | string
`PREFIX` | string
`TITLE_FIELD2` | string
`TITLE_FIELD3` | string

## Example

```typescript
import type { ModuleSettings } from ''

// TODO: Update the object below with actual values
const example = {
  "SERVICE_ID_OFFSET": 0,
  "USE_REPEAT_INVOICE": true,
  "USE_PACKAGES": true,
  "BILLING_DAYS_OFFSET": 0,
  "IMGNAME": root-server.png,
  "REPEAT_BILLING_METHOD": 2,
  "DELETE_PENDING_DAYS": 45,
  "SUSPEND_DAYS": 14,
  "SUSPEND_WARNING_DAYS": 7,
  "TITLE": VPS,
  "MENUNAME": VPS,
  "EMAIL_FROM": support@interserver.net",
  "TBLNAME": VPS,
  "TABLE": vps,
  "TITLE_FIELD": vps_hostname,
  "PREFIX": vps,
  "TITLE_FIELD2": vps_ip,
  "TITLE_FIELD3": vps_vzid,
} satisfies ModuleSettings

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ModuleSettings
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


