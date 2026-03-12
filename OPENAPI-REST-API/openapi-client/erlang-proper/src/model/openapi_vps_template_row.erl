-module(openapi_vps_template_row).

-include("openapi.hrl").

-export([openapi_vps_template_row/0]).

-export([openapi_vps_template_row/1]).

-export_type([openapi_vps_template_row/0]).

-type openapi_vps_template_row() ::
  [ {'template_id', binary() }
  | {'template_type', binary() }
  | {'template_os', binary() }
  | {'template_version', binary() }
  | {'template_bits', binary() }
  | {'template_file', binary() }
  | {'template_available', binary() }
  | {'template_name', binary() }
  | {'template_dir', binary() }
  ].


openapi_vps_template_row() ->
    openapi_vps_template_row([]).

openapi_vps_template_row(Fields) ->
  Default = [ {'template_id', binary() }
            , {'template_type', binary() }
            , {'template_os', binary() }
            , {'template_version', binary() }
            , {'template_bits', binary() }
            , {'template_file', binary() }
            , {'template_available', binary() }
            , {'template_name', binary() }
            , {'template_dir', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

