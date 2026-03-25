
# StatusMonthlyBreakdown

Monthly mail delivery status breakdown, showing counts per status category.

## Properties

Name | Type
------------ | -------------
`_default` | [MonthlyCounts](MonthlyCounts.md)
`failed` | [MonthlyCounts](MonthlyCounts.md)
`rejected` | [MonthlyCounts](MonthlyCounts.md)
`pending` | [MonthlyCounts](MonthlyCounts.md)
`locked` | [MonthlyCounts](MonthlyCounts.md)
`paid` | [MonthlyCounts](MonthlyCounts.md)

## Example

```typescript
import type { StatusMonthlyBreakdown } from ''

// TODO: Update the object below with actual values
const example = {
  "_default": null,
  "failed": null,
  "rejected": null,
  "pending": null,
  "locked": null,
  "paid": null,
} satisfies StatusMonthlyBreakdown

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as StatusMonthlyBreakdown
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


