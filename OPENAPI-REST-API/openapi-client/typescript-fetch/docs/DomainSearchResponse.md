
# DomainSearchResponse

Lookup and suggestion results returned for a domain search.

## Properties

Name | Type
------------ | -------------
`success` | boolean
`response_text` | string
`response_time` | string
`lookup` | Array&lt;object&gt;
`suggest` | Array&lt;object&gt;
`tlds` | Array&lt;string&gt;

## Example

```typescript
import type { DomainSearchResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "success": null,
  "response_text": null,
  "response_time": null,
  "lookup": null,
  "suggest": null,
  "tlds": null,
} satisfies DomainSearchResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DomainSearchResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


