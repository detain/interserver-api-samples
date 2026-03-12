

# BillingVerifyCcRequest

Payload for verifying a credit card through the verification flow.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**idx** | **Int** | Card index to verify. |  [optional]
**cc_ccv2** | **String** | CVV code for verification. |  [optional]
**cc_amount1** | **String** | First micro-charge amount for verification. |  [optional]
**cc_amount2** | **String** | Second micro-charge amount for verification. |  [optional]
**terms** | **Boolean** | Whether terms were accepted for verification. |  [optional]



