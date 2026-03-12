-module(openapi_vps_cp_data).

-export([encode/1]).

-export_type([openapi_vps_cp_data/0]).

-type openapi_vps_cp_data() ::
    #{ 'name' => binary(),
       'cost' => integer()
     }.

encode(#{ 'name' := Name,
          'cost' := Cost
        }) ->
    #{ 'name' => Name,
       'cost' => Cost
     }.
