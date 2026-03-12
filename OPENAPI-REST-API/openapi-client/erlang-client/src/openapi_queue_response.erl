-module(openapi_queue_response).

-export([encode/1]).

-export_type([openapi_queue_response/0]).

-type openapi_queue_response() ::
    #{ 'text' := binary(),
       'queueId' := integer()
     }.

encode(#{ 'text' := Text,
          'queueId' := QueueId
        }) ->
    #{ 'text' => Text,
       'queueId' => QueueId
     }.
