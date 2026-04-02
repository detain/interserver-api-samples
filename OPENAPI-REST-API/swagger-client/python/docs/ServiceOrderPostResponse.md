# ServiceOrderPostResponse

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_continue** | **bool** | Whether the order was accepted and can proceed to payment. | [optional] 
**errors** | **list[str]** | List of validation errors (empty on success). | [optional] 
**total_cost** | **str** | Total cost of the order. | [optional] 
**iid** | **str** | Primary invoice ID for payment. | [optional] 
**iids** | **list[str]** | All invoice identifiers associated with the order. | [optional] 
**real_iids** | **list[str]** | Numeric invoice IDs for use with billing endpoints. | [optional] 
**service_id** | **int** | The new service ID created by the order. | [optional] 
**invoice_description** | **str** | Human-readable description of the invoice. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

