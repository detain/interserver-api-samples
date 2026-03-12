# OpenAPIClient::Object::ConfigLists

## Load the model package
```perl
use OpenAPIClient::Object::ConfigLists;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**cpu_li** | [**HASH[string,Cpu]**](Cpu.md) |  | [optional] 
**memory_li** | **HASH[string,HASH[string,MemoryOption]]** |  | [optional] 
**hd_li** | **HASH[string,HASH[string,HardDrive]]** |  | [optional] 
**bandwidth_li** | [**HASH[string,Bandwidth]**](Bandwidth.md) |  | [optional] 
**ips_li** | [**HASH[string,IpBlock]**](IpBlock.md) |  | [optional] 
**os_li** | [**HASH[string,OperatingSystem]**](OperatingSystem.md) |  | [optional] 
**cp_li** | [**HASH[string,ControlPanel]**](ControlPanel.md) |  | [optional] 
**raid_li** | [**ARRAY[RaidOption]**](RaidOption.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


