-module(openapi_dns_record_type).

-include("openapi.hrl").

-export([openapi_dns_record_type/0]).

-export_type([openapi_dns_record_type/0]).

-type openapi_dns_record_type() ::
  binary().

openapi_dns_record_type() ->
  elements([<<"A">>, <<"A6">>, <<"AAAA">>, <<"AFSDB">>, <<"ALIAS">>, <<"CAA">>, <<"CDNSKEY">>, <<"CDS">>, <<"CERT">>, <<"CNAME">>, <<"DHCID">>, <<"DLV">>, <<"DNSKEY">>, <<"DNAME">>, <<"DS">>, <<"EUI48">>, <<"EUI64">>, <<"HINFO">>, <<"IPSECKEY">>, <<"KEY">>, <<"KX">>, <<"LOC">>, <<"MAILA">>, <<"MAILB">>, <<"MINFO">>, <<"MR">>, <<"MX">>, <<"NAPTR">>, <<"NS">>, <<"NSEC">>, <<"NSEC3">>, <<"NSEC3PARAM">>, <<"OPENPGPKEY">>, <<"OPT">>, <<"PTR">>, <<"RKEY">>, <<"RP">>, <<"RRSIG">>, <<"SIG">>, <<"SOA">>, <<"SPF">>, <<"SRV">>, <<"SSHFP">>, <<"TLSA">>, <<"TKEY">>, <<"TSIG">>, <<"TXT">>, <<"WKS">>, <<"URI⏎">>]).

