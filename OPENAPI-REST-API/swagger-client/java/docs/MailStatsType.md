# MailStatsType

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**time** | [**TimeEnum**](#TimeEnum) |  |  [optional]
**usage** | **Integer** |  |  [optional]
**currency** | **String** |  |  [optional]
**currencySymbol** | **String** |  |  [optional]
**cost** | **Double** |  |  [optional]
**received** | **Integer** |  |  [optional]
**sent** | **Integer** |  |  [optional]
**volume** | [**MailStatsTypeVolume**](MailStatsTypeVolume.md) |  |  [optional]

<a name="TimeEnum"></a>
## Enum: TimeEnum
Name | Value
---- | -----
ALL | &quot;all&quot;
BILLING | &quot;billing&quot;
MONTH | &quot;month&quot;
_7D | &quot;7d&quot;
_24H | &quot;24h&quot;
TODAY | &quot;today&quot;
_1H | &quot;1h&quot;
