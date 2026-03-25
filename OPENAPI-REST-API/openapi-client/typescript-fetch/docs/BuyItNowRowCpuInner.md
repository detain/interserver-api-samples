
# BuyItNowRowCpuInner


## Properties

Name | Type
------------ | -------------
`img` | string
`type` | string
`speed` | string
`num_cpus` | string
`num_cores` | string

## Example

```typescript
import type { BuyItNowRowCpuInner } from ''

// TODO: Update the object below with actual values
const example = {
  "img": xeon-e3.png,
  "type": XEON,
  "speed": ,
  "num_cpus": 1,
  "num_cores": 4,
} satisfies BuyItNowRowCpuInner

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BuyItNowRowCpuInner
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


