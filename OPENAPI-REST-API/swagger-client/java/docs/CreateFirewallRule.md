# CreateFirewallRule

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**destinationPort** | **Integer** |  |  [optional]
**sourceIp** | **String** | Source IP address to match. Use &#x27;0.0.0.0&#x27; to match any source. |  [optional]
**sourcePort** | **Integer** |  |  [optional]
**protocolId** | [**ProtocolIdEnum**](#ProtocolIdEnum) | 1 &#x3D; TCP, 2 &#x3D; UDP | 
**xdpAction** | [**XdpActionEnum**](#XdpActionEnum) | 1 &#x3D; Block,  0 &#x3D; Whitelist | 

<a name="ProtocolIdEnum"></a>
## Enum: ProtocolIdEnum
Name | Value
---- | -----
NUMBER_1 | 1
NUMBER_2 | 2

<a name="XdpActionEnum"></a>
## Enum: XdpActionEnum
Name | Value
---- | -----
NUMBER_0 | 0
NUMBER_1 | 1
