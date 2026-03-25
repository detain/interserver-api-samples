
# CreateFirewallRule

Create firewall rule for your ip

## Properties

Name | Type
------------ | -------------
`protocol_id` | number
`xdp_action` | number
`destination_port` | number
`source_ip` | string
`source_port` | number

## Example

```typescript
import type { CreateFirewallRule } from ''

// TODO: Update the object below with actual values
const example = {
  "protocol_id": 1,
  "xdp_action": 1,
  "destination_port": 22,
  "source_ip": 1.2.4.5,
  "source_port": 1302,
} satisfies CreateFirewallRule

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as CreateFirewallRule
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


