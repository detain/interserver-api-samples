
# SendMail

Details for an Email

## Properties

Name | Type
------------ | -------------
`to` | string
`from` | string
`subject` | string
`body` | string

## Example

```typescript
import type { SendMail } from ''

// TODO: Update the object below with actual values
const example = {
  "to": johndoe@company.com,
  "from": janedoe@company.com,
  "subject": Attention Client,
  "body": This is an email to inform you that something noteworthy happened.,
} satisfies SendMail

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as SendMail
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


