
# MailSchema


## Properties

Name | Type
------------ | -------------
`serviceInfo` | [MailServiceInfo](MailServiceInfo.md)
`client_links` | [Array&lt;MailClientLink&gt;](MailClientLink.md)
`billingDetails` | [MailBillingDetails](MailBillingDetails.md)
`custCurrency` | string
`custCurrencySymbol` | string
`_package` | string
`extraInfoTables` | [MailSchemaExtraInfoTables](MailSchemaExtraInfoTables.md)
`serviceType` | [MailServiceType](MailServiceType.md)
`usage_count` | string
`serviceExtra` | Array&lt;string&gt;

## Example

```typescript
import type { MailSchema } from ''

// TODO: Update the object below with actual values
const example = {
  "serviceInfo": null,
  "client_links": null,
  "billingDetails": null,
  "custCurrency": USD,
  "custCurrencySymbol": $,
  "_package": MailBaby Mail,
  "extraInfoTables": null,
  "serviceType": null,
  "usage_count": 0,
  "serviceExtra": [],
} satisfies MailSchema

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as MailSchema
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


