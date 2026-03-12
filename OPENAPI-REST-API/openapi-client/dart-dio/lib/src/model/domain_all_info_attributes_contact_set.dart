//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/domain_owner_contact.dart';
import 'package:openapi/src/model/domain_admin_contact.dart';
import 'package:openapi/src/model/domain_tech_contact.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_all_info_attributes_contact_set.g.dart';

/// DomainAllInfoAttributesContactSet
///
/// Properties:
/// * [owner] 
/// * [admin] 
/// * [tech] 
@BuiltValue()
abstract class DomainAllInfoAttributesContactSet implements Built<DomainAllInfoAttributesContactSet, DomainAllInfoAttributesContactSetBuilder> {
  @BuiltValueField(wireName: r'owner')
  DomainOwnerContact? get owner;

  @BuiltValueField(wireName: r'admin')
  DomainAdminContact? get admin;

  @BuiltValueField(wireName: r'tech')
  DomainTechContact? get tech;

  DomainAllInfoAttributesContactSet._();

  factory DomainAllInfoAttributesContactSet([void updates(DomainAllInfoAttributesContactSetBuilder b)]) = _$DomainAllInfoAttributesContactSet;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainAllInfoAttributesContactSetBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainAllInfoAttributesContactSet> get serializer => _$DomainAllInfoAttributesContactSetSerializer();
}

class _$DomainAllInfoAttributesContactSetSerializer implements PrimitiveSerializer<DomainAllInfoAttributesContactSet> {
  @override
  final Iterable<Type> types = const [DomainAllInfoAttributesContactSet, _$DomainAllInfoAttributesContactSet];

  @override
  final String wireName = r'DomainAllInfoAttributesContactSet';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainAllInfoAttributesContactSet object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.owner != null) {
      yield r'owner';
      yield serializers.serialize(
        object.owner,
        specifiedType: const FullType(DomainOwnerContact),
      );
    }
    if (object.admin != null) {
      yield r'admin';
      yield serializers.serialize(
        object.admin,
        specifiedType: const FullType(DomainAdminContact),
      );
    }
    if (object.tech != null) {
      yield r'tech';
      yield serializers.serialize(
        object.tech,
        specifiedType: const FullType(DomainTechContact),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainAllInfoAttributesContactSet object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainAllInfoAttributesContactSetBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'owner':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainOwnerContact),
          ) as DomainOwnerContact;
          result.owner.replace(valueDes);
          break;
        case r'admin':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainAdminContact),
          ) as DomainAdminContact;
          result.admin.replace(valueDes);
          break;
        case r'tech':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainTechContact),
          ) as DomainTechContact;
          result.tech.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainAllInfoAttributesContactSet deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainAllInfoAttributesContactSetBuilder();
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

