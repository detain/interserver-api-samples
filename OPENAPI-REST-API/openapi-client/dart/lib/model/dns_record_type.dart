//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

/// Type of DNS Record
class DnsRecordType {
  /// Instantiate a new enum with the provided [value].
  const DnsRecordType._(this.value);

  /// The underlying value of this enum member.
  final String value;

  @override
  String toString() => value;

  String toJson() => value;

  static const A = DnsRecordType._(r'A');
  static const a6 = DnsRecordType._(r'A6');
  static const AAAA = DnsRecordType._(r'AAAA');
  static const AFSDB = DnsRecordType._(r'AFSDB');
  static const ALIAS = DnsRecordType._(r'ALIAS');
  static const CAA = DnsRecordType._(r'CAA');
  static const CDNSKEY = DnsRecordType._(r'CDNSKEY');
  static const CDS = DnsRecordType._(r'CDS');
  static const CERT = DnsRecordType._(r'CERT');
  static const CNAME = DnsRecordType._(r'CNAME');
  static const DHCID = DnsRecordType._(r'DHCID');
  static const DLV = DnsRecordType._(r'DLV');
  static const DNSKEY = DnsRecordType._(r'DNSKEY');
  static const DNAME = DnsRecordType._(r'DNAME');
  static const DS = DnsRecordType._(r'DS');
  static const eUI48 = DnsRecordType._(r'EUI48');
  static const eUI64 = DnsRecordType._(r'EUI64');
  static const HINFO = DnsRecordType._(r'HINFO');
  static const IPSECKEY = DnsRecordType._(r'IPSECKEY');
  static const KEY = DnsRecordType._(r'KEY');
  static const KX = DnsRecordType._(r'KX');
  static const LOC = DnsRecordType._(r'LOC');
  static const MAILA = DnsRecordType._(r'MAILA');
  static const MAILB = DnsRecordType._(r'MAILB');
  static const MINFO = DnsRecordType._(r'MINFO');
  static const MR = DnsRecordType._(r'MR');
  static const MX = DnsRecordType._(r'MX');
  static const NAPTR = DnsRecordType._(r'NAPTR');
  static const NS = DnsRecordType._(r'NS');
  static const NSEC = DnsRecordType._(r'NSEC');
  static const nSEC3 = DnsRecordType._(r'NSEC3');
  static const nSEC3PARAM = DnsRecordType._(r'NSEC3PARAM');
  static const OPENPGPKEY = DnsRecordType._(r'OPENPGPKEY');
  static const OPT = DnsRecordType._(r'OPT');
  static const PTR = DnsRecordType._(r'PTR');
  static const RKEY = DnsRecordType._(r'RKEY');
  static const RP = DnsRecordType._(r'RP');
  static const RRSIG = DnsRecordType._(r'RRSIG');
  static const SIG = DnsRecordType._(r'SIG');
  static const SOA = DnsRecordType._(r'SOA');
  static const SPF = DnsRecordType._(r'SPF');
  static const SRV = DnsRecordType._(r'SRV');
  static const SSHFP = DnsRecordType._(r'SSHFP');
  static const TLSA = DnsRecordType._(r'TLSA');
  static const TKEY = DnsRecordType._(r'TKEY');
  static const TSIG = DnsRecordType._(r'TSIG');
  static const TXT = DnsRecordType._(r'TXT');
  static const WKS = DnsRecordType._(r'WKS');
  static const uRI = DnsRecordType._(r'URI⏎');

  /// List of all possible values in this [enum][DnsRecordType].
  static const values = <DnsRecordType>[
    A,
    a6,
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
    eUI48,
    eUI64,
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
    nSEC3,
    nSEC3PARAM,
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
    uRI,
  ];

  static DnsRecordType? fromJson(dynamic value) => DnsRecordTypeTypeTransformer().decode(value);

  static List<DnsRecordType> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <DnsRecordType>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = DnsRecordType.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }
}

