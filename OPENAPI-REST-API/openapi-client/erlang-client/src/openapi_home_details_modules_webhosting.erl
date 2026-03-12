-module(openapi_home_details_modules_webhosting).

-export([encode/1]).

-export_type([openapi_home_details_modules_webhosting/0]).

-type openapi_home_details_modules_webhosting() ::
    #{ 'icon' => binary(),
       'view_link' => binary(),
       'heading' => binary(),
       'buy_link' => binary(),
       'list_link' => binary()
     }.

encode(#{ 'icon' := Icon,
          'view_link' := ViewLink,
          'heading' := Heading,
          'buy_link' := BuyLink,
          'list_link' := ListLink
        }) ->
    #{ 'icon' => Icon,
       'view_link' => ViewLink,
       'heading' => Heading,
       'buy_link' => BuyLink,
       'list_link' => ListLink
     }.
