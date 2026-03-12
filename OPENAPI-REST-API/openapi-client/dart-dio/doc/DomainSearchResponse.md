# openapi.model.DomainSearchResponse

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**success** | **bool** | Indicates whether the registrar search succeeded. | [optional] 
**responseText** | **String** | Human-readable status text from the registrar. | [optional] 
**responseTime** | **String** | Response time as reported by the registrar. | [optional] 
**lookup** | [**BuiltList&lt;JsonObject&gt;**](JsonObject.md) | Availability lookup results for queried domains. | [optional] 
**suggest** | [**BuiltList&lt;JsonObject&gt;**](JsonObject.md) | Suggested alternative domains and availability data. | [optional] 
**tlds** | **BuiltList&lt;String&gt;** | TLDs evaluated during the search. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


