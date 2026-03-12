-module(openapi_domain_owner_contact).

-include("openapi.hrl").

-export([openapi_domain_owner_contact/0]).

-export([openapi_domain_owner_contact/1]).

-export_type([openapi_domain_owner_contact/0]).

-type openapi_domain_owner_contact() ::
  [ {'postal_code', binary() }
  | {'org_name', binary() }
  | {'country', binary() }
  | {'status', binary() }
  | {'state', binary() }
  | {'first_name', binary() }
  | {'last_name', binary() }
  | {'address3', binary() }
  | {'fax', binary() }
  | {'address2', binary() }
  | {'email', binary() }
  | {'city', binary() }
  | {'phone', binary() }
  | {'address1', binary() }
  ].


openapi_domain_owner_contact() ->
    openapi_domain_owner_contact([]).

openapi_domain_owner_contact(Fields) ->
  Default = [ {'postal_code', binary() }
            , {'org_name', binary() }
            , {'country', binary() }
            , {'status', binary() }
            , {'state', binary() }
            , {'first_name', binary() }
            , {'last_name', binary() }
            , {'address3', binary() }
            , {'fax', binary() }
            , {'address2', binary() }
            , {'email', binary() }
            , {'city', binary() }
            , {'phone', binary() }
            , {'address1', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

