-module(openapi_quickserver_order_version).

-export([encode/1]).

-export_type([openapi_quickserver_order_version/0]).

-type openapi_quickserver_order_version() ::
    #{ 'centosstream_8' => openapi_quickserver_order_version_centosstream8:openapi_quickserver_order_version_centosstream8()
     }.

encode(#{ 'centosstream_8' := Centosstream8
        }) ->
    #{ 'centosstream-8' => Centosstream8
     }.
