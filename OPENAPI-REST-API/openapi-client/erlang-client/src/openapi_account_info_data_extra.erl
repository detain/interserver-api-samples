-module(openapi_account_info_data_extra).

-export([encode/1]).

-export_type([openapi_account_info_data_extra/0]).

-type openapi_account_info_data_extra() ::
    #{ 'private_whois' => binary()
     }.

encode(#{ 'private_whois' := PrivateWhois
        }) ->
    #{ 'private_whois' => PrivateWhois
     }.
