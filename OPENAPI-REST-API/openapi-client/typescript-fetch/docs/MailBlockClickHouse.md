
# MailBlockClickHouse

A block entry from the clickhouse mailblocks server.

## Properties

Name | Type
------------ | -------------
`date` | Date
`from` | string
`messageId` | string
`subject` | string
`to` | string

## Example

```typescript
import type { MailBlockClickHouse } from ''

// TODO: Update the object below with actual values
const example = {
  "date": null,
  "from": null,
  "messageId": null,
  "subject": null,
  "to": null,
} satisfies MailBlockClickHouse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailBlockClickHouse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


