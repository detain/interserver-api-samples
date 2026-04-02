# HardDrive

A hard drive option available for a dedicated server configuration.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** |  | [optional] 
**short_desc** | **str** |  | [optional] 
**size** | **str** |  | [optional] 
**drive_type** | **str** |  | [optional] 
**monthly_price** | **float** |  | [optional] 
**monthly_price_display** | **str** |  | [optional] 

## Example

```python
from openapi_client.models.hard_drive import HardDrive

# TODO update the JSON string below
json = "{}"
# create an instance of HardDrive from a JSON string
hard_drive_instance = HardDrive.from_json(json)
# print the JSON string representation of the object
print(HardDrive.to_json())

# convert the object into a dict
hard_drive_dict = hard_drive_instance.to_dict()
# create an instance of HardDrive from a dict
hard_drive_from_dict = HardDrive.from_dict(hard_drive_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


