-module(openapi_view_ticket_response).

-include("openapi.hrl").

-export([openapi_view_ticket_response/0]).

-export([openapi_view_ticket_response/1]).

-export_type([openapi_view_ticket_response/0]).

-type openapi_view_ticket_response() ::
  [ {'success', boolean() }
  | {'ticket', openapi_ticket_details:openapi_ticket_details() }
  | {'ticket_custom_fields', openapi_ticket_custom_field_details:openapi_ticket_custom_field_details() }
  | {'ticket_posts', openapi_ticket_post_details:openapi_ticket_post_details() }
  ].


openapi_view_ticket_response() ->
    openapi_view_ticket_response([]).

openapi_view_ticket_response(Fields) ->
  Default = [ {'success', boolean() }
            , {'ticket', openapi_ticket_details:openapi_ticket_details() }
            , {'ticket_custom_fields', openapi_ticket_custom_field_details:openapi_ticket_custom_field_details() }
            , {'ticket_posts', openapi_ticket_post_details:openapi_ticket_post_details() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

