-module(openapi_email_address_name).

-include("openapi.hrl").

-export([openapi_email_address_name/0]).

-export([openapi_email_address_name/1]).

-export_type([openapi_email_address_name/0]).

-type openapi_email_address_name() ::
  [ {'email', binary() }
  | {'name', binary() }
  ].


openapi_email_address_name() ->
    openapi_email_address_name([]).

openapi_email_address_name(Fields) ->
  Default = [ {'email', binary() }
            , {'name', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

