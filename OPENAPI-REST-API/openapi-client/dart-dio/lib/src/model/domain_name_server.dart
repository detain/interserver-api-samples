//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_name_server.g.dart';

/// A single registered nameserver entry with glue IPs.
///
/// Properties:
/// * [sortorder] 
/// * [name] 
/// * [ipaddress] 
@BuiltValue()
abstract class DomainNameServer implements Built<DomainNameServer, DomainNameServerBuilder> {
  @BuiltValueField(wireName: r'sortorder')
  String? get sortorder;

  @BuiltValueField(wireName: r'name')
  String? get name;

  @BuiltValueField(wireName: r'ipaddress')
  String? get ipaddress;

  DomainNameServer._();

  factory DomainNameServer([void updates(DomainNameServerBuilder b)]) = _$DomainNameServer;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainNameServerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainNameServer> get serializer => _$DomainNameServerSerializer();
}

class _$DomainNameServerSerializer implements PrimitiveSerializer<DomainNameServer> {
  @override
  final Iterable<Type> types = const [DomainNameServer, _$DomainNameServer];

  @override
  final String wireName = r'DomainNameServer';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainNameServer object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.sortorder != null) {
      yield r'sortorder';
      yield serializers.serialize(
        object.sortorder,
        specifiedType: const FullType(String),
      );
    }
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipaddress != null) {
      yield r'ipaddress';
      yield serializers.serialize(
        object.ipaddress,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainNameServer object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainNameServerBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'sortorder':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sortorder = valueDes;
          break;
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'ipaddress':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipaddress = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainNameServer deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainNameServerBuilder();
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

