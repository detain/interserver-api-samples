
# AssetServer

A pre-configured asset server available for immediate provisioning.

## Properties

Name | Type
------------ | -------------
`id` | number
`Region` | string
`price` | string
`CPU` | [Array&lt;AssetServerCPUInner&gt;](AssetServerCPUInner.md)
`Memory` | [Array&lt;AssetServerCPUInner&gt;](AssetServerCPUInner.md)
`Bandwidth` | [Array&lt;AssetServerCPUInner&gt;](AssetServerCPUInner.md)
`IPs` | [Array&lt;AssetServerCPUInner&gt;](AssetServerCPUInner.md)
`HD` | { [key: string]: string; }

## Example

```typescript
import type { AssetServer } from ''

// TODO: Update the object below with actual values
const example = {
  "id": null,
  "Region": null,
  "price": null,
  "CPU": null,
  "Memory": null,
  "Bandwidth": null,
  "IPs": null,
  "HD": null,
} satisfies AssetServer

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as AssetServer
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


