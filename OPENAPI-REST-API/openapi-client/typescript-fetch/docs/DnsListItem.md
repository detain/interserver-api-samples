
# DnsListItem

A DNS zone entry with its ID, domain name, and record content.

## Properties

Name | Type
------------ | -------------
`id` | number
`name` | string
`content` | string

## Example

```typescript
import type { DnsListItem } from ''

// TODO: Update the object below with actual values
const example = {
  "id": null,
  "name": null,
  "content": null,
} satisfies DnsListItem

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DnsListItem
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


