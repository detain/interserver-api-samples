
# BackupExtraInfoTables

Supplementary information tables for a backup service (IP info, etc.).

## Properties

Name | Type
------------ | -------------
`ip_info` | [BackupIPInfo](BackupIPInfo.md)

## Example

```typescript
import type { BackupExtraInfoTables } from ''

// TODO: Update the object below with actual values
const example = {
  "ip_info": null,
} satisfies BackupExtraInfoTables

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BackupExtraInfoTables
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


