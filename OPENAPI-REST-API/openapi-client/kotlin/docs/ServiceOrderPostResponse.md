
# ServiceOrderPostResponse

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **&#x60;continue&#x60;** | **kotlin.Boolean** | Whether the order was accepted and can proceed to payment. |  [optional] |
| **errors** | **kotlin.collections.List&lt;kotlin.String&gt;** | List of validation errors (empty on success). |  [optional] |
| **totalCost** | **kotlin.String** | Total cost of the order. |  [optional] |
| **iid** | **kotlin.String** | Primary invoice ID for payment. |  [optional] |
| **iids** | **kotlin.collections.List&lt;kotlin.String&gt;** | All invoice identifiers associated with the order. |  [optional] |
| **realIids** | **kotlin.collections.List&lt;kotlin.String&gt;** | Numeric invoice IDs for use with billing endpoints. |  [optional] |
| **serviceId** | **kotlin.Int** | The new service ID created by the order. |  [optional] |
| **invoiceDescription** | **kotlin.String** | Human-readable description of the invoice. |  [optional] |



