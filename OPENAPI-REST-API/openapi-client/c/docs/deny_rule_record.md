# deny_rule_record_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**type** | **interserver_management_api_deny_rule_record_TYPE_e** | The type of deny rule. | 
**data** | **char \*** | The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com. | 
**id** | **int** | The deny rule Id number. | 
**created** | **char \*** | the date the rule was created. | 
**user** | **char \*** | Mail account username that will be tied to this rule.  If not specified the first active mail order will be used. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


