//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_ip.g.dart';

/// An IP block option available when ordering a dedicated server.
///
/// Properties:
/// * [id] - IP ID.
/// * [price] - IP price.
/// * [img] - IP image.
/// * [shortDesc] - Short description of the IP.
/// * [longDesc] - Long description of the IP.
/// * [qty] - Quantity of IPs.
/// * [monthlyPrice] - Monthly price.
/// * [priceDisplay] - Display of IP price.
/// * [monthlyPriceDisplay] - Display of monthly IP price.
@BuiltValue()
abstract class ServerOrderIP implements Built<ServerOrderIP, ServerOrderIPBuilder> {
  /// IP ID.
  @BuiltValueField(wireName: r'id')
  String? get id;

  /// IP price.
  @BuiltValueField(wireName: r'price')
  int? get price;

  /// IP image.
  @BuiltValueField(wireName: r'img')
  String? get img;

  /// Short description of the IP.
  @BuiltValueField(wireName: r'short_desc')
  String? get shortDesc;

  /// Long description of the IP.
  @BuiltValueField(wireName: r'long_desc')
  String? get longDesc;

  /// Quantity of IPs.
  @BuiltValueField(wireName: r'qty')
  String? get qty;

  /// Monthly price.
  @BuiltValueField(wireName: r'monthly_price')
  int? get monthlyPrice;

  /// Display of IP price.
  @BuiltValueField(wireName: r'price_display')
  String? get priceDisplay;

  /// Display of monthly IP price.
  @BuiltValueField(wireName: r'monthly_price_display')
  String? get monthlyPriceDisplay;

  ServerOrderIP._();

  factory ServerOrderIP([void updates(ServerOrderIPBuilder b)]) = _$ServerOrderIP;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderIPBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderIP> get serializer => _$ServerOrderIPSerializer();
}

class _$ServerOrderIPSerializer implements PrimitiveSerializer<ServerOrderIP> {
  @override
  final Iterable<Type> types = const [ServerOrderIP, _$ServerOrderIP];

  @override
  final String wireName = r'ServerOrderIP';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderIP object, {
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
    if (object.qty != null) {
      yield r'qty';
      yield serializers.serialize(
        object.qty,
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
    ServerOrderIP object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderIPBuilder result,
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
        case r'qty':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qty = valueDes;
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
  ServerOrderIP deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderIPBuilder();
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

