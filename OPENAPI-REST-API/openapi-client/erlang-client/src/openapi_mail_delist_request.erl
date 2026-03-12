-module(openapi_mail_delist_request).

-export([encode/1]).

-export_type([openapi_mail_delist_request/0]).

-type openapi_mail_delist_request() ::
    #{ 'unblock' => binary()
     }.

encode(#{ 'unblock' := Unblock
        }) ->
    #{ 'unblock' => Unblock
     }.
