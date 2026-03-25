
# DenyRuleRecord

The data for a email deny rule record.

## Properties

Name | Type
------------ | -------------
`type` | string
`data` | string
`id` | number
`created` | string
`user` | string

## Example

```typescript
import type { DenyRuleRecord } from ''

// TODO: Update the object below with actual values
const example = {
  "type": email,
  "data": domeinwo@server.guesshost.net,
  "id": 41124,
  "created": 2022-03-22 19:16:35,
  "user": mb20682,
} satisfies DenyRuleRecord

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as DenyRuleRecord
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


