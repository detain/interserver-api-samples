# swagger.model.MailLogEntry

## Load the model package
```dart
import 'package:swagger/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** | internal db id | [default to null]
**id** | **String** | mail id | [default to null]
**from** | **String** | from address | [default to null]
**to** | **String** | to address | [default to null]
**subject** | **String** | email subject | [default to null]
**messageId** | **String** | message id | [optional] [default to null]
**created** | **String** | creation date | [default to null]
**time** | **int** | creation timestamp | [default to null]
**user** | **String** | user account | [default to null]
**transtype** | **String** | transaction type | [default to null]
**origin** | **String** | origin ip | [default to null]
**interface** | **String** | interface name | [default to null]
**sendingZone** | **String** | sending zone | [default to null]
**bodySize** | **int** | email body size in bytes | [default to null]
**seq** | **int** | index of email in the to adderess list | [default to null]
**recipient** | **String** | to address this email is being sent to | [default to null]
**domain** | **String** | to address domain | [default to null]
**locked** | **int** | locked status | [default to null]
**lockTime** | **int** | lock timestamp | [default to null]
**assigned** | **String** | assigned server | [default to null]
**queued** | **String** | queued timestamp | [default to null]
**mxHostname** | **String** | mx hostname | [default to null]
**response** | **String** | mail delivery response | [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

