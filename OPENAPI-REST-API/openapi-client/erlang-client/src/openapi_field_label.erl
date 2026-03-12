-module(openapi_field_label).

-export([encode/1]).

-export_type([openapi_field_label/0]).

-type openapi_field_label() ::
    #{ 'name' => binary(),
       'active' => integer()
     }.

encode(#{ 'name' := Name,
          'active' := Active
        }) ->
    #{ 'name' => Name,
       'active' => Active
     }.
