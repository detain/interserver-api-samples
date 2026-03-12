package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Type of DNS Record
 **/
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;

/**
 * Type of DNS Record
 */
public enum DnsRecordType {
  A("A"),
    A6("A6"),
    AAAA("AAAA"),
    AFSDB("AFSDB"),
    ALIAS("ALIAS"),
    CAA("CAA"),
    CDNSKEY("CDNSKEY"),
    CDS("CDS"),
    CERT("CERT"),
    CNAME("CNAME"),
    DHCID("DHCID"),
    DLV("DLV"),
    DNSKEY("DNSKEY"),
    DNAME("DNAME"),
    DS("DS"),
    EUI48("EUI48"),
    EUI64("EUI64"),
    HINFO("HINFO"),
    IPSECKEY("IPSECKEY"),
    KEY("KEY"),
    KX("KX"),
    LOC("LOC"),
    MAILA("MAILA"),
    MAILB("MAILB"),
    MINFO("MINFO"),
    MR("MR"),
    MX("MX"),
    NAPTR("NAPTR"),
    NS("NS"),
    NSEC("NSEC"),
    NSEC3("NSEC3"),
    NSEC3PARAM("NSEC3PARAM"),
    OPENPGPKEY("OPENPGPKEY"),
    OPT("OPT"),
    PTR("PTR"),
    RKEY("RKEY"),
    RP("RP"),
    RRSIG("RRSIG"),
    SIG("SIG"),
    SOA("SOA"),
    SPF("SPF"),
    SRV("SRV"),
    SSHFP("SSHFP"),
    TLSA("TLSA"),
    TKEY("TKEY"),
    TSIG("TSIG"),
    TXT("TXT"),
    WKS("WKS"),
    URI_("URI⏎");

  private String value;

  DnsRecordType(String value) {
    this.value = value;
  }

  @Override
  @JsonValue
  public String toString() {
    return String.valueOf(value);
  }

  @JsonCreator
  public static DnsRecordType fromValue(String text) {
    for (DnsRecordType b : DnsRecordType.values()) {
      if (String.valueOf(b.value).equals(text)) {
        return b;
      }
    }
    return null;
  }
}
