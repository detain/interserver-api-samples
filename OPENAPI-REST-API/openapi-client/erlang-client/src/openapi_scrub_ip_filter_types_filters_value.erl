-module(openapi_scrub_ip_filter_types_filters_value).

-export([encode/1]).

-export_type([openapi_scrub_ip_filter_types_filters_value/0]).

-type openapi_scrub_ip_filter_types_filters_value() ::
    #{ 'name' => binary(),
       'desc' => binary()
     }.

encode(#{ 'name' := Name,
          'desc' := Desc
        }) ->
    #{ 'name' => Name,
       'desc' => Desc
     }.
