
# TimezoneUpdate

The request to update the time zone of a vps.

## Properties

Name | Type
------------ | -------------
`timezone` | string

## Example

```typescript
import type { TimezoneUpdate } from ''

// TODO: Update the object below with actual values
const example = {
  "timezone": America/New_York,
} satisfies TimezoneUpdate

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as TimezoneUpdate
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


