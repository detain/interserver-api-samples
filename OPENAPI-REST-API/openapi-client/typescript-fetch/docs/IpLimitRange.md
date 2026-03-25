
# IpLimitRange

The lower and upper bounds of an ip range.

## Properties

Name | Type
------------ | -------------
`start` | string
`end` | string

## Example

```typescript
import type { IpLimitRange } from ''

// TODO: Update the object below with actual values
const example = {
  "start": 1.2.3.0,
  "end": 1.2.3.255,
} satisfies IpLimitRange

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as IpLimitRange
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


