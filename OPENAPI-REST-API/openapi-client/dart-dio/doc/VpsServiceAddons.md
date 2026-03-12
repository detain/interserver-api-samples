# openapi.model.VpsServiceAddons

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**hasCpanel** | **bool** | Whether a cPanel license is active on this VPS. | [optional] 
**hasDirectadmin** | **bool** | Whether a DirectAdmin license is active on this VPS. | [optional] 
**hasFantastico** | **bool** | Whether a Fantastico license is active on this VPS. | [optional] 
**hasSoftaculous** | **bool** | Whether a Softaculous license is active on this VPS. | [optional] 
**hasHdspace** | **bool** | Whether extra disk space has been added to this VPS. | [optional] 
**dedicatedIp** | **bool** | Whether a dedicated IP address is assigned to this VPS. | [optional] 
**extraIps** | **BuiltList&lt;String&gt;** | List of additional IPv4 addresses assigned to this VPS. | [optional] 
**extraIps6** | **BuiltList&lt;String&gt;** | List of additional IPv6 addresses assigned to this VPS. | [optional] 
**unpaidIps** | **BuiltList&lt;String&gt;** | List of IP addresses that have unpaid charges. | [optional] 
**ips** | **BuiltList&lt;String&gt;** | All IPv4 addresses assigned to this VPS. | [optional] 
**ips6** | **BuiltList&lt;String&gt;** | All IPv6 addresses assigned to this VPS. | [optional] 
**cpanelId** | **int** | The add-on service ID for the cPanel license. | [optional] 
**cost** | **int** | Total monthly add-on cost in cents. | [optional] 
**ids** | **BuiltList&lt;String&gt;** | List of add-on service IDs active on this VPS. | [optional] 
**rdata** | **BuiltList&lt;String&gt;** | Raw add-on data entries. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


