# DenyRuleNew

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**user** | [**kotlin.String**](.md) | Mail account username that will be tied to this rule.  If not specified the first active mail order will be used. |  [optional]
**type** | [**inline**](#Type) | The type of deny rule. | 
**&#x60;data&#x60;** | [**kotlin.String**](.md) | The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com. | 

<a name="Type"></a>
## Enum: type
Name | Value
---- | -----
type | domain, email, startswith, destination
