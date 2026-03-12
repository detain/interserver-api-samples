//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/buy_it_now_row_cpu_inner.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'buy_it_now_row.g.dart';

/// A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
///
/// Properties:
/// * [serverId] - Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.
/// * [cpu] 
/// * [memory] 
/// * [disk] 
/// * [bandwidth] 
/// * [ips] 
/// * [location] 
/// * [price] 
@BuiltValue()
abstract class BuyItNowRow implements Built<BuyItNowRow, BuyItNowRowBuilder> {
  /// Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.
  @BuiltValueField(wireName: r'server_id')
  String? get serverId;

  @BuiltValueField(wireName: r'cpu')
  BuiltList<BuyItNowRowCpuInner>? get cpu;

  @BuiltValueField(wireName: r'memory')
  String? get memory;

  @BuiltValueField(wireName: r'disk')
  BuiltMap<String, String>? get disk;

  @BuiltValueField(wireName: r'bandwidth')
  String? get bandwidth;

  @BuiltValueField(wireName: r'ips')
  String? get ips;

  @BuiltValueField(wireName: r'location')
  String? get location;

  @BuiltValueField(wireName: r'price')
  int? get price;

  BuyItNowRow._();

  factory BuyItNowRow([void updates(BuyItNowRowBuilder b)]) = _$BuyItNowRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BuyItNowRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BuyItNowRow> get serializer => _$BuyItNowRowSerializer();
}

class _$BuyItNowRowSerializer implements PrimitiveSerializer<BuyItNowRow> {
  @override
  final Iterable<Type> types = const [BuyItNowRow, _$BuyItNowRow];

  @override
  final String wireName = r'BuyItNowRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BuyItNowRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.serverId != null) {
      yield r'server_id';
      yield serializers.serialize(
        object.serverId,
        specifiedType: const FullType(String),
      );
    }
    if (object.cpu != null) {
      yield r'cpu';
      yield serializers.serialize(
        object.cpu,
        specifiedType: const FullType(BuiltList, [FullType(BuyItNowRowCpuInner)]),
      );
    }
    if (object.memory != null) {
      yield r'memory';
      yield serializers.serialize(
        object.memory,
        specifiedType: const FullType(String),
      );
    }
    if (object.disk != null) {
      yield r'disk';
      yield serializers.serialize(
        object.disk,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(String)]),
      );
    }
    if (object.bandwidth != null) {
      yield r'bandwidth';
      yield serializers.serialize(
        object.bandwidth,
        specifiedType: const FullType(String),
      );
    }
    if (object.ips != null) {
      yield r'ips';
      yield serializers.serialize(
        object.ips,
        specifiedType: const FullType(String),
      );
    }
    if (object.location != null) {
      yield r'location';
      yield serializers.serialize(
        object.location,
        specifiedType: const FullType(String),
      );
    }
    if (object.price != null) {
      yield r'price';
      yield serializers.serialize(
        object.price,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BuyItNowRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BuyItNowRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'server_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverId = valueDes;
          break;
        case r'cpu':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(BuyItNowRowCpuInner)]),
          ) as BuiltList<BuyItNowRowCpuInner>;
          result.cpu.replace(valueDes);
          break;
        case r'memory':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.memory = valueDes;
          break;
        case r'disk':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(String)]),
          ) as BuiltMap<String, String>;
          result.disk.replace(valueDes);
          break;
        case r'bandwidth':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.bandwidth = valueDes;
          break;
        case r'ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ips = valueDes;
          break;
        case r'location':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.location = valueDes;
          break;
        case r'price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.price = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BuyItNowRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BuyItNowRowBuilder();
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

