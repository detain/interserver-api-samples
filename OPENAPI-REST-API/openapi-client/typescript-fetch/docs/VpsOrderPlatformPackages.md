
# VpsOrderPlatformPackages

Platform Packages

## Properties

Name | Type
------------ | -------------
`kvm` | number
`kvmstorage` | number
`hyperv` | number

## Example

```typescript
import type { VpsOrderPlatformPackages } from ''

// TODO: Update the object below with actual values
const example = {
  "kvm": 32,
  "kvmstorage": 57,
  "hyperv": 54,
} satisfies VpsOrderPlatformPackages

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as VpsOrderPlatformPackages
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


