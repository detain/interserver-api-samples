# mail_log_entry_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_id** | **int** | internal db id | 
**id** | **char \*** | mail id | 
**from** | **char \*** | from address | 
**to** | **char \*** | to address | 
**subject** | **char \*** | email subject | 
**created** | **char \*** | creation date | 
**time** | **int** | creation timestamp | 
**user** | **char \*** | user account | 
**transtype** | **char \*** | transaction type | 
**origin** | **char \*** | origin ip | 
**interface** | **char \*** | interface name | 
**sending_zone** | **char \*** | sending zone | 
**body_size** | **int** | email body size in bytes | 
**seq** | **int** | index of email in the to adderess list | 
**recipient** | **char \*** | to address this email is being sent to | 
**domain** | **char \*** | to address domain | 
**locked** | **int** | locked status | 
**lock_time** | **int** | lock timestamp | 
**assigned** | **char \*** | assigned server | 
**queued** | **char \*** | queued timestamp | 
**mx_hostname** | **char \*** | mx hostname | 
**response** | **char \*** | mail delivery response | 
**message_id** | **char \*** | message id | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


