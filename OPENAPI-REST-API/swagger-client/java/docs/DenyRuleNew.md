# DenyRuleNew

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**user** | **String** | Mail account username that will be tied to this rule.  If not specified the first active mail order will be used. |  [optional]
**type** | [**TypeEnum**](#TypeEnum) | The type of deny rule. | 
**data** | **String** | The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com. | 

<a name="TypeEnum"></a>
## Enum: TypeEnum
Name | Value
---- | -----
DOMAIN | &quot;domain&quot;
EMAIL | &quot;email&quot;
STARTSWITH | &quot;startswith&quot;
DESTINATION | &quot;destination&quot;
