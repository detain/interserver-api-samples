
# MailRow

A result row from the `Mail` `GET` request.

## Properties

Name | Type
------------ | -------------
`mail_id` | string
`repeat_invoices_cost` | string
`mail_username` | string
`mail_status` | string
`services_name` | string

## Example

```typescript
import type { MailRow } from ''

// TODO: Update the object below with actual values
const example = {
  "mail_id": 5652,
  "repeat_invoices_cost": 5.99,
  "mail_username": mb5652,
  "mail_status": expired,
  "services_name": MailBaby Mail,
} satisfies MailRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


