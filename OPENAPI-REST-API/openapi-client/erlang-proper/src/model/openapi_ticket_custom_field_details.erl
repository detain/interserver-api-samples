-module(openapi_ticket_custom_field_details).

-include("openapi.hrl").

-export([openapi_ticket_custom_field_details/0]).

-export([openapi_ticket_custom_field_details/1]).

-export_type([openapi_ticket_custom_field_details/0]).

-type openapi_ticket_custom_field_details() ::
  [ {'Customer_Server_Access', binary() }
  | {'Ip_Address', binary() }
  | {'Root_Password', binary() }
  | {'Sudo_User', binary() }
  | {'Sudo_Password', integer() }
  | {'Port', integer() }
  ].


openapi_ticket_custom_field_details() ->
    openapi_ticket_custom_field_details([]).

openapi_ticket_custom_field_details(Fields) ->
  Default = [ {'Customer Server Access', elements([<<"y">>, <<"n">>]) }
            , {'Ip Address', binary() }
            , {'Root Password', binary() }
            , {'Sudo User', binary() }
            , {'Sudo Password', integer() }
            , {'Port', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

