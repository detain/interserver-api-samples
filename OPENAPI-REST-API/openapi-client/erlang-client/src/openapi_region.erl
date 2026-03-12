-module(openapi_region).

-export([encode/1]).

-export_type([openapi_region/0]).

-type openapi_region() ::
    #{ 'region_id' => integer(),
       'region_name' => binary()
     }.

encode(#{ 'region_id' := RegionId,
          'region_name' := RegionName
        }) ->
    #{ 'region_id' => RegionId,
       'region_name' => RegionName
     }.
