
# QuickserverRow

A result row from the `Quickservers` `GET` request.

## Properties

Name | Type
------------ | -------------
`qs_id` | string
`qs_name` | string
`cost` | string
`qs_hostname` | string
`qs_status` | string
`qs_comment` | string

## Example

```typescript
import type { QuickserverRow } from ''

// TODO: Update the object below with actual values
const example = {
  "qs_id": 19504,
  "qs_name": Quickserver199,
  "cost": 65.00,
  "qs_hostname": qs19504,
  "qs_status": canceled,
  "qs_comment": ,
} satisfies QuickserverRow

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as QuickserverRow
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


