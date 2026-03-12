-module(openapi_template_request).

-export([encode/1]).

-export_type([openapi_template_request/0]).

-type openapi_template_request() ::
    #{ 'template' := binary(),
       'password' => binary(),
       'localPassword' := binary()
     }.

encode(#{ 'template' := Template,
          'password' := Password,
          'localPassword' := LocalPassword
        }) ->
    #{ 'template' => Template,
       'password' => Password,
       'localPassword' => LocalPassword
     }.
