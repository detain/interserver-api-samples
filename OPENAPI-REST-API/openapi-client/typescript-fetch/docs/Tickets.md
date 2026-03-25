
# Tickets

A listing of support tickets.

## Properties

Name | Type
------------ | -------------
`ima` | string
`custid` | string
`view` | string
`currentPage` | number
`limit` | number
`sortcol` | number
`sortdir` | number
`rowsOffset` | number
`tickets` | [Array&lt;TicketsRow&gt;](TicketsRow.md)
`pages` | number
`rowsTotal` | number
`inboxCount` | number
`countArray` | [TicketsCountArray](TicketsCountArray.md)
`viewText` | string

## Example

```typescript
import type { Tickets } from ''

// TODO: Update the object below with actual values
const example = {
  "ima": null,
  "custid": null,
  "view": null,
  "currentPage": null,
  "limit": null,
  "sortcol": null,
  "sortdir": null,
  "rowsOffset": null,
  "tickets": null,
  "pages": null,
  "rowsTotal": null,
  "inboxCount": null,
  "countArray": null,
  "viewText": null,
} satisfies Tickets

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as Tickets
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


