-module(openapi_website_backups_inner).

-export([encode/1]).

-export_type([openapi_website_backups_inner/0]).

-type openapi_website_backups_inner() ::
    #{ 'name' := binary(),
       'size' => integer()
     }.

encode(#{ 'name' := Name,
          'size' := Size
        }) ->
    #{ 'name' => Name,
       'size' => Size
     }.
