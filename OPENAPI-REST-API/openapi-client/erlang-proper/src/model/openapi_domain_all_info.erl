-module(openapi_domain_all_info).

-include("openapi.hrl").

-export([openapi_domain_all_info/0]).

-export([openapi_domain_all_info/1]).

-export_type([openapi_domain_all_info/0]).

-type openapi_domain_all_info() ::
  [ {'_OPS_version', binary() }
  | {'attributes', openapi_domain_all_info_attributes:openapi_domain_all_info_attributes() }
  | {'object', binary() }
  | {'protocol', binary() }
  | {'response_text', binary() }
  | {'response_code', binary() }
  | {'action', binary() }
  | {'is_success', binary() }
  ].


openapi_domain_all_info() ->
    openapi_domain_all_info([]).

openapi_domain_all_info(Fields) ->
  Default = [ {'_OPS_version', binary() }
            , {'attributes', openapi_domain_all_info_attributes:openapi_domain_all_info_attributes() }
            , {'object', binary() }
            , {'protocol', binary() }
            , {'response_text', binary() }
            , {'response_code', binary() }
            , {'action', binary() }
            , {'is_success', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

