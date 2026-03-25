
# MailDeliverabilityResponse

Deliverability statistics for a mail service.

## Properties

Name | Type
------------ | -------------
`stat` | object
`percent` | number
`table_data` | Array&lt;Array&lt;string&gt;&gt;

## Example

```typescript
import type { MailDeliverabilityResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "stat": null,
  "percent": null,
  "table_data": null,
} satisfies MailDeliverabilityResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailDeliverabilityResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


