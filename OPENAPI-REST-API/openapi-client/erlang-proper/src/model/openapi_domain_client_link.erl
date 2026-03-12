-module(openapi_domain_client_link).

-include("openapi.hrl").

-export([openapi_domain_client_link/0]).

-export([openapi_domain_client_link/1]).

-export_type([openapi_domain_client_link/0]).

-type openapi_domain_client_link() ::
  [ {'label', binary() }
  | {'link', binary() }
  | {'icon', binary() }
  | {'icon_text', binary() }
  | {'help_text', binary() }
  ].


openapi_domain_client_link() ->
    openapi_domain_client_link([]).

openapi_domain_client_link(Fields) ->
  Default = [ {'label', binary() }
            , {'link', binary() }
            , {'icon', binary() }
            , {'icon_text', binary() }
            , {'help_text', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

