-module(openapi_mail_attachment).

-export([encode/1]).

-export_type([openapi_mail_attachment/0]).

-type openapi_mail_attachment() ::
    #{ 'filename' := binary(),
       'data' := binary()
     }.

encode(#{ 'filename' := Filename,
          'data' := Data
        }) ->
    #{ 'filename' => Filename,
       'data' => Data
     }.
