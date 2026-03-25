
# DnsNewRecord

Request data for a new DNS record.

## Properties

Name | Type
------------ | -------------
`name` | string
`type` | [DnsRecordType](DnsRecordType.md)
`content` | string
`ttl` | number
`prio` | number

## Example

```typescript
import type { DnsNewRecord } from ''

// TODO: Update the object below with actual values
const example = {
  "name": myfamily.com,
  "type": null,
  "content": 127.0.0.1,
  "ttl": 86400,
  "prio": 0,
} satisfies DnsNewRecord

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DnsNewRecord
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


