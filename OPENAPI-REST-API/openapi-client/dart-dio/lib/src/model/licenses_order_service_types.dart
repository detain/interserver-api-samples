//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/licenses_order_service_types11482.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'licenses_order_service_types.g.dart';

/// Types of license services
///
/// Properties:
/// * [licensesOrderServiceTypes11482] 
@BuiltValue()
abstract class LicensesOrderServiceTypes implements Built<LicensesOrderServiceTypes, LicensesOrderServiceTypesBuilder> {
  @BuiltValueField(wireName: r'LicensesOrderServiceTypes11482')
  LicensesOrderServiceTypes11482? get licensesOrderServiceTypes11482;

  LicensesOrderServiceTypes._();

  factory LicensesOrderServiceTypes([void updates(LicensesOrderServiceTypesBuilder b)]) = _$LicensesOrderServiceTypes;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicensesOrderServiceTypesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicensesOrderServiceTypes> get serializer => _$LicensesOrderServiceTypesSerializer();
}

class _$LicensesOrderServiceTypesSerializer implements PrimitiveSerializer<LicensesOrderServiceTypes> {
  @override
  final Iterable<Type> types = const [LicensesOrderServiceTypes, _$LicensesOrderServiceTypes];

  @override
  final String wireName = r'LicensesOrderServiceTypes';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicensesOrderServiceTypes object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.licensesOrderServiceTypes11482 != null) {
      yield r'LicensesOrderServiceTypes11482';
      yield serializers.serialize(
        object.licensesOrderServiceTypes11482,
        specifiedType: const FullType(LicensesOrderServiceTypes11482),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LicensesOrderServiceTypes object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicensesOrderServiceTypesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'LicensesOrderServiceTypes11482':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LicensesOrderServiceTypes11482),
          ) as LicensesOrderServiceTypes11482;
          result.licensesOrderServiceTypes11482.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LicensesOrderServiceTypes deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicensesOrderServiceTypesBuilder();
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

