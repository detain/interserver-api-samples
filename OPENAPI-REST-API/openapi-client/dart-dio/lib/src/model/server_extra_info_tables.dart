//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_assets.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_extra_info_tables.g.dart';

/// ServerExtraInfoTables
///
/// Properties:
/// * [assets] 
@BuiltValue()
abstract class ServerExtraInfoTables implements Built<ServerExtraInfoTables, ServerExtraInfoTablesBuilder> {
  @BuiltValueField(wireName: r'assets')
  ServerAssets get assets;

  ServerExtraInfoTables._();

  factory ServerExtraInfoTables([void updates(ServerExtraInfoTablesBuilder b)]) = _$ServerExtraInfoTables;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerExtraInfoTablesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerExtraInfoTables> get serializer => _$ServerExtraInfoTablesSerializer();
}

class _$ServerExtraInfoTablesSerializer implements PrimitiveSerializer<ServerExtraInfoTables> {
  @override
  final Iterable<Type> types = const [ServerExtraInfoTables, _$ServerExtraInfoTables];

  @override
  final String wireName = r'ServerExtraInfoTables';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'assets';
    yield serializers.serialize(
      object.assets,
      specifiedType: const FullType(ServerAssets),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerExtraInfoTablesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'assets':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerAssets),
          ) as ServerAssets;
          result.assets.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerExtraInfoTables deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerExtraInfoTablesBuilder();
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

