
# AffiliatePaymentSetup

Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.

## Properties

Name | Type
------------ | -------------
`affiliate_paypal` | string
`affiliate_payment_method` | string

## Example

```typescript
import type { AffiliatePaymentSetup } from ''

// TODO: Update the object below with actual values
const example = {
  "affiliate_paypal": null,
  "affiliate_payment_method": null,
} satisfies AffiliatePaymentSetup

console.log(example)

// Convert the instance to a JSON string
const exampleJSON: string = JSON.stringify(example)
console.log(exampleJSON)

// Parse the JSON string back to an object
const exampleParsed = JSON.parse(exampleJSON) as AffiliatePaymentSetup
console.log(exampleParsed)
```

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


