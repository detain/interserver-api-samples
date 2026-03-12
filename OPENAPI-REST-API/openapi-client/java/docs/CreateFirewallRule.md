

# CreateFirewallRule

Create firewall rule for your ip

## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**protocolId** | [**ProtocolIdEnum**](#ProtocolIdEnum) | 1 &#x3D; TCP, 2 &#x3D; UDP |  |
|**xdpAction** | [**XdpActionEnum**](#XdpActionEnum) | 1 &#x3D; Block,  0 &#x3D; Whitelist |  |
|**destinationPort** | **Integer** |  |  [optional] |
|**sourceIp** | **String** |  |  [optional] |
|**sourcePort** | **Integer** |  |  [optional] |



## Enum: ProtocolIdEnum

| Name | Value |
|---- | -----|
| NUMBER_1 | 1 |
| NUMBER_2 | 2 |



## Enum: XdpActionEnum

| Name | Value |
|---- | -----|
| NUMBER_0 | 0 |
| NUMBER_1 | 1 |



