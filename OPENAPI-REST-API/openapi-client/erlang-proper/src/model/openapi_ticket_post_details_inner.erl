-module(openapi_ticket_post_details_inner).

-include("openapi.hrl").

-export([openapi_ticket_post_details_inner/0]).

-export([openapi_ticket_post_details_inner/1]).

-export_type([openapi_ticket_post_details_inner/0]).

-type openapi_ticket_post_details_inner() ::
  [ {'post_id', integer() }
  | {'date', binary() }
  | {'contents', binary() }
  | {'creator', binary() }
  | {'creator_email', binary() }
  | {'creator_name', binary() }
  | {'hasattachments', integer() }
  | {'attachment_download', binary() }
  ].


openapi_ticket_post_details_inner() ->
    openapi_ticket_post_details_inner([]).

openapi_ticket_post_details_inner(Fields) ->
  Default = [ {'post_id', integer() }
            , {'date', binary() }
            , {'contents', binary() }
            , {'creator', elements([<<"User">>, <<"Staff">>]) }
            , {'creator_email', binary() }
            , {'creator_name', binary() }
            , {'hasattachments', integer() }
            , {'attachment_download', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

