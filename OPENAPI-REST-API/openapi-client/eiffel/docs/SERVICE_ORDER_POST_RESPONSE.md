# SERVICE_ORDER_POST_RESPONSE

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**continue** | **BOOLEAN** | Whether the order was accepted and can proceed to payment. | [optional] [default to null]
**errors** | [**LIST [STRING_32]**](STRING_32.md) | List of validation errors (empty on success). | [optional] [default to null]
**total_cost** | [**STRING_32**](STRING_32.md) | Total cost of the order. | [optional] [default to null]
**iid** | [**STRING_32**](STRING_32.md) | Primary invoice ID for payment. | [optional] [default to null]
**iids** | [**LIST [STRING_32]**](STRING_32.md) | All invoice identifiers associated with the order. | [optional] [default to null]
**real_iids** | [**LIST [STRING_32]**](STRING_32.md) | Numeric invoice IDs for use with billing endpoints. | [optional] [default to null]
**service_id** | **INTEGER_32** | The new service ID created by the order. | [optional] [default to null]
**invoice_description** | [**STRING_32**](STRING_32.md) | Human-readable description of the invoice. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


