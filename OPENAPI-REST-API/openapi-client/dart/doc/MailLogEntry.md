# openapi.model.MailLogEntry

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** | internal db id | 
**id** | **String** | mail id | 
**from** | **String** | from address | 
**to** | **String** | to address | 
**subject** | **String** | email subject | 
**created** | **String** | creation date | 
**time** | **int** | creation timestamp | 
**user** | **String** | user account | 
**transtype** | **String** | transaction type | 
**origin** | **String** | origin ip | 
**interface_** | **String** | interface name | 
**sendingZone** | **String** | sending zone | 
**bodySize** | **int** | email body size in bytes | 
**seq** | **int** | index of email in the to adderess list | 
**recipient** | **String** | to address this email is being sent to | 
**domain** | **String** | to address domain | 
**locked** | **int** | locked status | 
**lockTime** | **int** | lock timestamp | 
**assigned** | **String** | assigned server | 
**queued** | **String** | queued timestamp | 
**mxHostname** | **String** | mx hostname | 
**response** | **String** | mail delivery response | 
**messageId** | **String** | message id | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


