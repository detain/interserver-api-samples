//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_assets.g.dart';

/// ServerAssets
///
/// Properties:
/// * [title] - The title of the assets.
/// * [size] - The size of the assets.
/// * [type] - The type of the assets.
/// * [header] - The header of the assets table.
/// * [rows] - The rows of the assets table.
@BuiltValue()
abstract class ServerAssets implements Built<ServerAssets, ServerAssetsBuilder> {
  /// The title of the assets.
  @BuiltValueField(wireName: r'title')
  String? get title;

  /// The size of the assets.
  @BuiltValueField(wireName: r'size')
  int? get size;

  /// The type of the assets.
  @BuiltValueField(wireName: r'type')
  String? get type;

  /// The header of the assets table.
  @BuiltValueField(wireName: r'header')
  BuiltList<String>? get header;

  /// The rows of the assets table.
  @BuiltValueField(wireName: r'rows')
  BuiltList<BuiltList<String>>? get rows;

  ServerAssets._();

  factory ServerAssets([void updates(ServerAssetsBuilder b)]) = _$ServerAssets;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerAssetsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerAssets> get serializer => _$ServerAssetsSerializer();
}

class _$ServerAssetsSerializer implements PrimitiveSerializer<ServerAssets> {
  @override
  final Iterable<Type> types = const [ServerAssets, _$ServerAssets];

  @override
  final String wireName = r'ServerAssets';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerAssets object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.title != null) {
      yield r'title';
      yield serializers.serialize(
        object.title,
        specifiedType: const FullType(String),
      );
    }
    if (object.size != null) {
      yield r'size';
      yield serializers.serialize(
        object.size,
        specifiedType: const FullType(int),
      );
    }
    if (object.type != null) {
      yield r'type';
      yield serializers.serialize(
        object.type,
        specifiedType: const FullType(String),
      );
    }
    if (object.header != null) {
      yield r'header';
      yield serializers.serialize(
        object.header,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.rows != null) {
      yield r'rows';
      yield serializers.serialize(
        object.rows,
        specifiedType: const FullType(BuiltList, [FullType(BuiltList, [FullType(String)])]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerAssets object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerAssetsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'title':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.title = valueDes;
          break;
        case r'size':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.size = valueDes;
          break;
        case r'type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.type = valueDes;
          break;
        case r'header':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.header.replace(valueDes);
          break;
        case r'rows':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(BuiltList, [FullType(String)])]),
          ) as BuiltList<BuiltList<String>>;
          result.rows.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerAssets deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerAssetsBuilder();
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

