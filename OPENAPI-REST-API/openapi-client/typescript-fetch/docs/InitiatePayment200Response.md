
# InitiatePayment200Response


## Properties

Name | Type
------------ | -------------
`type` | string
`redirect` | string
`action` | string
`method` | string
`items` | object
`text` | string

## Example

```typescript
import type { InitiatePayment200Response } from ''

// TODO: Update the object below with actual values
const example = {
  "type": null,
  "redirect": null,
  "action": null,
  "method": null,
  "items": null,
  "text": null,
} satisfies InitiatePayment200Response

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as InitiatePayment200Response
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


