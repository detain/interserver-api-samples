
# CreateGeoFirewallRule

Create firewall rule for your ip

## Properties

Name | Type
------------ | -------------
`xdp_action` | number
`destination_port` | number
`country_code` | number
`asn` | number

## Example

```typescript
import type { CreateGeoFirewallRule } from ''

// TODO: Update the object below with actual values
const example = {
  "xdp_action": 1,
  "destination_port": 22,
  "country_code": 10,
  "asn": 1331,
} satisfies CreateGeoFirewallRule

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as CreateGeoFirewallRule
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


