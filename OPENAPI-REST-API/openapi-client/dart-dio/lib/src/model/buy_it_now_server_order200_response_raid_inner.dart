//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'buy_it_now_server_order200_response_raid_inner.g.dart';

/// BuyItNowServerOrder200ResponseRaidInner
///
/// Properties:
/// * [id] 
/// * [shortDesc] 
/// * [longDesc] 
/// * [monthlyPrice] 
@BuiltValue()
abstract class BuyItNowServerOrder200ResponseRaidInner implements Built<BuyItNowServerOrder200ResponseRaidInner, BuyItNowServerOrder200ResponseRaidInnerBuilder> {
  @BuiltValueField(wireName: r'id')
  String? get id;

  @BuiltValueField(wireName: r'short_desc')
  String? get shortDesc;

  @BuiltValueField(wireName: r'long_desc')
  String? get longDesc;

  @BuiltValueField(wireName: r'monthly_price')
  String? get monthlyPrice;

  BuyItNowServerOrder200ResponseRaidInner._();

  factory BuyItNowServerOrder200ResponseRaidInner([void updates(BuyItNowServerOrder200ResponseRaidInnerBuilder b)]) = _$BuyItNowServerOrder200ResponseRaidInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BuyItNowServerOrder200ResponseRaidInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BuyItNowServerOrder200ResponseRaidInner> get serializer => _$BuyItNowServerOrder200ResponseRaidInnerSerializer();
}

class _$BuyItNowServerOrder200ResponseRaidInnerSerializer implements PrimitiveSerializer<BuyItNowServerOrder200ResponseRaidInner> {
  @override
  final Iterable<Type> types = const [BuyItNowServerOrder200ResponseRaidInner, _$BuyItNowServerOrder200ResponseRaidInner];

  @override
  final String wireName = r'BuyItNowServerOrder200ResponseRaidInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BuyItNowServerOrder200ResponseRaidInner object, {
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
    BuyItNowServerOrder200ResponseRaidInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BuyItNowServerOrder200ResponseRaidInnerBuilder result,
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
  BuyItNowServerOrder200ResponseRaidInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BuyItNowServerOrder200ResponseRaidInnerBuilder();
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

