
# AccountInfoOauthConfig

OAuth integration configuration including callback URL and available providers.

## Properties

Name | Type
------------ | -------------
`callback` | string
`providers` | [AccountInfoOauthConfigProviders](AccountInfoOauthConfigProviders.md)

## Example

```typescript
import type { AccountInfoOauthConfig } from ''

// TODO: Update the object below with actual values
const example = {
  "callback": null,
  "providers": null,
} satisfies AccountInfoOauthConfig

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as AccountInfoOauthConfig
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


