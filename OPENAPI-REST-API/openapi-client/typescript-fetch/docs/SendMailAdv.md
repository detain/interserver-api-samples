
# SendMailAdv

Details for an Email

## Properties

Name | Type
------------ | -------------
`subject` | string
`body` | string
`from` | [EmailAddressName](EmailAddressName.md)
`to` | [Array&lt;EmailAddressName&gt;](EmailAddressName.md)
`replyto` | [Array&lt;EmailAddressName&gt;](EmailAddressName.md)
`cc` | [Array&lt;EmailAddressName&gt;](EmailAddressName.md)
`bcc` | [Array&lt;EmailAddressName&gt;](EmailAddressName.md)
`attachments` | [Array&lt;MailAttachment&gt;](MailAttachment.md)
`id` | number

## Example

```typescript
import type { SendMailAdv } from ''

// TODO: Update the object below with actual values
const example = {
  "subject": Your Package has been Delivered!,
  "body": The package you ordered on 2021-01-23 has been delivered. If the package is broken into many pieces, please blaim someone else.,
  "from": null,
  "to": [{"email":"user@domain.com","name":"John Smith"}],
  "replyto": [{"email":"user@domain.com","name":"John Smith"}],
  "cc": [{"email":"user@domain.com","name":"John Smith"}],
  "bcc": [{"email":"user@domain.com","name":"John Smith"}],
  "attachments": [{"filename":"text.txt","data":"base64_encoded_contents"}],
  "id": 5000,
} satisfies SendMailAdv

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as SendMailAdv
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


