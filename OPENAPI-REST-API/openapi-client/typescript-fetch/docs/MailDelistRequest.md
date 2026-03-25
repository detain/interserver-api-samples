
# MailDelistRequest

Payload for removing a sender from mail blocklists.

## Properties

Name | Type
------------ | -------------
`unblock` | string

## Example

```typescript
import type { MailDelistRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "unblock": null,
} satisfies MailDelistRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailDelistRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


