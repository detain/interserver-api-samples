-module(openapi_floating_ips_cancel_200_response).

-include("openapi.hrl").

-export([openapi_floating_ips_cancel_200_response/0]).

-export([openapi_floating_ips_cancel_200_response/1]).

-export_type([openapi_floating_ips_cancel_200_response/0]).

-type openapi_floating_ips_cancel_200_response() ::
  [ {'success', boolean() }
  | {'text', binary() }
  ].


openapi_floating_ips_cancel_200_response() ->
    openapi_floating_ips_cancel_200_response([]).

openapi_floating_ips_cancel_200_response(Fields) ->
  Default = [ {'success', boolean() }
            , {'text', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

