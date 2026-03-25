
# MailAttachment

(optional) File attachments to include in the email.  The file contents must be base64

## Properties

Name | Type
------------ | -------------
`filename` | string
`data` | string

## Example

```typescript
import type { MailAttachment } from ''

// TODO: Update the object below with actual values
const example = {
  "filename": message.txt,
  "data": aGVsbG8gdGhlcmUK,
} satisfies MailAttachment

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailAttachment
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


