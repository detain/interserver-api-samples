//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/licenses_order_service_categories509.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'licenses_order_service_categories.g.dart';

/// License service categories
///
/// Properties:
/// * [licensesOrderServiceCategories509] 
@BuiltValue()
abstract class LicensesOrderServiceCategories implements Built<LicensesOrderServiceCategories, LicensesOrderServiceCategoriesBuilder> {
  @BuiltValueField(wireName: r'LicensesOrderServiceCategories509')
  LicensesOrderServiceCategories509? get licensesOrderServiceCategories509;

  LicensesOrderServiceCategories._();

  factory LicensesOrderServiceCategories([void updates(LicensesOrderServiceCategoriesBuilder b)]) = _$LicensesOrderServiceCategories;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicensesOrderServiceCategoriesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicensesOrderServiceCategories> get serializer => _$LicensesOrderServiceCategoriesSerializer();
}

class _$LicensesOrderServiceCategoriesSerializer implements PrimitiveSerializer<LicensesOrderServiceCategories> {
  @override
  final Iterable<Type> types = const [LicensesOrderServiceCategories, _$LicensesOrderServiceCategories];

  @override
  final String wireName = r'LicensesOrderServiceCategories';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicensesOrderServiceCategories object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.licensesOrderServiceCategories509 != null) {
      yield r'LicensesOrderServiceCategories509';
      yield serializers.serialize(
        object.licensesOrderServiceCategories509,
        specifiedType: const FullType(LicensesOrderServiceCategories509),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LicensesOrderServiceCategories object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicensesOrderServiceCategoriesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'LicensesOrderServiceCategories509':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LicensesOrderServiceCategories509),
          ) as LicensesOrderServiceCategories509;
          result.licensesOrderServiceCategories509.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LicensesOrderServiceCategories deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicensesOrderServiceCategoriesBuilder();
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

