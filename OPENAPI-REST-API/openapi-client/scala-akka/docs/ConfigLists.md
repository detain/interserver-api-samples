

# ConfigLists

All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**cpu_li** | [**Map&lt;String, Cpu&gt;**](Cpu.md) |  |  [optional]
**memory_li** | **Map&lt;String, Map[String, MemoryOption]&gt;** |  |  [optional]
**hd_li** | **Map&lt;String, Map[String, HardDrive]&gt;** |  |  [optional]
**bandwidth_li** | [**Map&lt;String, Bandwidth&gt;**](Bandwidth.md) |  |  [optional]
**ips_li** | [**Map&lt;String, IpBlock&gt;**](IpBlock.md) |  |  [optional]
**os_li** | [**Map&lt;String, OperatingSystem&gt;**](OperatingSystem.md) |  |  [optional]
**cp_li** | [**Map&lt;String, ControlPanel&gt;**](ControlPanel.md) |  |  [optional]
**raid_li** | [**Seq&lt;RaidOption&gt;**](RaidOption.md) |  |  [optional]



