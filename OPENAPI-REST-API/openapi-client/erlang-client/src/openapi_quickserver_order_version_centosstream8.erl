-module(openapi_quickserver_order_version_centosstream8).

-export([encode/1]).

-export_type([openapi_quickserver_order_version_centosstream8/0]).

-type openapi_quickserver_order_version_centosstream8() ::
    #{ 'centosstream_8' => binary()
     }.

encode(#{ 'centosstream_8' := Centosstream8
        }) ->
    #{ 'centosstream-8' => Centosstream8
     }.
