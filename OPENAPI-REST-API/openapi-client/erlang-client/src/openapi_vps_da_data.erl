-module(openapi_vps_da_data).

-export([encode/1]).

-export_type([openapi_vps_da_data/0]).

-type openapi_vps_da_data() ::
    #{ 'free' => openapi_vps_da_license:openapi_vps_da_license()
     }.

encode(#{ 'free' := Free
        }) ->
    #{ 'free' => Free
     }.
