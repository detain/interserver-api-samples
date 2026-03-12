//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/licenses_order_package_costs.dart';
import 'package:openapi/src/model/licenses_order_service_types.dart';
import 'package:openapi/src/model/licenses_order_service_categories.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'licenses_order.g.dart';

/// Available license packages and pricing for ordering a new software license.
///
/// Properties:
/// * [serviceCategories] 
/// * [packageCosts] 
/// * [serviceTypes] 
@BuiltValue()
abstract class LicensesOrder implements Built<LicensesOrder, LicensesOrderBuilder> {
  @BuiltValueField(wireName: r'serviceCategories')
  LicensesOrderServiceCategories? get serviceCategories;

  @BuiltValueField(wireName: r'packageCosts')
  LicensesOrderPackageCosts? get packageCosts;

  @BuiltValueField(wireName: r'serviceTypes')
  LicensesOrderServiceTypes? get serviceTypes;

  LicensesOrder._();

  factory LicensesOrder([void updates(LicensesOrderBuilder b)]) = _$LicensesOrder;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicensesOrderBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicensesOrder> get serializer => _$LicensesOrderSerializer();
}

class _$LicensesOrderSerializer implements PrimitiveSerializer<LicensesOrder> {
  @override
  final Iterable<Type> types = const [LicensesOrder, _$LicensesOrder];

  @override
  final String wireName = r'LicensesOrder';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicensesOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.serviceCategories != null) {
      yield r'serviceCategories';
      yield serializers.serialize(
        object.serviceCategories,
        specifiedType: const FullType(LicensesOrderServiceCategories),
      );
    }
    if (object.packageCosts != null) {
      yield r'packageCosts';
      yield serializers.serialize(
        object.packageCosts,
        specifiedType: const FullType(LicensesOrderPackageCosts),
      );
    }
    if (object.serviceTypes != null) {
      yield r'serviceTypes';
      yield serializers.serialize(
        object.serviceTypes,
        specifiedType: const FullType(LicensesOrderServiceTypes),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LicensesOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicensesOrderBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'serviceCategories':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LicensesOrderServiceCategories),
          ) as LicensesOrderServiceCategories;
          result.serviceCategories.replace(valueDes);
          break;
        case r'packageCosts':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LicensesOrderPackageCosts),
          ) as LicensesOrderPackageCosts;
          result.packageCosts.replace(valueDes);
          break;
        case r'serviceTypes':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LicensesOrderServiceTypes),
          ) as LicensesOrderServiceTypes;
          result.serviceTypes.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LicensesOrder deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicensesOrderBuilder();
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

