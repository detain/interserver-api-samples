//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_raid.g.dart';

/// A RAID configuration option available when ordering a dedicated server.
///
/// Properties:
/// * [id] - RAID ID.
/// * [price] - RAID price.
/// * [img] - RAID image.
/// * [shortDesc] - Short description of the RAID.
/// * [longDesc] - Long description of the RAID.
/// * [monthlyPrice] - Monthly price.
/// * [active] - Active status.
/// * [priceDisplay] - Display of RAID price.
/// * [monthlyPriceDisplay] - Display of monthly RAID price.
@BuiltValue()
abstract class ServerOrderRAID implements Built<ServerOrderRAID, ServerOrderRAIDBuilder> {
  /// RAID ID.
  @BuiltValueField(wireName: r'id')
  String? get id;

  /// RAID price.
  @BuiltValueField(wireName: r'price')
  int? get price;

  /// RAID image.
  @BuiltValueField(wireName: r'img')
  String? get img;

  /// Short description of the RAID.
  @BuiltValueField(wireName: r'short_desc')
  String? get shortDesc;

  /// Long description of the RAID.
  @BuiltValueField(wireName: r'long_desc')
  String? get longDesc;

  /// Monthly price.
  @BuiltValueField(wireName: r'monthly_price')
  int? get monthlyPrice;

  /// Active status.
  @BuiltValueField(wireName: r'active')
  String? get active;

  /// Display of RAID price.
  @BuiltValueField(wireName: r'price_display')
  String? get priceDisplay;

  /// Display of monthly RAID price.
  @BuiltValueField(wireName: r'monthly_price_display')
  String? get monthlyPriceDisplay;

  ServerOrderRAID._();

  factory ServerOrderRAID([void updates(ServerOrderRAIDBuilder b)]) = _$ServerOrderRAID;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderRAIDBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderRAID> get serializer => _$ServerOrderRAIDSerializer();
}

class _$ServerOrderRAIDSerializer implements PrimitiveSerializer<ServerOrderRAID> {
  @override
  final Iterable<Type> types = const [ServerOrderRAID, _$ServerOrderRAID];

  @override
  final String wireName = r'ServerOrderRAID';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderRAID object, {
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
    if (object.monthlyPrice != null) {
      yield r'monthly_price';
      yield serializers.serialize(
        object.monthlyPrice,
        specifiedType: const FullType(int),
      );
    }
    if (object.active != null) {
      yield r'active';
      yield serializers.serialize(
        object.active,
        specifiedType: const FullType(String),
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
    ServerOrderRAID object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderRAIDBuilder result,
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
        case r'monthly_price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.monthlyPrice = valueDes;
          break;
        case r'active':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.active = valueDes;
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
  ServerOrderRAID deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderRAIDBuilder();
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

