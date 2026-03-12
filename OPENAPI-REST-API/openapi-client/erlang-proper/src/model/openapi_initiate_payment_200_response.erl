-module(openapi_initiate_payment_200_response).

-include("openapi.hrl").

-export([openapi_initiate_payment_200_response/0]).

-export([openapi_initiate_payment_200_response/1]).

-export_type([openapi_initiate_payment_200_response/0]).

-type openapi_initiate_payment_200_response() ::
  [ {'type', binary() }
  | {'redirect', binary() }
  | {'action', binary() }
  | {'method', binary() }
  | {'items', map() }
  | {'text', binary() }
  ].


openapi_initiate_payment_200_response() ->
    openapi_initiate_payment_200_response([]).

openapi_initiate_payment_200_response(Fields) ->
  Default = [ {'type', elements([<<"redirect">>, <<"submit">>, <<"single">>]) }
            , {'redirect', binary() }
            , {'action', binary() }
            , {'method', binary() }
            , {'items', map() }
            , {'text', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

