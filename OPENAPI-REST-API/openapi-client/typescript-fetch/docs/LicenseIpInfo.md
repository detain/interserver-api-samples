
# LicenseIpInfo

IP address information table for a software license service.

## Properties

Name | Type
------------ | -------------
`title` | string
`rows` | [Array&lt;LicenseIpInfoRow&gt;](LicenseIpInfoRow.md)

## Example

```typescript
import type { LicenseIpInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "title": IP Information,
  "rows": null,
} satisfies LicenseIpInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as LicenseIpInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


