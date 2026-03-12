-module(openapi_ticket_new).

-export([encode/1]).

-export_type([openapi_ticket_new/0]).

-type openapi_ticket_new() ::
    #{ 'subject' := binary(),
       'body' := binary(),
       'service_id' => integer(),
       'service_module' => binary()
     }.

encode(#{ 'subject' := Subject,
          'body' := Body,
          'service_id' := ServiceId,
          'service_module' := ServiceModule
        }) ->
    #{ 'subject' => Subject,
       'body' => Body,
       'service_id' => ServiceId,
       'service_module' => ServiceModule
     }.
