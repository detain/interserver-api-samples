//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'licenses_order_package_costs.g.dart';

/// Costs of license packages
///
/// Properties:
/// * [licensesOrderPackageCosts11468] - Cost of package with ID 11468
@BuiltValue()
abstract class LicensesOrderPackageCosts implements Built<LicensesOrderPackageCosts, LicensesOrderPackageCostsBuilder> {
  /// Cost of package with ID 11468
  @BuiltValueField(wireName: r'LicensesOrderPackageCosts11468')
  num? get licensesOrderPackageCosts11468;

  LicensesOrderPackageCosts._();

  factory LicensesOrderPackageCosts([void updates(LicensesOrderPackageCostsBuilder b)]) = _$LicensesOrderPackageCosts;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicensesOrderPackageCostsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicensesOrderPackageCosts> get serializer => _$LicensesOrderPackageCostsSerializer();
}

class _$LicensesOrderPackageCostsSerializer implements PrimitiveSerializer<LicensesOrderPackageCosts> {
  @override
  final Iterable<Type> types = const [LicensesOrderPackageCosts, _$LicensesOrderPackageCosts];

  @override
  final String wireName = r'LicensesOrderPackageCosts';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicensesOrderPackageCosts object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.licensesOrderPackageCosts11468 != null) {
      yield r'LicensesOrderPackageCosts11468';
      yield serializers.serialize(
        object.licensesOrderPackageCosts11468,
        specifiedType: const FullType(num),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LicensesOrderPackageCosts object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicensesOrderPackageCostsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'LicensesOrderPackageCosts11468':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.licensesOrderPackageCosts11468 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LicensesOrderPackageCosts deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicensesOrderPackageCostsBuilder();
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

