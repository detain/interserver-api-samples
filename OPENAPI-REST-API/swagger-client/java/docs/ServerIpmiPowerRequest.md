# ServerIpmiPowerRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**asset** | **Integer** | The Asset ID |  [optional]
**action** | [**ActionEnum**](#ActionEnum) | The power action to send to the ipmi controller. | 

<a name="ActionEnum"></a>
## Enum: ActionEnum
Name | Value
---- | -----
CYCLE | &quot;cycle&quot;
RESET | &quot;reset&quot;
ON | &quot;on&quot;
OFF | &quot;off&quot;
SOFT | &quot;soft&quot;
