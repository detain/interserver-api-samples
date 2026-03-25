
# PlaceScrubOrder201Response


## Properties

Name | Type
------------ | -------------
`success` | boolean
`text` | string
`order_details` | [PlaceScrubOrder201ResponseOrderDetails](PlaceScrubOrder201ResponseOrderDetails.md)

## Example

```typescript
import type { PlaceScrubOrder201Response } from ''

// TODO: Update the object below with actual values
const example = {
  "success": true,
  "text": ScrubIp order is placed.,
  "order_details": null,
} satisfies PlaceScrubOrder201Response

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as PlaceScrubOrder201Response
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


