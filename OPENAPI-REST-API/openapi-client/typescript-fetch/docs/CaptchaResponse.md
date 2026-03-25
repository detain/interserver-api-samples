
# CaptchaResponse

A base-64 encoded captcha image.

## Properties

Name | Type
------------ | -------------
`captcha` | string

## Example

```typescript
import type { CaptchaResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "captcha": data:image/jpeg;base64,/9j/4AAQ,
} satisfies CaptchaResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as CaptchaResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


