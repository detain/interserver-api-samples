# openapi.model.ServiceOrderPostResponse

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**continue_** | **bool** | Whether the order was accepted and can proceed to payment. | [optional] 
**errors** | **BuiltList&lt;String&gt;** | List of validation errors (empty on success). | [optional] 
**totalCost** | **String** | Total cost of the order. | [optional] 
**iid** | **String** | Primary invoice ID for payment. | [optional] 
**iids** | **BuiltList&lt;String&gt;** | All invoice identifiers associated with the order. | [optional] 
**realIids** | **BuiltList&lt;String&gt;** | Numeric invoice IDs for use with billing endpoints. | [optional] 
**serviceId** | **int** | The new service ID created by the order. | [optional] 
**invoiceDescription** | **String** | Human-readable description of the invoice. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


