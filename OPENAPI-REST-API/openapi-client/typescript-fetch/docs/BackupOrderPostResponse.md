
# BackupOrderPostResponse

Backup Order Placement Response

## Properties

Name | Type
------------ | -------------
`_continue` | boolean
`errors` | Array&lt;string&gt;
`total_cost` | string
`iid` | string
`iids` | Array&lt;string&gt;
`real_iids` | Array&lt;string&gt;
`serviceId` | number
`invoice_description` | string
`cj_params` | [BackupOrderPostResponseCjParams](BackupOrderPostResponseCjParams.md)

## Example

```typescript
import type { BackupOrderPostResponse } from ''

// TODO: Update the object below with actual values
const example = {
  "_continue": null,
  "errors": null,
  "total_cost": null,
  "iid": null,
  "iids": null,
  "real_iids": null,
  "serviceId": null,
  "invoice_description": null,
  "cj_params": null,
} satisfies BackupOrderPostResponse

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as BackupOrderPostResponse
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


