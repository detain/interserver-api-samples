# ConfigIds

Internal configuration IDs mapped from the selected form values for a server order.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**memory** | **int** | Configuration ID for the selected memory option. | [optional] 
**hd** | **int** | Configuration ID for the selected hard drive option. | [optional] 
**bandwidth** | **int** | Configuration ID for the selected bandwidth option. | [optional] 
**ips** | **int** | Configuration ID for the selected IP block option. | [optional] 
**os** | **int** | Configuration ID for the selected operating system. | [optional] 
**cp** | **int** | Configuration ID for the selected control panel. | [optional] 
**raid** | **int** | Configuration ID for the selected RAID option. | [optional] 

## Example

```python
from openapi_client.models.config_ids import ConfigIds

# TODO update the JSON string below
json = "{}"
# create an instance of ConfigIds from a JSON string
config_ids_instance = ConfigIds.from_json(json)
# print the JSON string representation of the object
print(ConfigIds.to_json())

# convert the object into a dict
config_ids_dict = config_ids_instance.to_dict()
# create an instance of ConfigIds from a dict
config_ids_from_dict = ConfigIds.from_dict(config_ids_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


