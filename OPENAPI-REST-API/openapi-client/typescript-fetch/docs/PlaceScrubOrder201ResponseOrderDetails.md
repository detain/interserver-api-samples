
# PlaceScrubOrder201ResponseOrderDetails


## Properties

Name | Type
------------ | -------------
`total_cost` | number
`service_id` | number
`invoice_id` | number
`invoice_description` | string
`cj_params` | [PlaceScrubOrder201ResponseOrderDetailsCjParams](PlaceScrubOrder201ResponseOrderDetailsCjParams.md)

## Example

```typescript
import type { PlaceScrubOrder201ResponseOrderDetails } from ''

// TODO: Update the object below with actual values
const example = {
  "total_cost": 5,
  "service_id": 12346,
  "invoice_id": 2746273,
  "invoice_description": Scrub + Current Ip,
  "cj_params": null,
} satisfies PlaceScrubOrder201ResponseOrderDetails

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as PlaceScrubOrder201ResponseOrderDetails
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


