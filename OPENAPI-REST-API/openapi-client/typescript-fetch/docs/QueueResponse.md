
# QueueResponse

Response after sending an action queue to a service.

## Properties

Name | Type
------------ | -------------
`text` | string
`queueId` | number

## Example

```typescript
import type { QueueResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "text": Action has been sent to the server. Please allow up to 2 minutes for action to be completed.,
  "queueId": 14670065,
} satisfies QueueResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as QueueResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


