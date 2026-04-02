# OpenAPIClient::AccountApi

## Load the API package
```perl
use OpenAPIClient::Object::AccountApi;
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**change_account_username**](AccountApi.md#change_account_username) | **POST** /account/username | Change Account Username
[**delete_account_oauth_name**](AccountApi.md#delete_account_oauth_name) | **DELETE** /account/oauth/{name} | Unlink OAuth Account
[**delete_account_tfa**](AccountApi.md#delete_account_tfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication
[**delete_ip_limit**](AccountApi.md#delete_ip_limit) | **PATCH** /account/iplimits | Remove IP Access Restriction
[**get_account_info**](AccountApi.md#get_account_info) | **GET** /account | Retrieve Account Details
[**get_account_tfa_setup**](AccountApi.md#get_account_tfa_setup) | **GET** /account/2fa | Get Two-Factor Setup Data
[**get_home**](AccountApi.md#get_home) | **GET** /home | Get Home Data
[**get_search**](AccountApi.md#get_search) | **GET** /search | Search Autocomplete
[**logout**](AccountApi.md#logout) | **GET** /logout | Log Out
[**logout_account_oauth**](AccountApi.md#logout_account_oauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth
[**update_account_api_key**](AccountApi.md#update_account_api_key) | **POST** /account/apikey | Generate New API Key
[**update_account_features**](AccountApi.md#update_account_features) | **POST** /account/features | Update Account Feature Flags
[**update_account_info**](AccountApi.md#update_account_info) | **POST** /account | Update Account Information
[**update_account_ip_limits**](AccountApi.md#update_account_ip_limits) | **POST** /account/iplimits | Add IP Access Restriction
[**update_account_password**](AccountApi.md#update_account_password) | **POST** /account/password | Change Account Password
[**update_account_ssh_key**](AccountApi.md#update_account_ssh_key) | **POST** /account/sshkey | Update SSH Keys
[**update_account_tfa**](AccountApi.md#update_account_tfa) | **POST** /account/2fa | Enable Two-Factor Authentication


# **change_account_username**
> TextResponse change_account_username()

Change Account Username

Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->change_account_username();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->change_account_username: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_account_oauth_name**
> SuccessTextResponse delete_account_oauth_name(name => $name)

Unlink OAuth Account

Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $name = "name_example"; # string | 

eval {
    my $result = $api_instance->delete_account_oauth_name(name => $name);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->delete_account_oauth_name: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_account_tfa**
> SuccessTextResponse delete_account_tfa()

Disable Two-Factor Authentication

Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->delete_account_tfa();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->delete_account_tfa: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_ip_limit**
> GenericResponse delete_ip_limit(ip_limit_range => $ip_limit_range)

Remove IP Access Restriction

Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $ip_limit_range = OpenAPIClient::Object::IpLimitRange->new(); # IpLimitRange | 

eval {
    my $result = $api_instance->delete_ip_limit(ip_limit_range => $ip_limit_range);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->delete_ip_limit: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ip_limit_range** | [**IpLimitRange**](IpLimitRange.md)|  | [optional] 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_account_info**
> AccountInfo get_account_info()

Retrieve Account Details

Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->get_account_info();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->get_account_info: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**AccountInfo**](AccountInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_account_tfa_setup**
> GetAccountTfaSetup200Response get_account_tfa_setup()

Get Two-Factor Setup Data

Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->get_account_tfa_setup();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->get_account_tfa_setup: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GetAccountTfaSetup200Response**](GetAccountTfaSetup200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_home**
> Home get_home()

Get Home Data

Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->get_home();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->get_home: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Home**](Home.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_search**
> SearchAutocompleteResponse get_search()

Search Autocomplete

Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->get_search();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->get_search: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SearchAutocompleteResponse**](SearchAutocompleteResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **logout**
> SuccessTextResponse logout()

Log Out

Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->logout();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->logout: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **logout_account_oauth**
> SuccessTextResponse logout_account_oauth(name => $name)

Logout of OAuth

Logs out of the specified OAuth provider session.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $name = "name_example"; # string | 

eval {
    my $result = $api_instance->logout_account_oauth(name => $name);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->logout_account_oauth: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_api_key**
> SuccessTextResponse update_account_api_key()

Generate New API Key

Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);


eval {
    my $result = $api_instance->update_account_api_key();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->update_account_api_key: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_features**
> SuccessTextResponse update_account_features(disable_reset => $disable_reset, disable_reinstall => $disable_reinstall)

Update Account Feature Flags

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $disable_reset = 56; # int | 
my $disable_reinstall = 56; # int | 

eval {
    my $result = $api_instance->update_account_features(disable_reset => $disable_reset, disable_reinstall => $disable_reinstall);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->update_account_features: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **disable_reset** | **int**|  | [optional] 
 **disable_reinstall** | **int**|  | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_info**
> SuccessTextResponse update_account_info(name => $name, address => $address, city => $city, state => $state, zip => $zip, country => $country, phone => $phone, company => $company, address2 => $address2, locale => $locale, email_invoices => $email_invoices, email_abuse => $email_abuse, disable_reset => $disable_reset, disable_reinstall => $disable_reinstall, disable_server_notifications => $disable_server_notifications, disable_email_notifications => $disable_email_notifications, gstin => $gstin)

Update Account Information

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $name = "name_example"; # string | Your name.
my $address = "address_example"; # string | Your address.
my $city = "city_example"; # string | Your city.
my $state = "state_example"; # string | Your state.
my $zip = "zip_example"; # string | Your ZIP code.
my $country = "country_example"; # string | Your country.
my $phone = "phone_example"; # string | Your phone number.
my $company = "company_example"; # string | Your company name.
my $address2 = "address2_example"; # string | Additional address information.
my $locale = "locale_example"; # string | Your preferred locale.
my $email_invoices = "email_invoices_example"; # string | Your email for invoice notifications.
my $email_abuse = "email_abuse_example"; # string | Your email for abuse notifications.
my $disable_reset = null; # boolean | Set to `true` to disable account resets, or `false` to enable them.
my $disable_reinstall = null; # boolean | Set to `true` to disable server reinstalls, or `false` to enable them.
my $disable_server_notifications = null; # boolean | Set to `true` to disable server notifications, or `false` to enable them.
my $disable_email_notifications = null; # boolean | Set to `true` to disable email notifications, or `false` to enable them.
my $gstin = "gstin_example"; # string | Your GST identification number (if applicable).

eval {
    my $result = $api_instance->update_account_info(name => $name, address => $address, city => $city, state => $state, zip => $zip, country => $country, phone => $phone, company => $company, address2 => $address2, locale => $locale, email_invoices => $email_invoices, email_abuse => $email_abuse, disable_reset => $disable_reset, disable_reinstall => $disable_reinstall, disable_server_notifications => $disable_server_notifications, disable_email_notifications => $disable_email_notifications, gstin => $gstin);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->update_account_info: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**| Your name. | 
 **address** | **string**| Your address. | 
 **city** | **string**| Your city. | 
 **state** | **string**| Your state. | 
 **zip** | **string**| Your ZIP code. | 
 **country** | **string**| Your country. | 
 **phone** | **string**| Your phone number. | 
 **company** | **string**| Your company name. | [optional] 
 **address2** | **string**| Additional address information. | [optional] 
 **locale** | **string**| Your preferred locale. | [optional] 
 **email_invoices** | **string**| Your email for invoice notifications. | [optional] 
 **email_abuse** | **string**| Your email for abuse notifications. | [optional] 
 **disable_reset** | **boolean**| Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. | [optional] 
 **disable_reinstall** | **boolean**| Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. | [optional] 
 **disable_server_notifications** | **boolean**| Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. | [optional] 
 **disable_email_notifications** | **boolean**| Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. | [optional] 
 **gstin** | **string**| Your GST identification number (if applicable). | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_ip_limits**
> SuccessTextResponse update_account_ip_limits(start => $start, end => $end)

Add IP Access Restriction

Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $start = "start_example"; # string | The begining (or first) IP address in the range.
my $end = "end_example"; # string | The ending (or last) IP address in the range.

eval {
    my $result = $api_instance->update_account_ip_limits(start => $start, end => $end);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->update_account_ip_limits: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **start** | **string**| The begining (or first) IP address in the range. | 
 **end** | **string**| The ending (or last) IP address in the range. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_password**
> TextResponse update_account_password(password => $password)

Change Account Password

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $password = "password_example"; # string | 

eval {
    my $result = $api_instance->update_account_password(password => $password);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->update_account_password: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **string**|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_ssh_key**
> SuccessTextResponse update_account_ssh_key(ssh_key => $ssh_key)

Update SSH Keys

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $ssh_key = "ssh_key_example"; # string | 

eval {
    my $result = $api_instance->update_account_ssh_key(ssh_key => $ssh_key);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->update_account_ssh_key: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ssh_key** | **string**|  | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_tfa**
> SuccessTextResponse update_account_tfa(_2fa_google_code => $_2fa_google_code)

Enable Two-Factor Authentication

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.

### Example
```perl
use Data::Dumper;
use OpenAPIClient::AccountApi;
my $api_instance = OpenAPIClient::AccountApi->new(

    # Configure API key authorization: sessionIdCookieAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
    # Configure API key authorization: apiKeyAuth
    api_key => {'X-API-KEY' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'X-API-KEY' => 'Bearer'},
    # Configure API key authorization: sessionIdHeaderAuth
    api_key => {'sessionid' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'sessionid' => 'Bearer'},
);

my $_2fa_google_code = "_2fa_google_code_example"; # string | The 6-digit verification code from your authenticator app.

eval {
    my $result = $api_instance->update_account_tfa(_2fa_google_code => $_2fa_google_code);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling AccountApi->update_account_tfa: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_2fa_google_code** | **string**| The 6-digit verification code from your authenticator app. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

