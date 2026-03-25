
# CreateFilter

Create firewall rule for your ip

## Properties

Name | Type
------------ | -------------
`filter_type` | string
`port` | number

## Example

```typescript
import type { CreateFilter } from ''

// TODO: Update the object below with actual values
const example = {
  "filter_type": cs2_udp,
  "port": 8080,
} satisfies CreateFilter

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as CreateFilter
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


