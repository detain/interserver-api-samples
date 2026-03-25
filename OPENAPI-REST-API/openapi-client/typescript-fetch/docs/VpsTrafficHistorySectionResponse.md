
# VpsTrafficHistorySectionResponse

VPS Traffic History Hour and Day Sections

## Properties

Name | Type
------------ | -------------
`data` | [Array&lt;VpsTrafficHistorySectionDataResponse&gt;](VpsTrafficHistorySectionDataResponse.md)
`times` | Array&lt;Date&gt;

## Example

```typescript
import type { VpsTrafficHistorySectionResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "data": null,
  "times": null,
} satisfies VpsTrafficHistorySectionResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsTrafficHistorySectionResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


