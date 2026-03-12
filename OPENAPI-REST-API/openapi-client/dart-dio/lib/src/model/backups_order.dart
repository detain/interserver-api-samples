//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/backups_order_package_costs.dart';
import 'package:openapi/src/model/backups_order_service_types.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backups_order.g.dart';

/// Available backup storage packages and pricing for ordering a new backup service.
///
/// Properties:
/// * [packageCosts] 
/// * [serviceTypes] 
@BuiltValue()
abstract class BackupsOrder implements Built<BackupsOrder, BackupsOrderBuilder> {
  @BuiltValueField(wireName: r'packageCosts')
  BackupsOrderPackageCosts get packageCosts;

  @BuiltValueField(wireName: r'serviceTypes')
  BackupsOrderServiceTypes get serviceTypes;

  BackupsOrder._();

  factory BackupsOrder([void updates(BackupsOrderBuilder b)]) = _$BackupsOrder;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupsOrderBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupsOrder> get serializer => _$BackupsOrderSerializer();
}

class _$BackupsOrderSerializer implements PrimitiveSerializer<BackupsOrder> {
  @override
  final Iterable<Type> types = const [BackupsOrder, _$BackupsOrder];

  @override
  final String wireName = r'BackupsOrder';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupsOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'packageCosts';
    yield serializers.serialize(
      object.packageCosts,
      specifiedType: const FullType(BackupsOrderPackageCosts),
    );
    yield r'serviceTypes';
    yield serializers.serialize(
      object.serviceTypes,
      specifiedType: const FullType(BackupsOrderServiceTypes),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupsOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupsOrderBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'packageCosts':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BackupsOrderPackageCosts),
          ) as BackupsOrderPackageCosts;
          result.packageCosts.replace(valueDes);
          break;
        case r'serviceTypes':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BackupsOrderServiceTypes),
          ) as BackupsOrderServiceTypes;
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
  BackupsOrder deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupsOrderBuilder();
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

