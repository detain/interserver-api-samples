
# GetScrubIpDetails200ResponseFilterFirewallRulesInner


## Properties

Name | Type
------------ | -------------
`id` | string
`source_ip` | string
`destination_ip` | string
`protocol_id` | string
`source_port` | string
`destination_port` | string
`xdp_action` | string
`global_drop` | string

## Example

```typescript
import type { GetScrubIpDetails200ResponseFilterFirewallRulesInner } from ''

// TODO: Update the object below with actual values
const example = {
  "id": null,
  "source_ip": null,
  "destination_ip": null,
  "protocol_id": null,
  "source_port": null,
  "destination_port": null,
  "xdp_action": null,
  "global_drop": null,
} satisfies GetScrubIpDetails200ResponseFilterFirewallRulesInner

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as GetScrubIpDetails200ResponseFilterFirewallRulesInner
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


