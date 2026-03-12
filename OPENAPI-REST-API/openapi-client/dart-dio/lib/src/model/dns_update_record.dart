//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/dns_record_type.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'dns_update_record.g.dart';

/// The request data to update a dns record.
///
/// Properties:
/// * [name] 
/// * [type] 
/// * [content] 
/// * [ttl] 
/// * [prio] 
/// * [disabled] 
/// * [ordername] 
/// * [auth] 
@BuiltValue()
abstract class DnsUpdateRecord implements Built<DnsUpdateRecord, DnsUpdateRecordBuilder> {
  @BuiltValueField(wireName: r'name')
  String? get name;

  @BuiltValueField(wireName: r'type')
  DnsRecordType? get type;
  // enum typeEnum {  A,  A6,  AAAA,  AFSDB,  ALIAS,  CAA,  CDNSKEY,  CDS,  CERT,  CNAME,  DHCID,  DLV,  DNSKEY,  DNAME,  DS,  EUI48,  EUI64,  HINFO,  IPSECKEY,  KEY,  KX,  LOC,  MAILA,  MAILB,  MINFO,  MR,  MX,  NAPTR,  NS,  NSEC,  NSEC3,  NSEC3PARAM,  OPENPGPKEY,  OPT,  PTR,  RKEY,  RP,  RRSIG,  SIG,  SOA,  SPF,  SRV,  SSHFP,  TLSA,  TKEY,  TSIG,  TXT,  WKS,  URI⏎,  };

  @BuiltValueField(wireName: r'content')
  String? get content;

  @BuiltValueField(wireName: r'ttl')
  String? get ttl;

  @BuiltValueField(wireName: r'prio')
  String? get prio;

  @BuiltValueField(wireName: r'disabled')
  String? get disabled;

  @BuiltValueField(wireName: r'ordername')
  String? get ordername;

  @BuiltValueField(wireName: r'auth')
  String? get auth;

  DnsUpdateRecord._();

  factory DnsUpdateRecord([void updates(DnsUpdateRecordBuilder b)]) = _$DnsUpdateRecord;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DnsUpdateRecordBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DnsUpdateRecord> get serializer => _$DnsUpdateRecordSerializer();
}

class _$DnsUpdateRecordSerializer implements PrimitiveSerializer<DnsUpdateRecord> {
  @override
  final Iterable<Type> types = const [DnsUpdateRecord, _$DnsUpdateRecord];

  @override
  final String wireName = r'DnsUpdateRecord';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DnsUpdateRecord object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
        specifiedType: const FullType(String),
      );
    }
    if (object.type != null) {
      yield r'type';
      yield serializers.serialize(
        object.type,
        specifiedType: const FullType(DnsRecordType),
      );
    }
    if (object.content != null) {
      yield r'content';
      yield serializers.serialize(
        object.content,
        specifiedType: const FullType(String),
      );
    }
    if (object.ttl != null) {
      yield r'ttl';
      yield serializers.serialize(
        object.ttl,
        specifiedType: const FullType(String),
      );
    }
    if (object.prio != null) {
      yield r'prio';
      yield serializers.serialize(
        object.prio,
        specifiedType: const FullType(String),
      );
    }
    if (object.disabled != null) {
      yield r'disabled';
      yield serializers.serialize(
        object.disabled,
        specifiedType: const FullType(String),
      );
    }
    if (object.ordername != null) {
      yield r'ordername';
      yield serializers.serialize(
        object.ordername,
        specifiedType: const FullType(String),
      );
    }
    if (object.auth != null) {
      yield r'auth';
      yield serializers.serialize(
        object.auth,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DnsUpdateRecord object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DnsUpdateRecordBuilder result,
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
  DnsUpdateRecord deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DnsUpdateRecordBuilder();
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

