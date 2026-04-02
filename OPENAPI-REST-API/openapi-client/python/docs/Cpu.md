# Cpu

A CPU option available for dedicated server ordering.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **int** |  | [optional] 
**short_desc** | **str** |  | [optional] 
**long_desc** | **str** |  | [optional] 
**type** | **str** |  | [optional] 
**speed** | **str** |  | [optional] 
**num_cores** | **str** |  | [optional] 
**num_cpus** | **str** |  | [optional] 
**benchmark** | **str** |  | [optional] 
**monthly_price** | **float** |  | [optional] 
**monthly_price_display** | **str** |  | [optional] 
**max_ram** | **str** |  | [optional] 
**min_ram** | **str** |  | [optional] 
**max_lff** | **str** |  | [optional] 
**max_sff** | **str** |  | [optional] 
**max_nve** | **str** |  | [optional] 
**visible** | **str** |  | [optional] 
**active** | **str** |  | [optional] 

## Example

```python
from openapi_client.models.cpu import Cpu

# TODO update the JSON string below
json = "{}"
# create an instance of Cpu from a JSON string
cpu_instance = Cpu.from_json(json)
# print the JSON string representation of the object
print(Cpu.to_json())

# convert the object into a dict
cpu_dict = cpu_instance.to_dict()
# create an instance of Cpu from a dict
cpu_from_dict = Cpu.from_dict(cpu_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


