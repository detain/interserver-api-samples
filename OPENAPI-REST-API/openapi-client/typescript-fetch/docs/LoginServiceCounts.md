
# LoginServiceCounts

Order counts per module.

## Properties

Name | Type
------------ | -------------
`vps` | number
`websites` | number
`servers` | number

## Example

```typescript
import type { LoginServiceCounts } from ''

// TODO: Update the object below with actual values
const example = {
  "vps": 205172,
  "websites": 205172,
  "servers": 205172,
} satisfies LoginServiceCounts

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as LoginServiceCounts
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


