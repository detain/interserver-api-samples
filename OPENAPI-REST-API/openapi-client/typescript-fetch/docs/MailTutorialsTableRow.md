
# MailTutorialsTableRow

A single tutorial entry with a label and URL.

## Properties

Name | Type
------------ | -------------
`desc` | string
`value` | string

## Example

```typescript
import type { MailTutorialsTableRow } from ''

// TODO: Update the object below with actual values
const example = {
  "desc": cPanel Tutorial,
  "value": <a class="link" href="https://mail.baby/cpanel/" target="_blank">Click Here</a>,
} satisfies MailTutorialsTableRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailTutorialsTableRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