/// Transformation class that can [encode] an instance of [DnsRecordType] to String,
/// and [decode] dynamic data back to [DnsRecordType].
class DnsRecordTypeTypeTransformer {
  factory DnsRecordTypeTypeTransformer() => _instance ??= const DnsRecordTypeTypeTransformer._();

  const DnsRecordTypeTypeTransformer._();

  String encode(DnsRecordType data) => data.value;

  /// Decodes a [dynamic value][data] to a DnsRecordType.
  ///
  /// If [allowNull] is true and the [dynamic value][data] cannot be decoded successfully,
  /// then null is returned. However, if [allowNull] is false and the [dynamic value][data]
  /// cannot be decoded successfully, then an [UnimplementedError] is thrown.
  ///
  /// The [allowNull] is very handy when an API changes and a new enum value is added or removed,
  /// and users are still using an old app with the old code.
  DnsRecordType? decode(dynamic data, {bool allowNull = true}) {
    if (data != null) {
      switch (data) {
        case r'A': return DnsRecordType.A;
        case r'A6': return DnsRecordType.a6;
        case r'AAAA': return DnsRecordType.AAAA;
        case r'AFSDB': return DnsRecordType.AFSDB;
        case r'ALIAS': return DnsRecordType.ALIAS;
        case r'CAA': return DnsRecordType.CAA;
        case r'CDNSKEY': return DnsRecordType.CDNSKEY;
        case r'CDS': return DnsRecordType.CDS;
        case r'CERT': return DnsRecordType.CERT;
        case r'CNAME': return DnsRecordType.CNAME;
        case r'DHCID': return DnsRecordType.DHCID;
        case r'DLV': return DnsRecordType.DLV;
        case r'DNSKEY': return DnsRecordType.DNSKEY;
        case r'DNAME': return DnsRecordType.DNAME;
        case r'DS': return DnsRecordType.DS;
        case r'EUI48': return DnsRecordType.eUI48;
        case r'EUI64': return DnsRecordType.eUI64;
        case r'HINFO': return DnsRecordType.HINFO;
        case r'IPSECKEY': return DnsRecordType.IPSECKEY;
        case r'KEY': return DnsRecordType.KEY;
        case r'KX': return DnsRecordType.KX;
        case r'LOC': return DnsRecordType.LOC;
        case r'MAILA': return DnsRecordType.MAILA;
        case r'MAILB': return DnsRecordType.MAILB;
        case r'MINFO': return DnsRecordType.MINFO;
        case r'MR': return DnsRecordType.MR;
        case r'MX': return DnsRecordType.MX;
        case r'NAPTR': return DnsRecordType.NAPTR;
        case r'NS': return DnsRecordType.NS;
        case r'NSEC': return DnsRecordType.NSEC;
        case r'NSEC3': return DnsRecordType.nSEC3;
        case r'NSEC3PARAM': return DnsRecordType.nSEC3PARAM;
        case r'OPENPGPKEY': return DnsRecordType.OPENPGPKEY;
        case r'OPT': return DnsRecordType.OPT;
        case r'PTR': return DnsRecordType.PTR;
        case r'RKEY': return DnsRecordType.RKEY;
        case r'RP': return DnsRecordType.RP;
        case r'RRSIG': return DnsRecordType.RRSIG;
        case r'SIG': return DnsRecordType.SIG;
        case r'SOA': return DnsRecordType.SOA;
        case r'SPF': return DnsRecordType.SPF;
        case r'SRV': return DnsRecordType.SRV;
        case r'SSHFP': return DnsRecordType.SSHFP;
        case r'TLSA': return DnsRecordType.TLSA;
        case r'TKEY': return DnsRecordType.TKEY;
        case r'TSIG': return DnsRecordType.TSIG;
        case r'TXT': return DnsRecordType.TXT;
        case r'WKS': return DnsRecordType.WKS;
        case r'URI⏎': return DnsRecordType.uRI;
        default:
          if (!allowNull) {
            throw ArgumentError('Unknown enum value to decode: $data');
          }
      }
    }
    return null;
  }

  /// Singleton [DnsRecordTypeTypeTransformer] instance.
  static DnsRecordTypeTypeTransformer? _instance;
}

