-module(openapi_create_filter).

-export([encode/1]).

-export_type([openapi_create_filter/0]).

-type openapi_create_filter() ::
    #{ 'filter_type' := binary(),
       'port' := integer()
     }.

encode(#{ 'filter_type' := FilterType,
          'port' := Port
        }) ->
    #{ 'filter_type' => FilterType,
       'port' => Port
     }.
