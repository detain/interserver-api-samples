
# Home


## Properties

Name | Type
------------ | -------------
`last_login_ip` | string
`last_login` | string
`currency` | string
`amount` | string
`invoice_list` | number
`balance` | string
`full_name` | string
`email` | string
`tickets` | Array&lt;string&gt;
`ticketStatus` | [HomeTicketStatus](HomeTicketStatus.md)
`ticketStatusView` | [HomeTicketStatusView](HomeTicketStatusView.md)
`details` | [HomeDetails](HomeDetails.md)
`services` | [HomeServices](HomeServices.md)
`AFFILIATE_AMOUNT` | string

## Example

```typescript
import type { Home } from ''

// TODO: Update the object below with actual values
const example = {
  "last_login_ip": 99.88.77.66,
  "last_login": 14:58:pm - 17 Aug, 2023,
  "currency": $,
  "amount": $23.50,
  "invoice_list": 5,
  "balance": $0.60,
  "full_name": John,
  "email": user@domain.com,
  "tickets": null,
  "ticketStatus": null,
  "ticketStatusView": null,
  "details": null,
  "services": null,
  "AFFILIATE_AMOUNT": 100,
} satisfies Home

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as Home
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


