//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_memory.g.dart';

/// A memory (RAM) option available when ordering a dedicated server.
///
/// Properties:
/// * [id] - Memory ID.
/// * [price] - Memory price.
/// * [img] - Memory image.
/// * [shortDesc] - Short description of the memory.
/// * [longDesc] - Long description of the memory.
/// * [manu] - Manufacturer information.
/// * [size] - Memory size.
/// * [type] - Memory type.
/// * [hidden] - Hidden status.
/// * [monthlyPrice] - Monthly price.
/// * [driveType] - Drive type.
/// * [monthlyPriceDisplay] - Display of monthly memory price.
@BuiltValue()
abstract class ServerOrderMemory implements Built<ServerOrderMemory, ServerOrderMemoryBuilder> {
  /// Memory ID.
  @BuiltValueField(wireName: r'id')
  String? get id;

  /// Memory price.
  @BuiltValueField(wireName: r'price')
  String? get price;

  /// Memory image.
  @BuiltValueField(wireName: r'img')
  String? get img;

  /// Short description of the memory.
  @BuiltValueField(wireName: r'short_desc')
  String? get shortDesc;

  /// Long description of the memory.
  @BuiltValueField(wireName: r'long_desc')
  String? get longDesc;

  /// Manufacturer information.
  @BuiltValueField(wireName: r'manu')
  String? get manu;

  /// Memory size.
  @BuiltValueField(wireName: r'size')
  String? get size;

  /// Memory type.
  @BuiltValueField(wireName: r'type')
  String? get type;

  /// Hidden status.
  @BuiltValueField(wireName: r'hidden')
  String? get hidden;

  /// Monthly price.
  @BuiltValueField(wireName: r'monthly_price')
  int? get monthlyPrice;

  /// Drive type.
  @BuiltValueField(wireName: r'drive_type')
  String? get driveType;

  /// Display of monthly memory price.
  @BuiltValueField(wireName: r'monthly_price_display')
  String? get monthlyPriceDisplay;

  ServerOrderMemory._();

  factory ServerOrderMemory([void updates(ServerOrderMemoryBuilder b)]) = _$ServerOrderMemory;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderMemoryBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderMemory> get serializer => _$ServerOrderMemorySerializer();
}

class _$ServerOrderMemorySerializer implements PrimitiveSerializer<ServerOrderMemory> {
  @override
  final Iterable<Type> types = const [ServerOrderMemory, _$ServerOrderMemory];

  @override
  final String wireName = r'ServerOrderMemory';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderMemory object, {
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
        specifiedType: const FullType(String),
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
    if (object.manu != null) {
      yield r'manu';
      yield serializers.serialize(
        object.manu,
        specifiedType: const FullType(String),
      );
    }
    if (object.size != null) {
      yield r'size';
      yield serializers.serialize(
        object.size,
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
    if (object.hidden != null) {
      yield r'hidden';
      yield serializers.serialize(
        object.hidden,
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
    if (object.driveType != null) {
      yield r'drive_type';
      yield serializers.serialize(
        object.driveType,
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
    ServerOrderMemory object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderMemoryBuilder result,
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
            specifiedType: const FullType(String),
          ) as String;
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
        case r'manu':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.manu = valueDes;
          break;
        case r'size':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.size = valueDes;
          break;
        case r'type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.type = valueDes;
          break;
        case r'hidden':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.hidden = valueDes;
          break;
        case r'monthly_price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.monthlyPrice = valueDes;
          break;
        case r'drive_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.driveType = valueDes;
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
  ServerOrderMemory deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderMemoryBuilder();
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

