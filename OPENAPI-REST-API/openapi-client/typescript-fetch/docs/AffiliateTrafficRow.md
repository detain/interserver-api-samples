
# AffiliateTrafficRow

Affiliate Web Traffic Entry

## Properties

Name | Type
------------ | -------------
`traffic_id` | string
`traffic_ip` | string
`traffic_url` | string
`traffic_affiliate` | string
`traffic_referrer` | string
`traffic_timestamp` | string

## Example

```typescript
import type { AffiliateTrafficRow } from ''

// TODO: Update the object below with actual values
const example = {
  "traffic_id": null,
  "traffic_ip": null,
  "traffic_url": null,
  "traffic_affiliate": null,
  "traffic_referrer": null,
  "traffic_timestamp": null,
} satisfies AffiliateTrafficRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as AffiliateTrafficRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


