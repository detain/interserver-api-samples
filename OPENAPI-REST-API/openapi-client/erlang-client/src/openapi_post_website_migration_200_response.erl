-module(openapi_post_website_migration_200_response).

-export([encode/1]).

-export_type([openapi_post_website_migration_200_response/0]).

-type openapi_post_website_migration_200_response() ::
    #{ 'text' => binary(),
       'ticket' => integer()
     }.

encode(#{ 'text' := Text,
          'ticket' := Ticket
        }) ->
    #{ 'text' => Text,
       'ticket' => Ticket
     }.
