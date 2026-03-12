-module(openapi_reply_ticket_request).

-export([encode/1]).

-export_type([openapi_reply_ticket_request/0]).

-type openapi_reply_ticket_request() ::
    #{ 'content' => binary()
     }.

encode(#{ 'content' := Content
        }) ->
    #{ 'content' => Content
     }.
