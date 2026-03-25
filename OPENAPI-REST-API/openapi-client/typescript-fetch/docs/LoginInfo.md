
# LoginInfo

Basic information useful for rendering a login page.

## Properties

Name | Type
------------ | -------------
`captcha` | string
`counts` | [LoginServiceCounts](LoginServiceCounts.md)
`logo` | string
`language` | string

## Example

```typescript
import type { LoginInfo } from ''

// TODO: Update the object below with actual values
const example = {
  "captcha": data:image/jpeg;base64,/9j/,
  "counts": null,
  "logo": //my.interserver.net/images/logos/mystaging.png,
  "language": en-US,
} satisfies LoginInfo

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as LoginInfo
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


