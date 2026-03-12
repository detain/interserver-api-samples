-module(openapi_domain_contact_details).

-include("openapi.hrl").

-export([openapi_domain_contact_details/0]).

-export([openapi_domain_contact_details/1]).

-export_type([openapi_domain_contact_details/0]).

-type openapi_domain_contact_details() ::
  [ {'status', binary() }
  | {'state', binary() }
  | {'org_name', binary() }
  | {'country', binary() }
  | {'postal_code', binary() }
  | {'email', binary() }
  | {'fax', binary() }
  | {'address2', binary() }
  | {'address3', binary() }
  | {'address1', binary() }
  | {'city', binary() }
  | {'phone', binary() }
  | {'first_name', binary() }
  | {'last_name', binary() }
  ].


openapi_domain_contact_details() ->
    openapi_domain_contact_details([]).

openapi_domain_contact_details(Fields) ->
  Default = [ {'status', binary() }
            , {'state', binary() }
            , {'org_name', binary() }
            , {'country', binary() }
            , {'postal_code', binary() }
            , {'email', binary() }
            , {'fax', binary() }
            , {'address2', binary() }
            , {'address3', binary() }
            , {'address1', binary() }
            , {'city', binary() }
            , {'phone', binary() }
            , {'first_name', binary() }
            , {'last_name', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

