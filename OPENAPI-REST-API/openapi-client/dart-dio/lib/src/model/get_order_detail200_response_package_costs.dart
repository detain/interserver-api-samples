//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_order_detail200_response_package_costs.g.dart';

/// GetOrderDetail200ResponsePackageCosts
///
/// Properties:
/// * [packageId] 
/// * [packageCost] 
/// * [currency] 
/// * [currencySymbol] 
@BuiltValue()
abstract class GetOrderDetail200ResponsePackageCosts implements Built<GetOrderDetail200ResponsePackageCosts, GetOrderDetail200ResponsePackageCostsBuilder> {
  @BuiltValueField(wireName: r'package_id')
  num? get packageId;

  @BuiltValueField(wireName: r'package_cost')
  num? get packageCost;

  @BuiltValueField(wireName: r'currency')
  String? get currency;

  @BuiltValueField(wireName: r'currencySymbol')
  String? get currencySymbol;

  GetOrderDetail200ResponsePackageCosts._();

  factory GetOrderDetail200ResponsePackageCosts([void updates(GetOrderDetail200ResponsePackageCostsBuilder b)]) = _$GetOrderDetail200ResponsePackageCosts;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetOrderDetail200ResponsePackageCostsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetOrderDetail200ResponsePackageCosts> get serializer => _$GetOrderDetail200ResponsePackageCostsSerializer();
}

class _$GetOrderDetail200ResponsePackageCostsSerializer implements PrimitiveSerializer<GetOrderDetail200ResponsePackageCosts> {
  @override
  final Iterable<Type> types = const [GetOrderDetail200ResponsePackageCosts, _$GetOrderDetail200ResponsePackageCosts];

  @override
  final String wireName = r'GetOrderDetail200ResponsePackageCosts';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetOrderDetail200ResponsePackageCosts object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.packageId != null) {
      yield r'package_id';
      yield serializers.serialize(
        object.packageId,
        specifiedType: const FullType(num),
      );
    }
    if (object.packageCost != null) {
      yield r'package_cost';
      yield serializers.serialize(
        object.packageCost,
        specifiedType: const FullType(num),
      );
    }
    if (object.currency != null) {
      yield r'currency';
      yield serializers.serialize(
        object.currency,
        specifiedType: const FullType(String),
      );
    }
    if (object.currencySymbol != null) {
      yield r'currencySymbol';
      yield serializers.serialize(
        object.currencySymbol,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetOrderDetail200ResponsePackageCosts object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetOrderDetail200ResponsePackageCostsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'package_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.packageId = valueDes;
          break;
        case r'package_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.packageCost = valueDes;
          break;
        case r'currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.currency = valueDes;
          break;
        case r'currencySymbol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.currencySymbol = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetOrderDetail200ResponsePackageCosts deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetOrderDetail200ResponsePackageCostsBuilder();
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

