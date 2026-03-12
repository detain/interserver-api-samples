-module(openapi_post_website_migration_request).

-include("openapi.hrl").

-export([openapi_post_website_migration_request/0]).

-export([openapi_post_website_migration_request/1]).

-export_type([openapi_post_website_migration_request/0]).

-type openapi_post_website_migration_request() ::
  [ {'custPortal', binary() }
  | {'regEmail', binary() }
  | {'password', binary() }
  | {'ctrlPanel', binary() }
  | {'ftpUsername', binary() }
  | {'ftpPassword', binary() }
  | {'siteBusyMig', binary() }
  | {'splReqMig', binary() }
  | {'domainReg', binary() }
  | {'dataMig', binary() }
  | {'domainRegPortal', binary() }
  | {'domainRegEmail', binary() }
  | {'domainRegPassword', binary() }
  ].


openapi_post_website_migration_request() ->
    openapi_post_website_migration_request([]).

openapi_post_website_migration_request(Fields) ->
  Default = [ {'custPortal', binary() }
            , {'regEmail', binary() }
            , {'password', binary() }
            , {'ctrlPanel', binary() }
            , {'ftpUsername', binary() }
            , {'ftpPassword', binary() }
            , {'siteBusyMig', binary() }
            , {'splReqMig', binary() }
            , {'domainReg', binary() }
            , {'dataMig', binary() }
            , {'domainRegPortal', binary() }
            , {'domainRegEmail', binary() }
            , {'domainRegPassword', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

