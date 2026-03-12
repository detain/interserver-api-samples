-module(openapi_home).

-include("openapi.hrl").

-export([openapi_home/0]).

-export([openapi_home/1]).

-export_type([openapi_home/0]).

-type openapi_home() ::
  [ {'last_login_ip', binary() }
  | {'last_login', binary() }
  | {'currency', binary() }
  | {'amount', binary() }
  | {'invoice_list', integer() }
  | {'balance', binary() }
  | {'full_name', binary() }
  | {'email', binary() }
  | {'tickets', list(binary()) }
  | {'ticketStatus', openapi_home_ticket_status:openapi_home_ticket_status() }
  | {'ticketStatusView', openapi_home_ticket_status_view:openapi_home_ticket_status_view() }
  | {'details', openapi_home_details:openapi_home_details() }
  | {'services', openapi_home_services:openapi_home_services() }
  | {'AFFILIATE_AMOUNT', binary() }
  ].


openapi_home() ->
    openapi_home([]).

openapi_home(Fields) ->
  Default = [ {'last_login_ip', binary() }
            , {'last_login', binary() }
            , {'currency', binary() }
            , {'amount', binary() }
            , {'invoice_list', integer() }
            , {'balance', binary() }
            , {'full_name', binary() }
            , {'email', binary() }
            , {'tickets', list(binary()) }
            , {'ticketStatus', openapi_home_ticket_status:openapi_home_ticket_status() }
            , {'ticketStatusView', openapi_home_ticket_status_view:openapi_home_ticket_status_view() }
            , {'details', openapi_home_details:openapi_home_details() }
            , {'services', openapi_home_services:openapi_home_services() }
            , {'AFFILIATE_AMOUNT', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

