# openapi.model.BuyItNowRow

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**serverId** | **String** | Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`. | [optional] 
**cpu** | [**BuiltList&lt;BuyItNowRowCpuInner&gt;**](BuyItNowRowCpuInner.md) |  | [optional] 
**memory** | **String** |  | [optional] 
**disk** | **BuiltMap&lt;String, String&gt;** |  | [optional] 
**bandwidth** | **String** |  | [optional] 
**ips** | **String** |  | [optional] 
**location** | **String** |  | [optional] 
**price** | **int** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


