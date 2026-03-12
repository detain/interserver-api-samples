-module(openapi_domain_whois_privacy_request).

-include("openapi.hrl").

-export([openapi_domain_whois_privacy_request/0]).

-export([openapi_domain_whois_privacy_request/1]).

-export_type([openapi_domain_whois_privacy_request/0]).

-type openapi_domain_whois_privacy_request() ::
  [ {'func', binary() }
  | {'csrf_token', binary() }
  | {'domain_firstname', binary() }
  | {'domain_lastname', binary() }
  | {'domain_email', binary() }
  | {'domain_address', binary() }
  | {'domain_address2', binary() }
  | {'domain_address3', binary() }
  | {'domain_city', binary() }
  | {'domain_state', binary() }
  | {'domain_zip', binary() }
  | {'domain_country', binary() }
  | {'domain_phone', binary() }
  | {'domain_fax', binary() }
  | {'domain_company', binary() }
  | {'domain_extra', binary() }
  ].


openapi_domain_whois_privacy_request() ->
    openapi_domain_whois_privacy_request([]).

openapi_domain_whois_privacy_request(Fields) ->
  Default = [ {'func', binary() }
            , {'csrf_token', binary() }
            , {'domain_firstname', binary() }
            , {'domain_lastname', binary() }
            , {'domain_email', binary() }
            , {'domain_address', binary() }
            , {'domain_address2', binary() }
            , {'domain_address3', binary() }
            , {'domain_city', binary() }
            , {'domain_state', binary() }
            , {'domain_zip', binary() }
            , {'domain_country', binary() }
            , {'domain_phone', binary() }
            , {'domain_fax', binary() }
            , {'domain_company', binary() }
            , {'domain_extra', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

