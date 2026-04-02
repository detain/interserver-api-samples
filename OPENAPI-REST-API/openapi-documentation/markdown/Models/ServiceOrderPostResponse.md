# ServiceOrderPostResponse
## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
| **continue** | **Boolean** | Whether the order was accepted and can proceed to payment. | [optional] [default to null] |
| **errors** | **List** | List of validation errors (empty on success). | [optional] [default to null] |
| **total\_cost** | **String** | Total cost of the order. | [optional] [default to null] |
| **iid** | **String** | Primary invoice ID for payment. | [optional] [default to null] |
| **iids** | **List** | All invoice identifiers associated with the order. | [optional] [default to null] |
| **real\_iids** | **List** | Numeric invoice IDs for use with billing endpoints. | [optional] [default to null] |
| **serviceId** | **Integer** | The new service ID created by the order. | [optional] [default to null] |
| **invoice\_description** | **String** | Human-readable description of the invoice. | [optional] [default to null] |

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

