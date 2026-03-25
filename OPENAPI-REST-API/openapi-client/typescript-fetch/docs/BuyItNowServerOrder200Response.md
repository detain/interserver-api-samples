
# BuyItNowServerOrder200Response


## Properties

Name | Type
------------ | -------------
`bandwidth` | [Array&lt;BuyItNowServerOrder200ResponseBandwidthInner&gt;](BuyItNowServerOrder200ResponseBandwidthInner.md)
`ips` | [Array&lt;BuyItNowServerOrder200ResponseIpsInner&gt;](BuyItNowServerOrder200ResponseIpsInner.md)
`os` | [Array&lt;BuyItNowServerOrder200ResponseOsInner&gt;](BuyItNowServerOrder200ResponseOsInner.md)
`cp` | [Array&lt;BuyItNowServerOrder200ResponseCpInner&gt;](BuyItNowServerOrder200ResponseCpInner.md)
`raid` | [Array&lt;BuyItNowServerOrder200ResponseRaidInner&gt;](BuyItNowServerOrder200ResponseRaidInner.md)

## Example

```typescript
import type { BuyItNowServerOrder200Response } from ''

// TODO: Update the object below with actual values
const example = {
  "bandwidth": null,
  "ips": null,
  "os": null,
  "cp": null,
  "raid": null,
} satisfies BuyItNowServerOrder200Response

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BuyItNowServerOrder200Response
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


