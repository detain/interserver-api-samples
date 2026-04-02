# OperatingSystem

An operating system option available for server provisioning.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** |  | [optional] 
**short_desc** | **str** |  | [optional] 
**monthly_price** | **float** |  | [optional] 

## Example

```python
from openapi_client.models.operating_system import OperatingSystem

# TODO update the JSON string below
json = "{}"
# create an instance of OperatingSystem from a JSON string
operating_system_instance = OperatingSystem.from_json(json)
# print the JSON string representation of the object
print(OperatingSystem.to_json())

# convert the object into a dict
operating_system_dict = operating_system_instance.to_dict()
# create an instance of OperatingSystem from a dict
operating_system_from_dict = OperatingSystem.from_dict(operating_system_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


