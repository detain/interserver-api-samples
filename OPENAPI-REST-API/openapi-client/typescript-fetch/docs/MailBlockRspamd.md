
# MailBlockRspamd

This is a block entry from the rspamd block list.

## Properties

Name | Type
------------ | -------------
`from` | string
`subject` | string

## Example

```typescript
import type { MailBlockRspamd } from ''

// TODO: Update the object below with actual values
const example = {
  "from": null,
  "subject": null,
} satisfies MailBlockRspamd

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailBlockRspamd
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


