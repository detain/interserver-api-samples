//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'buy_it_now_server_order200_response_cp_inner.g.dart';

/// BuyItNowServerOrder200ResponseCpInner
///
/// Properties:
/// * [id] 
/// * [shortDesc] 
/// * [longDesc] 
/// * [osType] 
/// * [monthlyPrice] 
@BuiltValue()
abstract class BuyItNowServerOrder200ResponseCpInner implements Built<BuyItNowServerOrder200ResponseCpInner, BuyItNowServerOrder200ResponseCpInnerBuilder> {
  @BuiltValueField(wireName: r'id')
  String? get id;

  @BuiltValueField(wireName: r'short_desc')
  String? get shortDesc;

  @BuiltValueField(wireName: r'long_desc')
  String? get longDesc;

  @BuiltValueField(wireName: r'os_type')
  String? get osType;

  @BuiltValueField(wireName: r'monthly_price')
  String? get monthlyPrice;

  BuyItNowServerOrder200ResponseCpInner._();

  factory BuyItNowServerOrder200ResponseCpInner([void updates(BuyItNowServerOrder200ResponseCpInnerBuilder b)]) = _$BuyItNowServerOrder200ResponseCpInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BuyItNowServerOrder200ResponseCpInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BuyItNowServerOrder200ResponseCpInner> get serializer => _$BuyItNowServerOrder200ResponseCpInnerSerializer();
}

class _$BuyItNowServerOrder200ResponseCpInnerSerializer implements PrimitiveSerializer<BuyItNowServerOrder200ResponseCpInner> {
  @override
  final Iterable<Type> types = const [BuyItNowServerOrder200ResponseCpInner, _$BuyItNowServerOrder200ResponseCpInner];

  @override
  final String wireName = r'BuyItNowServerOrder200ResponseCpInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BuyItNowServerOrder200ResponseCpInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(String),
      );
    }
    if (object.shortDesc != null) {
      yield r'short_desc';
      yield serializers.serialize(
        object.shortDesc,
        specifiedType: const FullType(String),
      );
    }
    if (object.longDesc != null) {
      yield r'long_desc';
      yield serializers.serialize(
        object.longDesc,
        specifiedType: const FullType(String),
      );
    }
    if (object.osType != null) {
      yield r'os_type';
      yield serializers.serialize(
        object.osType,
        specifiedType: const FullType(String),
      );
    }
    if (object.monthlyPrice != null) {
      yield r'monthly_price';
      yield serializers.serialize(
        object.monthlyPrice,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BuyItNowServerOrder200ResponseCpInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BuyItNowServerOrder200ResponseCpInnerBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.id = valueDes;
          break;
        case r'short_desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.shortDesc = valueDes;
          break;
        case r'long_desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.longDesc = valueDes;
          break;
        case r'os_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.osType = valueDes;
          break;
        case r'monthly_price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.monthlyPrice = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BuyItNowServerOrder200ResponseCpInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BuyItNowServerOrder200ResponseCpInnerBuilder();
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

