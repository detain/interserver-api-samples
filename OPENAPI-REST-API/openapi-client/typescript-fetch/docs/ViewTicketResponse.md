
# ViewTicketResponse

Ticket details

## Properties

Name | Type
------------ | -------------
`success` | boolean
`ticket` | [TicketDetails](TicketDetails.md)
`ticket_custom_fields` | [TicketCustomFieldDetails](TicketCustomFieldDetails.md)
`ticket_posts` | [TicketPostDetails](TicketPostDetails.md)

## Example

```typescript
import type { ViewTicketResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "success": null,
  "ticket": null,
  "ticket_custom_fields": null,
  "ticket_posts": null,
} satisfies ViewTicketResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as ViewTicketResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


