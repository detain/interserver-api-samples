
# RestoreRequest

Request data to trigger a restore from backup.

## Properties

Name | Type
------------ | -------------
`backup` | string
`password` | string

## Example

```typescript
import type { RestoreRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "backup": null,
  "password": null,
} satisfies RestoreRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as RestoreRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


