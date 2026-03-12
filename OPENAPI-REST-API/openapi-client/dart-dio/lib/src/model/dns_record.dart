//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/dns_record_type.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'dns_record.g.dart';

/// A single DNS Record row for a Domain
///
/// Properties:
/// * [id] - The ID of the DNS Record.
/// * [domainId] - The ID of the Domain this is a record of.
/// * [name] 
/// * [type] 
/// * [content] - The content of the record, such as the IP address or hsotname.
/// * [ttl] - Time To Live (seconds)
/// * [prio] - Priority
/// * [disabled] 
/// * [ordername] - Alternate name to use for sorting
/// * [auth] 
@BuiltValue()
abstract class DnsRecord implements Built<DnsRecord, DnsRecordBuilder> {
  /// The ID of the DNS Record.
  @BuiltValueField(wireName: r'id')
  String get id;

  /// The ID of the Domain this is a record of.
  @BuiltValueField(wireName: r'domain_id')
  String get domainId;

  @BuiltValueField(wireName: r'name')
  String get name;

  @BuiltValueField(wireName: r'type')
  DnsRecordType get type;
  // enum typeEnum {  A,  A6,  AAAA,  AFSDB,  ALIAS,  CAA,  CDNSKEY,  CDS,  CERT,  CNAME,  DHCID,  DLV,  DNSKEY,  DNAME,  DS,  EUI48,  EUI64,  HINFO,  IPSECKEY,  KEY,  KX,  LOC,  MAILA,  MAILB,  MINFO,  MR,  MX,  NAPTR,  NS,  NSEC,  NSEC3,  NSEC3PARAM,  OPENPGPKEY,  OPT,  PTR,  RKEY,  RP,  RRSIG,  SIG,  SOA,  SPF,  SRV,  SSHFP,  TLSA,  TKEY,  TSIG,  TXT,  WKS,  URI⏎,  };

  /// The content of the record, such as the IP address or hsotname.
  @BuiltValueField(wireName: r'content')
  String get content;

  /// Time To Live (seconds)
  @BuiltValueField(wireName: r'ttl')
  String get ttl;

  /// Priority
  @BuiltValueField(wireName: r'prio')
  String get prio;

  @BuiltValueField(wireName: r'disabled')
  String get disabled;

  /// Alternate name to use for sorting
  @BuiltValueField(wireName: r'ordername')
  String get ordername;

  @BuiltValueField(wireName: r'auth')
  String get auth;

  DnsRecord._();

  factory DnsRecord([void updates(DnsRecordBuilder b)]) = _$DnsRecord;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DnsRecordBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DnsRecord> get serializer => _$DnsRecordSerializer();
}

class _$DnsRecordSerializer implements PrimitiveSerializer<DnsRecord> {
  @override
  final Iterable<Type> types = const [DnsRecord, _$DnsRecord];

  @override
  final String wireName = r'DnsRecord';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DnsRecord object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'id';
    yield serializers.serialize(
      object.id,
      specifiedType: const FullType(String),
    );
    yield r'domain_id';
    yield serializers.serialize(
      object.domainId,
      specifiedType: const FullType(String),
    );
    yield r'name';
    yield serializers.serialize(
      object.name,
      specifiedType: const FullType(String),
    );
    yield r'type';
    yield serializers.serialize(
      object.type,
      specifiedType: const FullType(DnsRecordType),
    );
    yield r'content';
    yield serializers.serialize(
      object.content,
      specifiedType: const FullType(String),
    );
    yield r'ttl';
    yield serializers.serialize(
      object.ttl,
      specifiedType: const FullType(String),
    );
    yield r'prio';
    yield serializers.serialize(
      object.prio,
      specifiedType: const FullType(String),
    );
    yield r'disabled';
    yield serializers.serialize(
      object.disabled,
      specifiedType: const FullType(String),
    );
    yield r'ordername';
    yield serializers.serialize(
      object.ordername,
      specifiedType: const FullType(String),
    );
    yield r'auth';
    yield serializers.serialize(
      object.auth,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    DnsRecord object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DnsRecordBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.id = valueDes;
          break;
        case r'domain_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainId = valueDes;
          break;
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DnsRecordType),
          ) as DnsRecordType;
          result.type = valueDes;
          break;
        case r'content':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.content = valueDes;
          break;
        case r'ttl':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ttl = valueDes;
          break;
        case r'prio':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.prio = valueDes;
          break;
        case r'disabled':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.disabled = valueDes;
          break;
        case r'ordername':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ordername = valueDes;
          break;
        case r'auth':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.auth = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DnsRecord deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DnsRecordBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

