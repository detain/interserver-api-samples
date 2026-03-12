//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'licenses_order_service_types11482.g.dart';

/// LicensesOrderServiceTypes11482
///
/// Properties:
/// * [servicesId] - Service ID
/// * [servicesName] - Service Name
/// * [servicesCost] - Service Cost
/// * [servicesCategory] - Service Category
/// * [servicesBuyable] - Buyable flag for Service
/// * [servicesType] - Service Type
/// * [servicesField1] - Field 1 of Service
/// * [servicesField2] - Field 2 of Service
/// * [servicesModule] - Module of Service
@BuiltValue()
abstract class LicensesOrderServiceTypes11482 implements Built<LicensesOrderServiceTypes11482, LicensesOrderServiceTypes11482Builder> {
  /// Service ID
  @BuiltValueField(wireName: r'services_id')
  String? get servicesId;

  /// Service Name
  @BuiltValueField(wireName: r'services_name')
  String? get servicesName;

  /// Service Cost
  @BuiltValueField(wireName: r'services_cost')
  String? get servicesCost;

  /// Service Category
  @BuiltValueField(wireName: r'services_category')
  String? get servicesCategory;

  /// Buyable flag for Service
  @BuiltValueField(wireName: r'services_buyable')
  String? get servicesBuyable;

  /// Service Type
  @BuiltValueField(wireName: r'services_type')
  String? get servicesType;

  /// Field 1 of Service
  @BuiltValueField(wireName: r'services_field1')
  String? get servicesField1;

  /// Field 2 of Service
  @BuiltValueField(wireName: r'services_field2')
  String? get servicesField2;

  /// Module of Service
  @BuiltValueField(wireName: r'services_module')
  String? get servicesModule;

  LicensesOrderServiceTypes11482._();

  factory LicensesOrderServiceTypes11482([void updates(LicensesOrderServiceTypes11482Builder b)]) = _$LicensesOrderServiceTypes11482;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicensesOrderServiceTypes11482Builder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicensesOrderServiceTypes11482> get serializer => _$LicensesOrderServiceTypes11482Serializer();
}

class _$LicensesOrderServiceTypes11482Serializer implements PrimitiveSerializer<LicensesOrderServiceTypes11482> {
  @override
  final Iterable<Type> types = const [LicensesOrderServiceTypes11482, _$LicensesOrderServiceTypes11482];

  @override
  final String wireName = r'LicensesOrderServiceTypes11482';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicensesOrderServiceTypes11482 object, {
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
    LicensesOrderServiceTypes11482 object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicensesOrderServiceTypes11482Builder result,
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
  LicensesOrderServiceTypes11482 deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicensesOrderServiceTypes11482Builder();
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

