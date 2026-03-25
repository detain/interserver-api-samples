
# AccountInfoPost

Request to update account information.

## Properties

Name | Type
------------ | -------------
`name` | string
`address` | string
`city` | string
`state` | string
`zip` | string
`country` | string
`phone` | string
`company` | string
`address2` | string
`locale` | string
`email_invoices` | string
`email_abuse` | string
`disable_reset` | boolean
`disable_reinstall` | boolean
`disable_server_notifications` | boolean
`disable_email_notifications` | boolean
`gstin` | string

## Example

```typescript
import type { AccountInfoPost } from ''

// TODO: Update the object below with actual values
const example = {
  "name": John Doe,
  "address": 124 My St,
  "city": My Town,
  "state": PA,
  "zip": 17522,
  "country": US,
  "phone": 8675309,
  "company": My Company,
  "address2": null,
  "locale": null,
  "email_invoices": null,
  "email_abuse": null,
  "disable_reset": null,
  "disable_reinstall": null,
  "disable_server_notifications": null,
  "disable_email_notifications": null,
  "gstin": null,
} satisfies AccountInfoPost

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as AccountInfoPost
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


