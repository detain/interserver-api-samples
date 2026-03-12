-module(openapi_license_ip_info_row).

-include("openapi.hrl").

-export([openapi_license_ip_info_row/0]).

-export([openapi_license_ip_info_row/1]).

-export_type([openapi_license_ip_info_row/0]).

-type openapi_license_ip_info_row() ::
  [ {'desc', binary() }
  | {'value', binary() }
  ].


openapi_license_ip_info_row() ->
    openapi_license_ip_info_row([]).

openapi_license_ip_info_row(Fields) ->
  Default = [ {'desc', binary() }
            , {'value', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

