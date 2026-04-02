# CpuWithDefaults


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
**memory_det** | [**MemoryOption**](MemoryOption.md) |  | [optional] 
**hd_det** | [**HardDrive**](HardDrive.md) |  | [optional] 
**monthly_fee** | **str** |  | [optional] 

## Example

```python
from openapi_client.models.cpu_with_defaults import CpuWithDefaults

# TODO update the JSON string below
json = "{}"
# create an instance of CpuWithDefaults from a JSON string
cpu_with_defaults_instance = CpuWithDefaults.from_json(json)
# print the JSON string representation of the object
print(CpuWithDefaults.to_json())

# convert the object into a dict
cpu_with_defaults_dict = cpu_with_defaults_instance.to_dict()
# create an instance of CpuWithDefaults from a dict
cpu_with_defaults_from_dict = CpuWithDefaults.from_dict(cpu_with_defaults_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


