
# DnsUpdateRecord

The request data to update a dns record.

## Properties

Name | Type
------------ | -------------
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
import type { DnsUpdateRecord } from ''

// TODO: Update the object below with actual values
const example = {
  "name": null,
  "type": null,
  "content": null,
  "ttl": null,
  "prio": null,
  "disabled": null,
  "ordername": null,
  "auth": null,
} satisfies DnsUpdateRecord

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DnsUpdateRecord
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


