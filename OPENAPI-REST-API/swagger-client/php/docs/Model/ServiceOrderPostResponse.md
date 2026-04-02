# ServiceOrderPostResponse

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**continue** | **bool** | Whether the order was accepted and can proceed to payment. | [optional] 
**errors** | **string[]** | List of validation errors (empty on success). | [optional] 
**totalCost** | **string** | Total cost of the order. | [optional] 
**iid** | **string** | Primary invoice ID for payment. | [optional] 
**iids** | **string[]** | All invoice identifiers associated with the order. | [optional] 
**realIids** | **string[]** | Numeric invoice IDs for use with billing endpoints. | [optional] 
**serviceId** | **int** | The new service ID created by the order. | [optional] 
**invoiceDescription** | **string** | Human-readable description of the invoice. | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

