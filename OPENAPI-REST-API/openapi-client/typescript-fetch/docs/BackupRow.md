
# BackupRow

A result row from the `Backups` `GET` request.

## Properties

Name | Type
------------ | -------------
`backup_id` | string
`backup_name` | string
`backup_cost` | string
`backup_username` | string
`backup_status` | string
`services_name` | string

## Example

```typescript
import type { BackupRow } from ''

// TODO: Update the object below with actual values
const example = {
  "backup_id": 2414,
  "backup_name": storage-nj.interserver.net,
  "backup_cost": 5.99,
  "backup_username": detainin2414,
  "backup_status": pending-setup,
  "services_name": Swift Storage,
} satisfies BackupRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BackupRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


