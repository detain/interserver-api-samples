-module(openapi_mail_stats_type_volume_to).

-include("openapi.hrl").

-export([openapi_mail_stats_type_volume_to/0]).

-export([openapi_mail_stats_type_volume_to/1]).

-export_type([openapi_mail_stats_type_volume_to/0]).

-type openapi_mail_stats_type_volume_to() ::
  [ {'clientdomain_com', integer() }
  | {'usersite_net', integer() }
  | {'salescompany_com', integer() }
  | {'clientanothersite_com', integer() }
  ].


openapi_mail_stats_type_volume_to() ->
    openapi_mail_stats_type_volume_to([]).

openapi_mail_stats_type_volume_to(Fields) ->
  Default = [ {'client@domain.com', integer() }
            , {'user@site.net', integer() }
            , {'sales@company.com', integer() }
            , {'client@anothersite.com', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

