# ConfigLists

All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**cpu_li** | [**Dict[str, Cpu]**](Cpu.md) |  | [optional] 
**memory_li** | **Dict[str, Dict[str, MemoryOption]]** |  | [optional] 
**hd_li** | **Dict[str, Dict[str, HardDrive]]** |  | [optional] 
**bandwidth_li** | [**Dict[str, Bandwidth]**](Bandwidth.md) |  | [optional] 
**ips_li** | [**Dict[str, IpBlock]**](IpBlock.md) |  | [optional] 
**os_li** | [**Dict[str, OperatingSystem]**](OperatingSystem.md) |  | [optional] 
**cp_li** | [**Dict[str, ControlPanel]**](ControlPanel.md) |  | [optional] 
**raid_li** | [**List[RaidOption]**](RaidOption.md) |  | [optional] 

## Example

```python
from openapi_client.models.config_lists import ConfigLists

# TODO update the JSON string below
json = "{}"
# create an instance of ConfigLists from a JSON string
config_lists_instance = ConfigLists.from_json(json)
# print the JSON string representation of the object
print(ConfigLists.to_json())

# convert the object into a dict
config_lists_dict = config_lists_instance.to_dict()
# create an instance of ConfigLists from a dict
config_lists_from_dict = ConfigLists.from_dict(config_lists_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


