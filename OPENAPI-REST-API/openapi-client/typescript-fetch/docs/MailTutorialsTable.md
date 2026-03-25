
# MailTutorialsTable

A table of tutorial links displayed for a mail service.

## Properties

Name | Type
------------ | -------------
`title` | string
`rows` | [Array&lt;MailTutorialsTableRow&gt;](MailTutorialsTableRow.md)

## Example

```typescript
import type { MailTutorialsTable } from ''

// TODO: Update the object below with actual values
const example = {
  "title": Tutorials,
  "rows": null,
} satisfies MailTutorialsTable

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailTutorialsTable
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


