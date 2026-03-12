//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_bandwidth.g.dart';

/// A bandwidth option available when ordering a dedicated server.
///
/// Properties:
/// * [id] - Bandwidth ID.
/// * [price] - Bandwidth price.
/// * [img] - Bandwidth image.
/// * [shortDesc] - Short description of the bandwidth.
/// * [longDesc] - Long description of the bandwidth.
/// * [type] - Bandwidth type.
/// * [qty] - Quantity of bandwidth.
/// * [active] - Active status.
/// * [monthlyPrice] - Monthly price.
/// * [priceDisplay] - Display of bandwidth price.
/// * [monthlyPriceDisplay] - Display of monthly bandwidth price.
@BuiltValue()
abstract class ServerOrderBandwidth implements Built<ServerOrderBandwidth, ServerOrderBandwidthBuilder> {
  /// Bandwidth ID.
  @BuiltValueField(wireName: r'id')
  String? get id;

  /// Bandwidth price.
  @BuiltValueField(wireName: r'price')
  int? get price;

  /// Bandwidth image.
  @BuiltValueField(wireName: r'img')
  String? get img;

  /// Short description of the bandwidth.
  @BuiltValueField(wireName: r'short_desc')
  String? get shortDesc;

  /// Long description of the bandwidth.
  @BuiltValueField(wireName: r'long_desc')
  String? get longDesc;

  /// Bandwidth type.
  @BuiltValueField(wireName: r'type')
  String? get type;

  /// Quantity of bandwidth.
  @BuiltValueField(wireName: r'qty')
  String? get qty;

  /// Active status.
  @BuiltValueField(wireName: r'active')
  String? get active;

  /// Monthly price.
  @BuiltValueField(wireName: r'monthly_price')
  int? get monthlyPrice;

  /// Display of bandwidth price.
  @BuiltValueField(wireName: r'price_display')
  String? get priceDisplay;

  /// Display of monthly bandwidth price.
  @BuiltValueField(wireName: r'monthly_price_display')
  String? get monthlyPriceDisplay;

  ServerOrderBandwidth._();

  factory ServerOrderBandwidth([void updates(ServerOrderBandwidthBuilder b)]) = _$ServerOrderBandwidth;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderBandwidthBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderBandwidth> get serializer => _$ServerOrderBandwidthSerializer();
}

class _$ServerOrderBandwidthSerializer implements PrimitiveSerializer<ServerOrderBandwidth> {
  @override
  final Iterable<Type> types = const [ServerOrderBandwidth, _$ServerOrderBandwidth];

  @override
  final String wireName = r'ServerOrderBandwidth';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderBandwidth object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
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
    if (object.img != null) {
      yield r'img';
      yield serializers.serialize(
        object.img,
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
    if (object.type != null) {
      yield r'type';
      yield serializers.serialize(
        object.type,
        specifiedType: const FullType(String),
      );
    }
    if (object.qty != null) {
      yield r'qty';
      yield serializers.serialize(
        object.qty,
        specifiedType: const FullType(String),
      );
    }
    if (object.active != null) {
      yield r'active';
      yield serializers.serialize(
        object.active,
        specifiedType: const FullType(String),
      );
    }
    if (object.monthlyPrice != null) {
      yield r'monthly_price';
      yield serializers.serialize(
        object.monthlyPrice,
        specifiedType: const FullType(int),
      );
    }
    if (object.priceDisplay != null) {
      yield r'price_display';
      yield serializers.serialize(
        object.priceDisplay,
        specifiedType: const FullType(String),
      );
    }
    if (object.monthlyPriceDisplay != null) {
      yield r'monthly_price_display';
      yield serializers.serialize(
        object.monthlyPriceDisplay,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrderBandwidth object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderBandwidthBuilder result,
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
        case r'price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.price = valueDes;
          break;
        case r'img':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.img = valueDes;
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
        case r'type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.type = valueDes;
          break;
        case r'qty':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qty = valueDes;
          break;
        case r'active':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.active = valueDes;
          break;
        case r'monthly_price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.monthlyPrice = valueDes;
          break;
        case r'price_display':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.priceDisplay = valueDes;
          break;
        case r'monthly_price_display':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.monthlyPriceDisplay = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrderBandwidth deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderBandwidthBuilder();
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

