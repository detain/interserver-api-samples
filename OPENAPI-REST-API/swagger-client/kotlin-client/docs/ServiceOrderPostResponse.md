# ServiceOrderPostResponse

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**&#x60;continue&#x60;** | [**kotlin.Boolean**](.md) | Whether the order was accepted and can proceed to payment. |  [optional]
**errors** | [**kotlin.Array&lt;kotlin.String&gt;**](.md) | List of validation errors (empty on success). |  [optional]
**totalCost** | [**kotlin.String**](.md) | Total cost of the order. |  [optional]
**iid** | [**kotlin.String**](.md) | Primary invoice ID for payment. |  [optional]
**iids** | [**kotlin.Array&lt;kotlin.String&gt;**](.md) | All invoice identifiers associated with the order. |  [optional]
**realIids** | [**kotlin.Array&lt;kotlin.String&gt;**](.md) | Numeric invoice IDs for use with billing endpoints. |  [optional]
**serviceId** | [**kotlin.Int**](.md) | The new service ID created by the order. |  [optional]
**invoiceDescription** | [**kotlin.String**](.md) | Human-readable description of the invoice. |  [optional]
