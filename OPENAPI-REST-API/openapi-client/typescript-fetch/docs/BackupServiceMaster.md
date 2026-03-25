
# BackupServiceMaster


## Properties

Name | Type
------------ | -------------
`backup_id` | number
`backup_name` | string
`backup_ip` | string
`backup_type` | number
`backup_hdsize` | number
`backup_hdfree` | number
`backup_last_update` | string
`backup_available` | number
`backup_iowait` | number
`backup_order` | number

## Example

```typescript
import type { BackupServiceMaster } from ''

// TODO: Update the object below with actual values
const example = {
  "backup_id": 38,
  "backup_name": storage1400.is.cc,
  "backup_ip": 44.22.11.88,
  "backup_type": 703,
  "backup_hdsize": 156448,
  "backup_hdfree": 61374,
  "backup_last_update": 2023-08-17T23:20:02.000Z,
  "backup_available": 0,
  "backup_iowait": 0,
  "backup_order": 21359,
} satisfies BackupServiceMaster

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BackupServiceMaster
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


