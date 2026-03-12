-module(openapi_website_row).

-include("openapi.hrl").

-export([openapi_website_row/0]).

-export([openapi_website_row/1]).

-export_type([openapi_website_row/0]).

-type openapi_website_row() ::
  [ {'website_id', binary() }
  | {'website_hostname', binary() }
  | {'repeat_invoices_cost', binary() }
  | {'website_status', binary() }
  | {'services_name', binary() }
  | {'website_comment', binary() }
  ].


openapi_website_row() ->
    openapi_website_row([]).

openapi_website_row(Fields) ->
  Default = [ {'website_id', binary() }
            , {'website_hostname', binary() }
            , {'repeat_invoices_cost', binary() }
            , {'website_status', binary() }
            , {'services_name', binary() }
            , {'website_comment', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

