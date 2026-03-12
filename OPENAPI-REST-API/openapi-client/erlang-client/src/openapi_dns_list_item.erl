-module(openapi_dns_list_item).

-export([encode/1]).

-export_type([openapi_dns_list_item/0]).

-type openapi_dns_list_item() ::
    #{ 'id' => integer(),
       'name' => binary(),
       'content' => binary()
     }.

encode(#{ 'id' := Id,
          'name' := Name,
          'content' := Content
        }) ->
    #{ 'id' => Id,
       'name' => Name,
       'content' => Content
     }.
