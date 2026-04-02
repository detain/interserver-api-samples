# MemoryOption

A memory (RAM) upgrade option available for a dedicated server configuration.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** |  | [optional] 
**short_desc** | **str** |  | [optional] 
**monthly_price** | **float** |  | [optional] 
**monthly_price_display** | **str** |  | [optional] 

## Example

```python
from openapi_client.models.memory_option import MemoryOption

# TODO update the JSON string below
json = "{}"
# create an instance of MemoryOption from a JSON string
memory_option_instance = MemoryOption.from_json(json)
# print the JSON string representation of the object
print(MemoryOption.to_json())

# convert the object into a dict
memory_option_dict = memory_option_instance.to_dict()
# create an instance of MemoryOption from a dict
memory_option_from_dict = MemoryOption.from_dict(memory_option_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


