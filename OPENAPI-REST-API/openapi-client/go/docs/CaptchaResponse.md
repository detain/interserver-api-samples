# CaptchaResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Captcha** | **string** | The base64 encoded captcha image. | 

## Methods

### NewCaptchaResponse

`func NewCaptchaResponse(captcha string, ) *CaptchaResponse`

NewCaptchaResponse instantiates a new CaptchaResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCaptchaResponseWithDefaults

`func NewCaptchaResponseWithDefaults() *CaptchaResponse`

NewCaptchaResponseWithDefaults instantiates a new CaptchaResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCaptcha

`func (o *CaptchaResponse) GetCaptcha() string`

GetCaptcha returns the Captcha field if non-nil, zero value otherwise.

### GetCaptchaOk

`func (o *CaptchaResponse) GetCaptchaOk() (*string, bool)`

GetCaptchaOk returns a tuple with the Captcha field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCaptcha

`func (o *CaptchaResponse) SetCaptcha(v string)`

SetCaptcha sets Captcha field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


