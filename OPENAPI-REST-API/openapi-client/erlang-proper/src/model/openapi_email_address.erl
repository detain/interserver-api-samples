-module(openapi_email_address).

-include("openapi.hrl").

-export([openapi_email_address/0]).

-export([openapi_email_address/1]).

-export_type([openapi_email_address/0]).

-type openapi_email_address() ::
  [ {'email', binary() }
  ].


openapi_email_address() ->
    openapi_email_address([]).

openapi_email_address(Fields) ->
  Default = [ {'email', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

