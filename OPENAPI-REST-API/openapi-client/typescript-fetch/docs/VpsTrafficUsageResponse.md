
# VpsTrafficUsageResponse

VPS Traffic Usage Section

## Properties

Name | Type
------------ | -------------
`current` | [VpsTrafficTotalsSectionResponse](VpsTrafficTotalsSectionResponse.md)
`peak` | [VpsTrafficTotalsSectionResponse](VpsTrafficTotalsSectionResponse.md)
`average` | [VpsTrafficUsageAverageResponse](VpsTrafficUsageAverageResponse.md)

## Example

```typescript
import type { VpsTrafficUsageResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "current": null,
  "peak": null,
  "average": null,
} satisfies VpsTrafficUsageResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsTrafficUsageResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


