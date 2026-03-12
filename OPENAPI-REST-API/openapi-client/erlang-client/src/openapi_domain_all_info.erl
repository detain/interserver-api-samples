-module(openapi_domain_all_info).

-export([encode/1]).

-export_type([openapi_domain_all_info/0]).

-type openapi_domain_all_info() ::
    #{ '_OPS_version' => binary(),
       'attributes' => openapi_domain_all_info_attributes:openapi_domain_all_info_attributes(),
       'object' => binary(),
       'protocol' => binary(),
       'response_text' => binary(),
       'response_code' => binary(),
       'action' => binary(),
       'is_success' => binary()
     }.

encode(#{ '_OPS_version' := OPSVersion,
          'attributes' := Attributes,
          'object' := Object,
          'protocol' := Protocol,
          'response_text' := ResponseText,
          'response_code' := ResponseCode,
          'action' := Action,
          'is_success' := IsSuccess
        }) ->
    #{ '_OPS_version' => OPSVersion,
       'attributes' => Attributes,
       'object' => Object,
       'protocol' => Protocol,
       'response_text' => ResponseText,
       'response_code' => ResponseCode,
       'action' => Action,
       'is_success' => IsSuccess
     }.
