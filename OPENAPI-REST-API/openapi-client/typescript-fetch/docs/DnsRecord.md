
# DnsRecord

A single DNS Record row for a Domain

## Properties

Name | Type
------------ | -------------
`id` | string
`domain_id` | string
`name` | string
`type` | [DnsRecordType](DnsRecordType.md)
`content` | string
`ttl` | string
`prio` | string
`disabled` | string
`ordername` | string
`auth` | string

## Example

```typescript
import type { DnsRecord } from ''

// TODO: Update the object below with actual values
const example = {
  "id": 472,
  "domain_id": 68,
  "name": hussfamily.com,
  "type": null,
  "content": cdns1.interserver.net,
  "ttl": 86400,
  "prio": 0,
  "disabled": 0,
  "ordername": null,
  "auth": 1,
} satisfies DnsRecord

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DnsRecord
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


