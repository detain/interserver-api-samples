
# MailDelistResponse

Blocklist status information for a mail service.

## Properties

Name | Type
------------ | -------------
`id` | number
`local` | Array&lt;object&gt;
`mbtrap` | Array&lt;object&gt;
`subject` | Array&lt;object&gt;
`manual` | Array&lt;object&gt;

## Example

```typescript
import type { MailDelistResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "id": null,
  "local": null,
  "mbtrap": null,
  "subject": null,
  "manual": null,
} satisfies MailDelistResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailDelistResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


