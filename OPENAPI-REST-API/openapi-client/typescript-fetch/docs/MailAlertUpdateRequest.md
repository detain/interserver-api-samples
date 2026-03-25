
# MailAlertUpdateRequest

Payload for updating an existing mail alert.

## Properties

Name | Type
------------ | -------------
`alert_id` | number
`type` | string
`value` | string
`to` | string
`enabled` | string

## Example

```typescript
import type { MailAlertUpdateRequest } from ''

// TODO: Update the object below with actual values
const example = {
  "alert_id": null,
  "type": null,
  "value": null,
  "to": null,
  "enabled": null,
} satisfies MailAlertUpdateRequest

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailAlertUpdateRequest
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


