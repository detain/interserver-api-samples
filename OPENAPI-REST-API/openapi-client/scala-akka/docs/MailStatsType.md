

# MailStatsType

Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**time** | [**Time**](#Time) |  |  [optional]
**usage** | **Int** |  |  [optional]
**currency** | **String** |  |  [optional]
**currencySymbol** | **String** |  |  [optional]
**cost** | **Double** |  |  [optional]
**received** | **Int** |  |  [optional]
**sent** | **Int** |  |  [optional]
**volume** | [**MailStatsTypeVolume**](MailStatsTypeVolume.md) |  |  [optional]


## Enum: Time
Allowed values: [all, billing, month, 7d, 24h, today, 1h]




