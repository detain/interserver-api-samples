# ConfigLists

All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**cpu_li** | [**{ [key: string]: Cpu; }**](Cpu.md) |  | [optional] [default to undefined]
**memory_li** | **{ [key: string]: { [key: string]: MemoryOption; }; }** |  | [optional] [default to undefined]
**hd_li** | **{ [key: string]: { [key: string]: HardDrive; }; }** |  | [optional] [default to undefined]
**bandwidth_li** | [**{ [key: string]: Bandwidth; }**](Bandwidth.md) |  | [optional] [default to undefined]
**ips_li** | [**{ [key: string]: IpBlock; }**](IpBlock.md) |  | [optional] [default to undefined]
**os_li** | [**{ [key: string]: OperatingSystem; }**](OperatingSystem.md) |  | [optional] [default to undefined]
**cp_li** | [**{ [key: string]: ControlPanel; }**](ControlPanel.md) |  | [optional] [default to undefined]
**raid_li** | [**Array&lt;RaidOption&gt;**](RaidOption.md) |  | [optional] [default to undefined]

## Example

```typescript
import { ConfigLists } from './api';

const instance: ConfigLists = {
    cpu_li,
    memory_li,
    hd_li,
    bandwidth_li,
    ips_li,
    os_li,
    cp_li,
    raid_li,
};
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)
