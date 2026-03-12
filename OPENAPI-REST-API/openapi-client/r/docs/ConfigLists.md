# openapi::ConfigLists

All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**cpu_li** | [**map(Cpu)**](Cpu.md) |  | [optional] 
**memory_li** | [**map(map(MemoryOption))**](map.md) |  | [optional] 
**hd_li** | [**map(map(HardDrive))**](map.md) |  | [optional] 
**bandwidth_li** | [**map(Bandwidth)**](Bandwidth.md) |  | [optional] 
**ips_li** | [**map(IpBlock)**](IpBlock.md) |  | [optional] 
**os_li** | [**map(OperatingSystem)**](OperatingSystem.md) |  | [optional] 
**cp_li** | [**map(ControlPanel)**](ControlPanel.md) |  | [optional] 
**raid_li** | [**array[RaidOption]**](RaidOption.md) |  | [optional] 


