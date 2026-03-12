-module(openapi_view_ticket_response).

-export([encode/1]).

-export_type([openapi_view_ticket_response/0]).

-type openapi_view_ticket_response() ::
    #{ 'success' := boolean(),
       'ticket' := openapi_ticket_details:openapi_ticket_details(),
       'ticket_custom_fields' => openapi_ticket_custom_field_details:openapi_ticket_custom_field_details(),
       'ticket_posts' => openapi_ticket_post_details:openapi_ticket_post_details()
     }.

encode(#{ 'success' := Success,
          'ticket' := Ticket,
          'ticket_custom_fields' := TicketCustomFields,
          'ticket_posts' := TicketPosts
        }) ->
    #{ 'success' => Success,
       'ticket' => Ticket,
       'ticket_custom_fields' => TicketCustomFields,
       'ticket_posts' => TicketPosts
     }.
