
# LoginSuccessResponse

The response from a successful login.

## Properties

Name | Type
------------ | -------------
`sessionId` | string
`account_id` | number
`account_lid` | string
`ima` | string
`gravatar` | string

## Example

```typescript
import type { LoginSuccessResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "sessionId": null,
  "account_id": null,
  "account_lid": null,
  "ima": null,
  "gravatar": null,
} satisfies LoginSuccessResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as LoginSuccessResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


