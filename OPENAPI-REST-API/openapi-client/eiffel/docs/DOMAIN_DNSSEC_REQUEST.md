# DOMAIN_DNSSEC_REQUEST

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**algorithm** | **LIST [INTEGER_32]** | List of DNSSEC algorithm IDs for each record. | [optional] [default to null]
**digest_type** | **LIST [INTEGER_32]** | List of digest type IDs for each record. | [optional] [default to null]
**digest** | [**LIST [STRING_32]**](STRING_32.md) | List of hex digests for each record. | [optional] [default to null]
**key_tag** | **LIST [INTEGER_32]** | List of key tag values corresponding to each record. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


