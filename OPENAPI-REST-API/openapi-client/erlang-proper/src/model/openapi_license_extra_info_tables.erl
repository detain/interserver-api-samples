-module(openapi_license_extra_info_tables).

-include("openapi.hrl").

-export([openapi_license_extra_info_tables/0]).

-export([openapi_license_extra_info_tables/1]).

-export_type([openapi_license_extra_info_tables/0]).

-type openapi_license_extra_info_tables() ::
  [ {'ip_info', openapi_license_ip_info:openapi_license_ip_info() }
  ].


openapi_license_extra_info_tables() ->
    openapi_license_extra_info_tables([]).

openapi_license_extra_info_tables(Fields) ->
  Default = [ {'ip_info', openapi_license_ip_info:openapi_license_ip_info() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

