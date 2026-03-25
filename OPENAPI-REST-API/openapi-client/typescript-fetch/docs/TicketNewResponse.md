
# TicketNewResponse

Response returned after creating a new support ticket.

## Properties

Name | Type
------------ | -------------
`text` | string
`success` | boolean
`ticket_id` | number

## Example

```typescript
import type { TicketNewResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "text": null,
  "success": null,
  "ticket_id": null,
} satisfies TicketNewResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as TicketNewResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


