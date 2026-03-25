
# MailAlertsResponseInner


## Properties

Name | Type
------------ | -------------
`alert_id` | number
`alert_type` | string
`alert_value` | string
`alert_to` | string
`alert_enabled` | string

## Example

```typescript
import type { MailAlertsResponseInner } from ''

// TODO: Update the object below with actual values
const example = {
  "alert_id": null,
  "alert_type": null,
  "alert_value": null,
  "alert_to": null,
  "alert_enabled": null,
} satisfies MailAlertsResponseInner

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailAlertsResponseInner
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


