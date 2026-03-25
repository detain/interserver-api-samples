
# LoginErrorResponse

Error resposne during login indicating further action.

## Properties

Name | Type
------------ | -------------
`message` | string
`field` | string

## Example

```typescript
import type { LoginErrorResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "message": null,
  "field": null,
} satisfies LoginErrorResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as LoginErrorResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


