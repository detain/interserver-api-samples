

# ServerIpmiPowerRequest

IPMI Power command for servers

## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**action** | [**ActionEnum**](#ActionEnum) | The power action to send to the ipmi controller. |  |
|**asset** | **Integer** | The Asset ID |  [optional] |



## Enum: ActionEnum

| Name | Value |
|---- | -----|
| CYCLE | &quot;cycle&quot; |
| RESET | &quot;reset&quot; |
| ON | &quot;on&quot; |
| OFF | &quot;off&quot; |
| SOFT | &quot;soft&quot; |



