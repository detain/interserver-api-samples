//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/buy_it_now_row.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'buy_it_now_list.g.dart';

/// Marketplace buy it now servers list
@BuiltValue()
abstract class BuyItNowList implements Built<BuyItNowList, BuyItNowListBuilder> {
  BuyItNowList._();

  factory BuyItNowList([void updates(BuyItNowListBuilder b)]) = _$BuyItNowList;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BuyItNowListBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BuyItNowList> get serializer => _$BuyItNowListSerializer();
}

class _$BuyItNowListSerializer implements PrimitiveSerializer<BuyItNowList> {
  @override
  final Iterable<Type> types = const [BuyItNowList, _$BuyItNowList];

  @override
  final String wireName = r'BuyItNowList';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BuyItNowList object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    BuyItNowList object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  BuyItNowList deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BuyItNowListBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

