# ServiceOrderPostResponse

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Continue_** | **bool** | Whether the order was accepted and can proceed to payment. | [optional] [default to null]
**Errors** | **[]string** | List of validation errors (empty on success). | [optional] [default to null]
**TotalCost** | **string** | Total cost of the order. | [optional] [default to null]
**Iid** | **string** | Primary invoice ID for payment. | [optional] [default to null]
**Iids** | **[]string** | All invoice identifiers associated with the order. | [optional] [default to null]
**RealIids** | **[]string** | Numeric invoice IDs for use with billing endpoints. | [optional] [default to null]
**ServiceId** | **int32** | The new service ID created by the order. | [optional] [default to null]
**InvoiceDescription** | **string** | Human-readable description of the invoice. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

