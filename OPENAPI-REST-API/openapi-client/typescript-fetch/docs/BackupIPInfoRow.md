
# BackupIPInfoRow

A single row in the backup IP information table.

## Properties

Name | Type
------------ | -------------
`desc` | string
`value` | string

## Example

```typescript
import type { BackupIPInfoRow } from ''

// TODO: Update the object below with actual values
const example = {
  "desc": Netmask,
  "value": 255.255.255.248,
} satisfies BackupIPInfoRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BackupIPInfoRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


