
# TicketPostDetailsInner


## Properties

Name | Type
------------ | -------------
`post_id` | number
`date` | string
`contents` | string
`creator` | string
`creator_email` | string
`creator_name` | string
`hasattachments` | number
`attachment_download` | string

## Example

```typescript
import type { TicketPostDetailsInner } from ''

// TODO: Update the object below with actual values
const example = {
  "post_id": null,
  "date": null,
  "contents": null,
  "creator": null,
  "creator_email": null,
  "creator_name": null,
  "hasattachments": null,
  "attachment_download": null,
} satisfies TicketPostDetailsInner

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as TicketPostDetailsInner
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


