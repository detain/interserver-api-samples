

# ConfigLists

All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.

## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**cpuLi** | [**Map&lt;String, Cpu&gt;**](Cpu.md) |  |  [optional] |
|**memoryLi** | **Map&lt;String, Map&lt;String, MemoryOption&gt;&gt;** |  |  [optional] |
|**hdLi** | **Map&lt;String, Map&lt;String, HardDrive&gt;&gt;** |  |  [optional] |
|**bandwidthLi** | [**Map&lt;String, Bandwidth&gt;**](Bandwidth.md) |  |  [optional] |
|**ipsLi** | [**Map&lt;String, IpBlock&gt;**](IpBlock.md) |  |  [optional] |
|**osLi** | [**Map&lt;String, OperatingSystem&gt;**](OperatingSystem.md) |  |  [optional] |
|**cpLi** | [**Map&lt;String, ControlPanel&gt;**](ControlPanel.md) |  |  [optional] |
|**raidLi** | [**List&lt;RaidOption&gt;**](RaidOption.md) |  |  [optional] |



