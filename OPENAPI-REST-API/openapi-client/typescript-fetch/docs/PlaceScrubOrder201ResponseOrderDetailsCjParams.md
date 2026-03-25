
# PlaceScrubOrder201ResponseOrderDetailsCjParams


## Properties

Name | Type
------------ | -------------
`containerTagId` | number
`CID` | number
`OID` | string
`TYPE` | number
`ITEM1` | string
`AMT1` | number
`QTY1` | number
`CURRENCY` | string

## Example

```typescript
import type { PlaceScrubOrder201ResponseOrderDetailsCjParams } from ''

// TODO: Update the object below with actual values
const example = {
  "containerTagId": 1684,
  "CID": 2314,
  "OID": scrub_ips12424,
  "TYPE": 2242343242,
  "ITEM1": scrub_ips904,
  "AMT1": 5,
  "QTY1": 1,
  "CURRENCY": USD,
} satisfies PlaceScrubOrder201ResponseOrderDetailsCjParams

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as PlaceScrubOrder201ResponseOrderDetailsCjParams
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


