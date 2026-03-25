
# DeleteGeoFirewallRule

Delete geo firewall rule for your scrub ip

## Properties

Name | Type
------------ | -------------
`rule_id` | number

## Example

```typescript
import type { DeleteGeoFirewallRule } from ''

// TODO: Update the object below with actual values
const example = {
  "rule_id": 2045,
} satisfies DeleteGeoFirewallRule

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DeleteGeoFirewallRule
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


