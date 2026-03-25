
# TicketDetails

Detailed ticket information

## Properties

Name | Type
------------ | -------------
`ticketid` | number
`ticketmaskid` | string
`department` | string
`status` | string
`priority` | string
`subject` | string
`created_on` | string
`updated_on` | string

## Example

```typescript
import type { TicketDetails } from ''

// TODO: Update the object below with actual values
const example = {
  "ticketid": null,
  "ticketmaskid": null,
  "department": null,
  "status": null,
  "priority": null,
  "subject": null,
  "created_on": null,
  "updated_on": null,
} satisfies TicketDetails

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as TicketDetails
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


