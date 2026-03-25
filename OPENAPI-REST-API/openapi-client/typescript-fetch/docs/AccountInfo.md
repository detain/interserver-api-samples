
# AccountInfo

Contains the full account profile including personal info, billing details, OAuth connections, and security settings.

## Properties

Name | Type
------------ | -------------
`custid` | string
`ima` | string
`data` | [AccountInfoData](AccountInfoData.md)
`ip` | string
`oauthproviders` | [AccountInfoOauthproviders](AccountInfoOauthproviders.md)
`oauthconfig` | [AccountInfoOauthConfig](AccountInfoOauthConfig.md)
`oauthadapters` | Array&lt;string&gt;
`limits` | [AccountInfoLimits](AccountInfoLimits.md)
`language` | string
`countryCurrencies` | [AccountInfoCountryCurrencies](AccountInfoCountryCurrencies.md)
`enableLocales` | boolean
`enableCurrencies` | boolean
`gravatar` | string

## Example

```typescript
import type { AccountInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "custid": null,
  "ima": null,
  "data": null,
  "ip": null,
  "oauthproviders": null,
  "oauthconfig": null,
  "oauthadapters": null,
  "limits": null,
  "language": null,
  "countryCurrencies": null,
  "enableLocales": null,
  "enableCurrencies": null,
  "gravatar": null,
} satisfies AccountInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as AccountInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


