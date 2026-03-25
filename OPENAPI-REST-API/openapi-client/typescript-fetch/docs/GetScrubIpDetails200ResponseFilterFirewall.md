
# GetScrubIpDetails200ResponseFilterFirewall


## Properties

Name | Type
------------ | -------------
`rules` | [Array&lt;GetScrubIpDetails200ResponseFilterFirewallRulesInner&gt;](GetScrubIpDetails200ResponseFilterFirewallRulesInner.md)
`filters` | [Array&lt;GetScrubIpDetails200ResponseFilterFirewallFiltersInner&gt;](GetScrubIpDetails200ResponseFilterFirewallFiltersInner.md)
`scrub_enabled` | number

## Example

```typescript
import type { GetScrubIpDetails200ResponseFilterFirewall } from ''

// TODO: Update the object below with actual values
const example = {
  "rules": null,
  "filters": null,
  "scrub_enabled": null,
} satisfies GetScrubIpDetails200ResponseFilterFirewall

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as GetScrubIpDetails200ResponseFilterFirewall
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


