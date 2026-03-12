//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_control_panel.g.dart';

/// A control panel option available when ordering a dedicated server.
///
/// Properties:
/// * [id] - Control Panel ID.
/// * [price] - Control Panel price.
/// * [img] - Control Panel image.
/// * [shortDesc] - Short description of the control panel.
/// * [longDesc] - Long description of the control panel.
/// * [osType] - OS types compatible with the control panel.
/// * [monthlyPrice] - Monthly price.
/// * [types] - List of types.
/// * [priceDisplay] - Display of control panel price.
/// * [monthlyPriceDisplay] - Display of monthly control panel price.
@BuiltValue()
abstract class ServerOrderControlPanel implements Built<ServerOrderControlPanel, ServerOrderControlPanelBuilder> {
  /// Control Panel ID.
  @BuiltValueField(wireName: r'id')
  String? get id;

  /// Control Panel price.
  @BuiltValueField(wireName: r'price')
  int? get price;

  /// Control Panel image.
  @BuiltValueField(wireName: r'img')
  String? get img;

  /// Short description of the control panel.
  @BuiltValueField(wireName: r'short_desc')
  String? get shortDesc;

  /// Long description of the control panel.
  @BuiltValueField(wireName: r'long_desc')
  String? get longDesc;

  /// OS types compatible with the control panel.
  @BuiltValueField(wireName: r'os_type')
  String? get osType;

  /// Monthly price.
  @BuiltValueField(wireName: r'monthly_price')
  int? get monthlyPrice;

  /// List of types.
  @BuiltValueField(wireName: r'types')
  BuiltList<String>? get types;

  /// Display of control panel price.
  @BuiltValueField(wireName: r'price_display')
  String? get priceDisplay;

  /// Display of monthly control panel price.
  @BuiltValueField(wireName: r'monthly_price_display')
  String? get monthlyPriceDisplay;

  ServerOrderControlPanel._();

  factory ServerOrderControlPanel([void updates(ServerOrderControlPanelBuilder b)]) = _$ServerOrderControlPanel;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderControlPanelBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderControlPanel> get serializer => _$ServerOrderControlPanelSerializer();
}

class _$ServerOrderControlPanelSerializer implements PrimitiveSerializer<ServerOrderControlPanel> {
  @override
  final Iterable<Type> types = const [ServerOrderControlPanel, _$ServerOrderControlPanel];

  @override
  final String wireName = r'ServerOrderControlPanel';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderControlPanel object, {
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
        specifiedType: const FullType(int),
      );
    }
    if (object.types != null) {
      yield r'types';
      yield serializers.serialize(
        object.types,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
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
    ServerOrderControlPanel object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderControlPanelBuilder result,
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
            specifiedType: const FullType(int),
          ) as int;
          result.monthlyPrice = valueDes;
          break;
        case r'types':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.types.replace(valueDes);
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
  ServerOrderControlPanel deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderControlPanelBuilder();
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

