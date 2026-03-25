
# MailExtraInfoTable

A supplementary information table for a mail service (e.g., connection details).

## Properties

Name | Type
------------ | -------------
`title` | string
`rows` | [Array&lt;MailExtraInfoTableRow&gt;](MailExtraInfoTableRow.md)

## Example

```typescript
import type { MailExtraInfoTable } from ''

// TODO: Update the object below with actual values
const example = {
  "title": Connection Information,
  "rows": null,
} satisfies MailExtraInfoTable

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailExtraInfoTable
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


