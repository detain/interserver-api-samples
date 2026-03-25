
# LoginSubmissionExample

The data to submit in the login request.

## Properties

Name | Type
------------ | -------------
`login` | string
`passwd` | string
`remember` | string
`g_recaptcha_response` | [LoginSubmissionExampleGRecaptchaResponse](LoginSubmissionExampleGRecaptchaResponse.md)
`tfa` | string

## Example

```typescript
import type { LoginSubmissionExample } from ''

// TODO: Update the object below with actual values
const example = {
  "login": null,
  "passwd": null,
  "remember": null,
  "g_recaptcha_response": null,
  "tfa": null,
} satisfies LoginSubmissionExample

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as LoginSubmissionExample
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


