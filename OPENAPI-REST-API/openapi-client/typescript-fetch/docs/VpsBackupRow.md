
# VpsBackupRow

A single backed-up item and information about it.

## Properties

Name | Type
------------ | -------------
`type` | string
`service` | number
`name` | string
`size` | number
`date` | number

## Example

```typescript
import type { VpsBackupRow } from ''

// TODO: Update the object below with actual values
const example = {
  "type": zfs,
  "service": 12343,
  "name": automated_backup,
  "size": 132412343124213,
  "date": 1693996140,
} satisfies VpsBackupRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsBackupRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


