//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_service_type.g.dart';

/// Service type definition for a domain registration, including name, pricing, and category.
///
/// Properties:
/// * [servicesId] - Service type ID.
/// * [servicesName] - Service type name (e.g., .com Registration).
/// * [servicesCost] - Service cost per billing period.
/// * [servicesCategory] - Service category ID.
/// * [servicesBuyable] - Whether this service type is available for purchase.
/// * [servicesType] - Internal service type identifier.
/// * [servicesField1] - TLD or first configurable field for the service type.
/// * [servicesField2] - Second configurable field for the service type.
/// * [servicesModule] - Backend module handling this service type.
@BuiltValue()
abstract class DomainServiceType implements Built<DomainServiceType, DomainServiceTypeBuilder> {
  /// Service type ID.
  @BuiltValueField(wireName: r'services_id')
  String? get servicesId;

  /// Service type name (e.g., .com Registration).
  @BuiltValueField(wireName: r'services_name')
  String? get servicesName;

  /// Service cost per billing period.
  @BuiltValueField(wireName: r'services_cost')
  String? get servicesCost;

  /// Service category ID.
  @BuiltValueField(wireName: r'services_category')
  String? get servicesCategory;

  /// Whether this service type is available for purchase.
  @BuiltValueField(wireName: r'services_buyable')
  String? get servicesBuyable;

  /// Internal service type identifier.
  @BuiltValueField(wireName: r'services_type')
  String? get servicesType;

  /// TLD or first configurable field for the service type.
  @BuiltValueField(wireName: r'services_field1')
  String? get servicesField1;

  /// Second configurable field for the service type.
  @BuiltValueField(wireName: r'services_field2')
  String? get servicesField2;

  /// Backend module handling this service type.
  @BuiltValueField(wireName: r'services_module')
  String? get servicesModule;

  DomainServiceType._();

  factory DomainServiceType([void updates(DomainServiceTypeBuilder b)]) = _$DomainServiceType;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainServiceTypeBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainServiceType> get serializer => _$DomainServiceTypeSerializer();
}

class _$DomainServiceTypeSerializer implements PrimitiveSerializer<DomainServiceType> {
  @override
  final Iterable<Type> types = const [DomainServiceType, _$DomainServiceType];

  @override
  final String wireName = r'DomainServiceType';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainServiceType object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.servicesId != null) {
      yield r'services_id';
      yield serializers.serialize(
        object.servicesId,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesName != null) {
      yield r'services_name';
      yield serializers.serialize(
        object.servicesName,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesCost != null) {
      yield r'services_cost';
      yield serializers.serialize(
        object.servicesCost,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesCategory != null) {
      yield r'services_category';
      yield serializers.serialize(
        object.servicesCategory,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesBuyable != null) {
      yield r'services_buyable';
      yield serializers.serialize(
        object.servicesBuyable,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesType != null) {
      yield r'services_type';
      yield serializers.serialize(
        object.servicesType,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesField1 != null) {
      yield r'services_field1';
      yield serializers.serialize(
        object.servicesField1,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesField2 != null) {
      yield r'services_field2';
      yield serializers.serialize(
        object.servicesField2,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesModule != null) {
      yield r'services_module';
      yield serializers.serialize(
        object.servicesModule,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainServiceType object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainServiceTypeBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'services_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesId = valueDes;
          break;
        case r'services_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesName = valueDes;
          break;
        case r'services_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesCost = valueDes;
          break;
        case r'services_category':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesCategory = valueDes;
          break;
        case r'services_buyable':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesBuyable = valueDes;
          break;
        case r'services_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesType = valueDes;
          break;
        case r'services_field1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesField1 = valueDes;
          break;
        case r'services_field2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesField2 = valueDes;
          break;
        case r'services_module':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesModule = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainServiceType deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainServiceTypeBuilder();
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

