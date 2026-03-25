
# TicketsRow

Information about a single ticket.

## Properties

Name | Type
------------ | -------------
`title` | string
`ticketmaskid` | string
`lastreplier` | string
`status` | string
`priority` | string
`total_replies` | number
`lastactivity` | string
`departmenttitle` | string
`ticketid` | number
`can_close` | string
`attachments` | any
`status_text` | string
`checked` | boolean

## Example

```typescript
import type { TicketsRow } from ''

// TODO: Update the object below with actual values
const example = {
  "title": null,
  "ticketmaskid": null,
  "lastreplier": null,
  "status": null,
  "priority": null,
  "total_replies": null,
  "lastactivity": null,
  "departmenttitle": null,
  "ticketid": null,
  "can_close": null,
  "attachments": null,
  "status_text": null,
  "checked": null,
} satisfies TicketsRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as TicketsRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


