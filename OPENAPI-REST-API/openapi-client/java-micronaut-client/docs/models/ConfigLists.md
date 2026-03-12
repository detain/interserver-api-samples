

# ConfigLists

All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.

The class is defined in **[ConfigLists.java](../../src/main/java/org/openapitools/model/ConfigLists.java)**

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**cpuLi** | [`Map&lt;String, Cpu&gt;`](Cpu.md) |  |  [optional property]
**memoryLi** | `Map&lt;String, Map&lt;String, MemoryOption&gt;&gt;` |  |  [optional property]
**hdLi** | `Map&lt;String, Map&lt;String, HardDrive&gt;&gt;` |  |  [optional property]
**bandwidthLi** | [`Map&lt;String, Bandwidth&gt;`](Bandwidth.md) |  |  [optional property]
**ipsLi** | [`Map&lt;String, IpBlock&gt;`](IpBlock.md) |  |  [optional property]
**osLi** | [`Map&lt;String, OperatingSystem&gt;`](OperatingSystem.md) |  |  [optional property]
**cpLi** | [`Map&lt;String, ControlPanel&gt;`](ControlPanel.md) |  |  [optional property]
**raidLi** | [`List&lt;RaidOption&gt;`](RaidOption.md) |  |  [optional property]










