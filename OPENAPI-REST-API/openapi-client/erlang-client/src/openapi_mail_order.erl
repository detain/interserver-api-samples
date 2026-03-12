-module(openapi_mail_order).

-export([encode/1]).

-export_type([openapi_mail_order/0]).

-type openapi_mail_order() ::
    #{ 'id' := integer(),
       'status' := binary(),
       'username' := binary(),
       'comment' => binary()
     }.

encode(#{ 'id' := Id,
          'status' := Status,
          'username' := Username,
          'comment' := Comment
        }) ->
    #{ 'id' => Id,
       'status' => Status,
       'username' => Username,
       'comment' => Comment
     }.
