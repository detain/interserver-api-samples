package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Type of DNS Record
 **/
@XmlType(name="")
@XmlEnum(.class)
public enum  {

    @XmlEnumValue("A") A(.valueOf("A")), @XmlEnumValue("A6") A6(.valueOf("A6")), @XmlEnumValue("AAAA") AAAA(.valueOf("AAAA")), @XmlEnumValue("AFSDB") AFSDB(.valueOf("AFSDB")), @XmlEnumValue("ALIAS") ALIAS(.valueOf("ALIAS")), @XmlEnumValue("CAA") CAA(.valueOf("CAA")), @XmlEnumValue("CDNSKEY") CDNSKEY(.valueOf("CDNSKEY")), @XmlEnumValue("CDS") CDS(.valueOf("CDS")), @XmlEnumValue("CERT") CERT(.valueOf("CERT")), @XmlEnumValue("CNAME") CNAME(.valueOf("CNAME")), @XmlEnumValue("DHCID") DHCID(.valueOf("DHCID")), @XmlEnumValue("DLV") DLV(.valueOf("DLV")), @XmlEnumValue("DNSKEY") DNSKEY(.valueOf("DNSKEY")), @XmlEnumValue("DNAME") DNAME(.valueOf("DNAME")), @XmlEnumValue("DS") DS(.valueOf("DS")), @XmlEnumValue("EUI48") EUI48(.valueOf("EUI48")), @XmlEnumValue("EUI64") EUI64(.valueOf("EUI64")), @XmlEnumValue("HINFO") HINFO(.valueOf("HINFO")), @XmlEnumValue("IPSECKEY") IPSECKEY(.valueOf("IPSECKEY")), @XmlEnumValue("KEY") KEY(.valueOf("KEY")), @XmlEnumValue("KX") KX(.valueOf("KX")), @XmlEnumValue("LOC") LOC(.valueOf("LOC")), @XmlEnumValue("MAILA") MAILA(.valueOf("MAILA")), @XmlEnumValue("MAILB") MAILB(.valueOf("MAILB")), @XmlEnumValue("MINFO") MINFO(.valueOf("MINFO")), @XmlEnumValue("MR") MR(.valueOf("MR")), @XmlEnumValue("MX") MX(.valueOf("MX")), @XmlEnumValue("NAPTR") NAPTR(.valueOf("NAPTR")), @XmlEnumValue("NS") NS(.valueOf("NS")), @XmlEnumValue("NSEC") NSEC(.valueOf("NSEC")), @XmlEnumValue("NSEC3") NSEC3(.valueOf("NSEC3")), @XmlEnumValue("NSEC3PARAM") NSEC3PARAM(.valueOf("NSEC3PARAM")), @XmlEnumValue("OPENPGPKEY") OPENPGPKEY(.valueOf("OPENPGPKEY")), @XmlEnumValue("OPT") OPT(.valueOf("OPT")), @XmlEnumValue("PTR") PTR(.valueOf("PTR")), @XmlEnumValue("RKEY") RKEY(.valueOf("RKEY")), @XmlEnumValue("RP") RP(.valueOf("RP")), @XmlEnumValue("RRSIG") RRSIG(.valueOf("RRSIG")), @XmlEnumValue("SIG") SIG(.valueOf("SIG")), @XmlEnumValue("SOA") SOA(.valueOf("SOA")), @XmlEnumValue("SPF") SPF(.valueOf("SPF")), @XmlEnumValue("SRV") SRV(.valueOf("SRV")), @XmlEnumValue("SSHFP") SSHFP(.valueOf("SSHFP")), @XmlEnumValue("TLSA") TLSA(.valueOf("TLSA")), @XmlEnumValue("TKEY") TKEY(.valueOf("TKEY")), @XmlEnumValue("TSIG") TSIG(.valueOf("TSIG")), @XmlEnumValue("TXT") TXT(.valueOf("TXT")), @XmlEnumValue("WKS") WKS(.valueOf("WKS")), @XmlEnumValue("URI⏎") URI_(.valueOf("URI⏎"));


    private  value;

     ( v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static  fromValue(String v) {
        for (DnsRecordType b : DnsRecordType.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
