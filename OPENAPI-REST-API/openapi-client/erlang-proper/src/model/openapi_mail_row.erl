-module(openapi_mail_row).

-include("openapi.hrl").

-export([openapi_mail_row/0]).

-export([openapi_mail_row/1]).

-export_type([openapi_mail_row/0]).

-type openapi_mail_row() ::
  [ {'mail_id', binary() }
  | {'repeat_invoices_cost', binary() }
  | {'mail_username', binary() }
  | {'mail_status', binary() }
  | {'services_name', binary() }
  ].


openapi_mail_row() ->
    openapi_mail_row([]).

openapi_mail_row(Fields) ->
  Default = [ {'mail_id', binary() }
            , {'repeat_invoices_cost', binary() }
            , {'mail_username', binary() }
            , {'mail_status', binary() }
            , {'services_name', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

