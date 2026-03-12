//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/dns_record_type.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'dns_new_record.g.dart';

/// Request data for a new DNS record.
///
/// Properties:
/// * [name] - Name part of record
/// * [type] 
/// * [content] - Content of record
/// * [ttl] - Time-to-live
/// * [prio] - Priority
@BuiltValue()
abstract class DnsNewRecord implements Built<DnsNewRecord, DnsNewRecordBuilder> {
  /// Name part of record
  @BuiltValueField(wireName: r'name')
  String get name;

  @BuiltValueField(wireName: r'type')
  DnsRecordType get type;
  // enum typeEnum {  A,  A6,  AAAA,  AFSDB,  ALIAS,  CAA,  CDNSKEY,  CDS,  CERT,  CNAME,  DHCID,  DLV,  DNSKEY,  DNAME,  DS,  EUI48,  EUI64,  HINFO,  IPSECKEY,  KEY,  KX,  LOC,  MAILA,  MAILB,  MINFO,  MR,  MX,  NAPTR,  NS,  NSEC,  NSEC3,  NSEC3PARAM,  OPENPGPKEY,  OPT,  PTR,  RKEY,  RP,  RRSIG,  SIG,  SOA,  SPF,  SRV,  SSHFP,  TLSA,  TKEY,  TSIG,  TXT,  WKS,  URI⏎,  };

  /// Content of record
  @BuiltValueField(wireName: r'content')
  String get content;

  /// Time-to-live
  @BuiltValueField(wireName: r'ttl')
  int? get ttl;

  /// Priority
  @BuiltValueField(wireName: r'prio')
  int? get prio;

  DnsNewRecord._();

  factory DnsNewRecord([void updates(DnsNewRecordBuilder b)]) = _$DnsNewRecord;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DnsNewRecordBuilder b) => b
      ..ttl = 86400
      ..prio = 0;

  @BuiltValueSerializer(custom: true)
  static Serializer<DnsNewRecord> get serializer => _$DnsNewRecordSerializer();
}

class _$DnsNewRecordSerializer implements PrimitiveSerializer<DnsNewRecord> {
  @override
  final Iterable<Type> types = const [DnsNewRecord, _$DnsNewRecord];

  @override
  final String wireName = r'DnsNewRecord';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DnsNewRecord object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
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
    if (object.ttl != null) {
      yield r'ttl';
      yield serializers.serialize(
        object.ttl,
        specifiedType: const FullType(int),
      );
    }
    if (object.prio != null) {
      yield r'prio';
      yield serializers.serialize(
        object.prio,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DnsNewRecord object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DnsNewRecordBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
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
            specifiedType: const FullType(int),
          ) as int;
          result.ttl = valueDes;
          break;
        case r'prio':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.prio = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DnsNewRecord deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DnsNewRecordBuilder();
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

