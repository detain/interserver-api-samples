-module(openapi_dns_new_record).

-export([encode/1]).

-export_type([openapi_dns_new_record/0]).

-type openapi_dns_new_record() ::
    #{ 'name' := binary(),
       'type' := openapi_dns_record_type:openapi_dns_record_type(),
       'content' := binary(),
       'ttl' => integer(),
       'prio' => integer()
     }.

encode(#{ 'name' := Name,
          'type' := Type,
          'content' := Content,
          'ttl' := Ttl,
          'prio' := Prio
        }) ->
    #{ 'name' => Name,
       'type' => Type,
       'content' => Content,
       'ttl' => Ttl,
       'prio' => Prio
     }.
