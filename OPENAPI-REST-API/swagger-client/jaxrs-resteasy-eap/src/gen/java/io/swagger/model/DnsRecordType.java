package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import io.swagger.v3.oas.annotations.media.Schema;
import com.fasterxml.jackson.annotation.JsonValue;
import javax.validation.constraints.*;
public enum DnsRecordType {
  A,
  A6,
  AAAA,
  AFSDB,
  ALIAS,
  CAA,
  CDNSKEY,
  CDS,
  CERT,
  CNAME,
  DHCID,
  DLV,
  DNSKEY,
  DNAME,
  DS,
  EUI48,
  EUI64,
  HINFO,
  IPSECKEY,
  KEY,
  KX,
  LOC,
  MAILA,
  MAILB,
  MINFO,
  MR,
  MX,
  NAPTR,
  NS,
  NSEC,
  NSEC3,
  NSEC3PARAM,
  OPENPGPKEY,
  OPT,
  PTR,
  RKEY,
  RP,
  RRSIG,
  SIG,
  SOA,
  SPF,
  SRV,
  SSHFP,
  TLSA,
  TKEY,
  TSIG,
  TXT,
  WKS,
  URI_;
}