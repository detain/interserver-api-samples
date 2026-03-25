
# WebsiteRow

A result row from the `Webhosting` `GET` request.

## Properties

Name | Type
------------ | -------------
`website_id` | string
`website_hostname` | string
`repeat_invoices_cost` | string
`website_status` | string
`services_name` | string
`website_comment` | string

## Example

```typescript
import type { WebsiteRow } from ''

// TODO: Update the object below with actual values
const example = {
  "website_id": 376359,
  "website_hostname": hussfamily.com,
  "repeat_invoices_cost": 5.99,
  "website_status": active,
  "services_name": Standard Web Hosting,
  "website_comment": website for manhattan project.,
} satisfies WebsiteRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as WebsiteRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


