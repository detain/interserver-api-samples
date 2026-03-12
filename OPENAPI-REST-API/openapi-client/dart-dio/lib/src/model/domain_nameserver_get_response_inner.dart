//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_nameserver_get_response_inner.g.dart';

/// DomainNameserverGetResponseInner
///
/// Properties:
/// * [name] 
/// * [ipaddress] 
/// * [canDelete] - Whether the registrar allows deletion of this nameserver entry.
@BuiltValue()
abstract class DomainNameserverGetResponseInner implements Built<DomainNameserverGetResponseInner, DomainNameserverGetResponseInnerBuilder> {
  @BuiltValueField(wireName: r'name')
  String get name;

  @BuiltValueField(wireName: r'ipaddress')
  String get ipaddress;

  /// Whether the registrar allows deletion of this nameserver entry.
  @BuiltValueField(wireName: r'can_delete')
  DomainNameserverGetResponseInnerCanDeleteEnum get canDelete;
  // enum canDeleteEnum {  0,  1,  };

  DomainNameserverGetResponseInner._();

  factory DomainNameserverGetResponseInner([void updates(DomainNameserverGetResponseInnerBuilder b)]) = _$DomainNameserverGetResponseInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainNameserverGetResponseInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainNameserverGetResponseInner> get serializer => _$DomainNameserverGetResponseInnerSerializer();
}

class _$DomainNameserverGetResponseInnerSerializer implements PrimitiveSerializer<DomainNameserverGetResponseInner> {
  @override
  final Iterable<Type> types = const [DomainNameserverGetResponseInner, _$DomainNameserverGetResponseInner];

  @override
  final String wireName = r'DomainNameserverGetResponseInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainNameserverGetResponseInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'name';
    yield serializers.serialize(
      object.name,
      specifiedType: const FullType(String),
    );
    yield r'ipaddress';
    yield serializers.serialize(
      object.ipaddress,
      specifiedType: const FullType(String),
    );
    yield r'can_delete';
    yield serializers.serialize(
      object.canDelete,
      specifiedType: const FullType(DomainNameserverGetResponseInnerCanDeleteEnum),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainNameserverGetResponseInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainNameserverGetResponseInnerBuilder result,
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
        case r'ipaddress':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipaddress = valueDes;
          break;
        case r'can_delete':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainNameserverGetResponseInnerCanDeleteEnum),
          ) as DomainNameserverGetResponseInnerCanDeleteEnum;
          result.canDelete = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainNameserverGetResponseInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainNameserverGetResponseInnerBuilder();
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

class DomainNameserverGetResponseInnerCanDeleteEnum extends EnumClass {

  /// Whether the registrar allows deletion of this nameserver entry.
  @BuiltValueEnumConst(wireName: r'0')
  static const DomainNameserverGetResponseInnerCanDeleteEnum n0 = _$domainNameserverGetResponseInnerCanDeleteEnum_n0;
  /// Whether the registrar allows deletion of this nameserver entry.
  @BuiltValueEnumConst(wireName: r'1')
  static const DomainNameserverGetResponseInnerCanDeleteEnum n1 = _$domainNameserverGetResponseInnerCanDeleteEnum_n1;

  static Serializer<DomainNameserverGetResponseInnerCanDeleteEnum> get serializer => _$domainNameserverGetResponseInnerCanDeleteEnumSerializer;

  const DomainNameserverGetResponseInnerCanDeleteEnum._(String name): super(name);

  static BuiltSet<DomainNameserverGetResponseInnerCanDeleteEnum> get values => _$domainNameserverGetResponseInnerCanDeleteEnumValues;
  static DomainNameserverGetResponseInnerCanDeleteEnum valueOf(String name) => _$domainNameserverGetResponseInnerCanDeleteEnumValueOf(name);
}

