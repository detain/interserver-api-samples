
# AccountInfoDataCc

Credit card information stored on the account.

## Properties

Name | Type
------------ | -------------
`cc` | string
`cc_exp` | string
`name` | string
`address` | string
`city` | string
`state` | string
`zip` | string
`country` | string
`maxmind_riskscore` | string
`maxmind` | [AccountInfoMaxMindResponse](AccountInfoMaxMindResponse.md)
`verified` | boolean

## Example

```typescript
import type { AccountInfoDataCc } from ''

// TODO: Update the object below with actual values
const example = {
  "cc": null,
  "cc_exp": null,
  "name": null,
  "address": null,
  "city": null,
  "state": null,
  "zip": null,
  "country": null,
  "maxmind_riskscore": null,
  "maxmind": null,
  "verified": null,
} satisfies AccountInfoDataCc

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as AccountInfoDataCc
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


