# MailLog

Mail log records

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**total** | **int** | total number of mail log entries | 
**skip** | **int** | number of emails skipped in listing | 
**limit** | **int** | number of emails to return | 
**emails** | [**List[MailLogEntry]**](MailLogEntry.md) |  | 

## Example

```python
from openapi_client.models.mail_log import MailLog

# TODO update the JSON string below
json = "{}"
# create an instance of MailLog from a JSON string
mail_log_instance = MailLog.from_json(json)
# print the JSON string representation of the object
print(MailLog.to_json())

# convert the object into a dict
mail_log_dict = mail_log_instance.to_dict()
# create an instance of MailLog from a dict
mail_log_from_dict = MailLog.from_dict(mail_log_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


